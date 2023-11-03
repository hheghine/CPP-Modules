/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhonebookUtils.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalasan <hbalasan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 20:14:42 by hbalasan          #+#    #+#             */
/*   Updated: 2023/10/11 02:12:21 by hbalasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTUTILS_H
# define CONTACTUTILS_H

# include "Contact.hpp"

std::string	add_spaces(int n);
std::string	str_resize(std::string str, unsigned long max);
int			contact_list(Contact contacts[8]);

#endif