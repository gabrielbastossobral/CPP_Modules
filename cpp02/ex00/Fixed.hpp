/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 09:54:04 by gabastos          #+#    #+#             */
/*   Updated: 2025/04/23 11:32:42 by gabastos         ###   ########.fr       */
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
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};
