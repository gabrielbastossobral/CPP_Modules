#include "ScalarConverter.hpp"
#include <iostream>
#include <string>
#include <limits>
#include <cstdlib>
#include <cmath>
#include <sstream>
#include <cerrno>

ScalarConverter::ScalarConverter(void)
{
	std::cout << "constructor default called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
	std::cout << "copy constructor called" << std::endl;
	*this = other;
	return ;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
	std::cout << " copy assignement operator called" << std::endl;
	(void)other;
	return *this;
}

ScalarConverter::~ScalarConverter(void)
{
	std::cout << "destructor called" << std::endl;
}

static	int	detectTarget(std::string str)
{
	if (str == "-inff" || str == "+inff" || str == "nanf"
		|| str == "-inf" || str == "+inf" || str == "nan")
		return (SPECIAL);
	
	int	index = (str[0] == '-'); 
	int	index_start = index;

	if (!str[index]) 
		return (CHAR);

	if (str[index] == '0' && isdigit(str[index + 1])) 
		return (INVALID);

	while (isdigit(str[index]))
		index++;
		
	if (!str[index]) 
		return (INT);
	
	if (index == index_start && !str[index + 1]) 
	return (CHAR);

	if (index == index_start || str[index] != '.') 
	return (INVALID);

	index++;
	index_start = index;
	while (isdigit(str[index]))
		index++;

	if (index_start == index) 
		return (INVALID);

	if (!str[index]) 
		return (DOUBLE);

	if (str[index] != 'f')
		return (INVALID);

	if (!str[index + 1])
		return (FLOAT);
		
	return (INVALID);	
}

static	std::string	print_dot(int i, float f)
{
	float	rlt = static_cast<float>(i);

	if (rlt == f)
		return(".0");
	return ("");
}

static void	printRlt(char c, int i, float f, double d)
{
	if (isprint(c))
		std::cout << "char: " << c << std::endl;
	else
		std::cout << "char: non printable" << std::endl;
	
	double overflow = static_cast<double>(i);

	if ((overflow > d && overflow - d >= 1) || (d > overflow &&  d - overflow))
		std::cout << "int: Overflow" << std::endl;
	else
		std::cout << "int: " << i << std::endl;
	std::cout << "float: " << f << print_dot(i, f) << "f" << std::endl;
	std::cout << "double: " << f << print_dot(i, f) << std::endl;
}

static void convertChar(std::string str )
{
	char	c = str[0];
	int		i = static_cast<int>(c);
	float	f = static_cast<float>(c);
	double	d = static_cast<double>(c);

	printRlt(c, i , f, d);
}

static void	convertInt(std::string str)
{
	std::istringstream	rlt(str);

	int		i;
	rlt >> i;
	if (rlt.fail())
	{
		std::cout << "overflow" << std::endl;
		return ;
	}
	
	char	c = static_cast<char>(i);
	float	f = static_cast<float>(i);
	double	d = static_cast<double>(i);

	printRlt(c, i, f, d);
}

static void	convertFloat(std ::string str)
{
	float 	f = strtof(str.c_str(), NULL);
	//errno = 0;
	if (errno == ERANGE) 
	{
		std::cout << "Float overflow" << std::endl;
		return ;
	}

	char	c = static_cast<char>(f);
	int		i = static_cast<int>(f);
	double	d = static_cast<double>(f);
	
	printRlt(c, i, f, d);
}

static void	convertDouble(std::string str)
{
	double	d = strtod(str.c_str(), NULL);
	
	if (errno == ERANGE)
	{
		std::cout << "Double overflow" << std::endl;
		return ;
	}
	char	c = static_cast<char>(d);
	int		i = static_cast<int>(d);
	float	f = static_cast<float>(d);

	printRlt(c, i, f, d);
}

static void	convertSpec(std::string	str)
{
	if (str == "+inff" || str == "+inf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
	} else if (str == "-inff" || str == "-inf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	} else if (str == "nanf" || str == "nan")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	} else
		std::cout << "type special not handled: " << str << std::endl;
}

void	ScalarConverter::convert(const std::string &target)
{
	int	type = detectTarget(target);

	switch (type)
	{
		case CHAR:
			convertChar(target);
			break;
		
		case INT:
			convertInt(target);
			break;
		
		case FLOAT:
			convertFloat(target);
			break;
		
		case DOUBLE:
			convertDouble(target);
			break;
		
		case SPECIAL:
			convertSpec(target);
			break;
			
		default:
			break;
	}
}
