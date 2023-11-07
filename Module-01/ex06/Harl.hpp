/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalasan <hbalasan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:59:45 by hbalasan          #+#    #+#             */
/*   Updated: 2023/11/07 14:59:58 by hbalasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL_HPP__
# define __HARL_HPP__

# define YELLOW "\033[0;33m"
# define PURPLE "\033[0;34m"
# define PINK "\033[0;35m"
# define CYAN "\033[0;36m"
# define RESET "\033[0m"

# include <iostream>

class	Harl
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
	public:
		Harl(void);
		~Harl();
		void	complain(std::string level);
};

#endif