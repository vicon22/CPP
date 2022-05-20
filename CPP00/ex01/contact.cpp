/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eveiled <eveiled@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 17:20:29 by eveiled           #+#    #+#             */
/*   Updated: 2021/12/22 17:30:10 by eveiled          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact::Contact(void)
{
    return ;
}

Contact::~Contact(void)
{
    return ;
}

std::string Contact::getName()
{
    return _first_name;
}

int Contact::getIndex(){
    return _index;
}

void Contact::setInfo(void)
{
	std::cout << "First_name: ";
//    getline(std::cin, first_name);
	std::cin >> this->_first_name;
	std::cout << "Last_name: ";
	std::cin >> this->_last_name;
	std::cout << "Nickname: ";
	std::cin >> this->_nickname;
	std::cout << "Phone number: ";
	std::cin >> this->_ph_number;
	std::cout << "Darkest secret: ";
	std::cin >> this->_secret;
}

void Contact::getInfo(void)
{
	std::cout << std::setw(17) << "First_name: " << this->_first_name << std::endl;
	std::cout << std::setw(17) << "Last_name: " << this->_last_name << std::endl;
	std::cout << std::setw(17) << "Nickname: " << this->_nickname << std::endl;
	std::cout << std::setw(17) << "Phone number: " << this->_ph_number << std::endl;
}

void	Contact::setIndex(int index)
{
    _index = index;
}

static void	printTenChar(std::string str)
{
    int			len;
    std::string	spaces(10, ' ');

    len = str.length();
    if (len <= 10)
        std::cout << spaces.substr(0, 10 - len) << str;
    else
        std::cout << str.substr(0, 9) << '.';
}

void	Contact::displayContact(void)
{
    std::string		index;

    index = _index + '0';
    printTenChar(index);
    std::cout << "|";
    printTenChar(_first_name);
    std::cout << "|";
    printTenChar(_last_name);
    std::cout << "|";
    printTenChar(_nickname);
    std::cout << std::endl;
}

void	Contact::displayContactDetails(void)
{
    std::cout << std::setw(17) << "First name  " << _first_name << std::endl;
    std::cout << std::setw(17) << "Last name  " << _last_name << std::endl;
    std::cout << std::setw(17) << "Nickname  " << _nickname << std::endl;
    std::cout << std::setw(17) << "Phone number  " << _ph_number << std::endl;
    std::cout << std::setw(17) << "Darkest secret  " << _secret << std::endl;;
}

