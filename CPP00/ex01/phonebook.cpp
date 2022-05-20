/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eveiled <eveiled@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 14:31:21 by eveiled           #+#    #+#             */
/*   Updated: 2021/12/22 17:20:43 by eveiled          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::~Phonebook(void)
{
    return ;
}

void Phonebook::addContact(void) {
    if (number_contacts > 6) {
        int i = 0;
        while (i < 7){
            contacts[i] = contacts[i + 1];
            contacts[i].setIndex(i);
            i++;
        }
        Contact contact;
        contact.setInfo();
        contact.setIndex(7);
        contacts[7] = contact;
        i = 0;
    }
    else {
        number_contacts++;
        Contact contact;
        contact.setIndex(number_contacts);
        contact.setInfo();
        contacts[number_contacts] = contact;
    }
}

static void	displayHeader(void)
{
    std::string	header;
    std::string	line(43, '-');

    header += "     Index|";
    header += "First Name|";
    header += " Last Name|";
    header += "  Nickname";
    std::cout << header << std::endl << line << std::endl;
}

static int	stringToInt(std::string str)
{
    int	i;
    int res = 0;

    i = 0;
    while (str[i] && str[i] >= '0' && str[i] <= '9')
    {
        res = 10 * res + str[i] - '0';
        i++;
    }
    if (str[i])
        return (-1);
    return (res);
}

void	Phonebook::getContact(void) {
    int i;
    int index;
    std::string indexStr;

    if (number_contacts == -1) {
        std::cout << "Your phonebook is empty." << std::endl << std::endl;
        return;
    }
    displayHeader();
    i = -1;
    while (++i <= number_contacts)
        contacts[i].displayContact();
    std::cout << std::endl;
    index = -1;
    while (index < 0 || index > number_contacts) {
        std::cout << "Enter a valid index: ";
        std::cin >> indexStr;
        index = stringToInt(indexStr);
    }
    contacts[index].displayContactDetails();
    std::cout << std::endl;
}

Phonebook::Phonebook() {
    number_contacts = -1;
    return;
}
