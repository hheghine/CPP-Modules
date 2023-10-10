/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalasan <hbalasan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:10:01 by hbalasan          #+#    #+#             */
/*   Updated: 2023/10/10 15:54:11 by hbalasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class	Contact
{
	private:
		std::string	fname;
		std::string	lname;
		std::string	nick;
		std::string	phone_num;
		std::string	secret;
	public:
		Contact(void);
		~Contact(void);
		/*******Getters and Setters*******/
		std::string	get_fname(void) const;
		std::string	get_lname(void)	const;
		std::string	get_nick(void) const;
		std::string	get_phone_num(void) const;
		std::string	get_sectret(void) const;
		void		set_fname(std::string str);
		void		set_lname(std::string str);
		void		set_nick(std::string str);
		void		set_phone_num(std::string str);
		void		set_secret(std::string str);
};

#endif