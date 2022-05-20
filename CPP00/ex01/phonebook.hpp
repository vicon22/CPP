/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eveiled <eveiled@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 15:29:08 by eveiled           #+#    #+#             */
/*   Updated: 2021/12/22 17:31:23 by eveiled          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK_HPP__
#define __PHONEBOOK_HPP__

#include "contact.hpp"

class Phonebook {

public:

    Phonebook(void);
    ~Phonebook(void);
    void addContact(void);
	void getContact(void);

private:
	Contact contacts[8];
	int number_contacts;
};

#endif
