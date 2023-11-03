/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalasan <hbalasan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:35:22 by hbalasan          #+#    #+#             */
/*   Updated: 2023/10/11 02:14:17 by hbalasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class Phonebook
{
private:
	Contact	contacts[8];
	int		idx;
public:
	Phonebook(void);
	~Phonebook(void);

	void	add(void);
	void	search(void);
	void	print(Contact contact);
	
	Contact	get_contact(int idx);
};
#endif