/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalasan <hbalasan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:12:32 by hbalasan          #+#    #+#             */
/*   Updated: 2023/10/10 16:21:15 by hbalasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(void)
{
	this->idx = 0;
	std::cout << \
		"Welcome to Crappy! A phonebook for up to 8 contacts is created." \
		<< std::endl;
}

Phonebook::~Phonebook(void)
{
	std::cout << "Bye." << std::endl;
}

void	Phonebook::add(void)
{
	//
}