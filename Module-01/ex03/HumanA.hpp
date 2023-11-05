/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalasan <hbalasan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:42:28 by hbalasan          #+#    #+#             */
/*   Updated: 2023/11/05 21:57:58 by hbalasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

class	HumanA
{
	private:
		std::string	_name;
		Weapon		&_weapon; // guarantees that the class cannot exist without a weapon
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void	attack(void);
		void	setWeapon(Weapon weapon);
};
