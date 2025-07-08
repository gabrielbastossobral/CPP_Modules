#ifndef	SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <string>
# include <iostream>

# define CHAR 0
# define INT 1
# define FLOAT 2
# define DOUBLE 3
# define SPECIAL 4
# define INVALID 5

class ScalarConverter
{
	public:
		static void	convert(const std::string	&target);
	
	private:
		ScalarConverter(void);
		ScalarConverter(const ScalarConverter &other);
		ScalarConverter &operator=(const ScalarConverter &other);
		~ScalarConverter(void);

};

#endif