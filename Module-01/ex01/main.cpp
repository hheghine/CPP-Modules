/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalasan <hbalasan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:17:29 by hbalasan          #+#    #+#             */
/*   Updated: 2023/11/05 18:55:59 by hbalasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name);

int	main(void)
{
	int	size = 7;
	Zombie	*horde = zombieHorde(size, "Zomb");

	for (int i = 0; i < size; i++)
		horde[i].announce();
	delete [] horde;
}