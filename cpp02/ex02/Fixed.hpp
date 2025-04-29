/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 13:26:55 by gabastos          #+#    #+#             */
/*   Updated: 2025/04/23 14:07:25 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Fixed
{
	private:

		int					_value;
		static const int	_fractBits = 8;

	public:

		Fixed();
		Fixed(const Fixed &other);
		~Fixed();
		Fixed(const int number);
		Fixed(const float number);

		Fixed &operator=(const Fixed &other);
		Fixed operator+(const Fixed &other);
		Fixed operator*(const Fixed &other);
		Fixed operator-(const Fixed &other);
		Fixed operator/(const Fixed &other);

		Fixed &operator++();
		Fixed operator++(int);
		Fixed &operator--();
		Fixed operator--(int);

		bool operator<(const Fixed &other) const;
		bool operator>(const Fixed &other) const;
		bool operator==(const Fixed &other) const;
		bool operator!=(const Fixed &other) const;
		bool operator<=(const Fixed &other) const;
		bool operator>=(const Fixed &other) const;

		static Fixed&	min(Fixed &one, Fixed &two);
		static const Fixed&	min(const Fixed &one, const Fixed &two);
		static Fixed&	max(Fixed &one, Fixed &two);
		static const Fixed&	max(const Fixed &one, const Fixed &two);

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;


};

std::ostream &operator<<(std::ostream &out, const Fixed &value);