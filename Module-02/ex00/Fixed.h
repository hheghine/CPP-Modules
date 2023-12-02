/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalasan <hbalasan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:52:03 by hbalasan          #+#    #+#             */
/*   Updated: 2023/12/02 21:09:56 by hbalasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H__
# define __FIXED_H__

# include <iostream>

class	Fixed
{
	private:
		int					_value;
		static const int	_fract;
	public:
		Fixed(void);
		Fixed(Fixed const &copy);
		~Fixed(void);
		
		Fixed	&operator=(Fixed const &copy);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

# include "Fixed.hpp"

#endif