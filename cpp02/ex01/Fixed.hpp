/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 11:19:23 by gabastos          #+#    #+#             */
/*   Updated: 2025/04/23 13:04:02 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Fixed
{
	private:
		int					_fixedPointValue;
		static const int	_fractionalBits = 8;
	public:
		Fixed();
		Fixed(const Fixed &src);
		Fixed &operator=(const Fixed &rhs);
		~Fixed();
		Fixed(int const value);
		Fixed(float const value);
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt(void) const;
		float	toFloat(void) const;
};
std::ostream &operator<<(std::ostream &o, Fixed const &rhs);
