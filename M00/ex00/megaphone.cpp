/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalasan <hbalasan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:00:14 by hbalasan          #+#    #+#             */
/*   Updated: 2023/10/13 03:57:21 by hbalasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int	i, j;

	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

	i = 0;
	while (argc > 1 && argv[++i])
	{
		j = -1;
		while (argv[i][++j])
			std::cout << (char)std::toupper(argv[i][j]);
		std::cout << " ";
	}
	std::cout << std::endl;
	return (0);
}