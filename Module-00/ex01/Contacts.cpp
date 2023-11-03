/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalasan <hbalasan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 20:03:31 by hbalasan          #+#    #+#             */
/*   Updated: 2023/10/11 02:16:31 by hbalasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

/*****************Setters*****************/
void	Contact::set_fname(std::string str)
{
	this->fname = str;
}

void	Contact::set_lname(std::string str)
{
	this->lname = str;
}

void	Contact::set_nick(std::string str)
{
	this->nick = str;
}

void	Contact::set_phone_num(std::string str)
{
	this->phone_num = str;
}

void	Contact::set_secret(std::string str)
{
	this->secret = str;
}

/*****************Getters*****************/
std::string	Contact::get_fname(void) const
{
	return (this->fname);
}

std::string	Contact::get_lname(void) const
{
	return (this->lname);
}

std::string	Contact::get_nick(void) const
{
	return (this->nick);
}

std::string	Contact::get_phone_num(void) const
{
	return (this->phone_num);
}

std::string	Contact::get_secret(void) const
{
	return (this->secret);
}
