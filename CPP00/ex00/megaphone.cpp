/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eveiled <eveiled@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 14:31:21 by eveiled           #+#    #+#             */
/*   Updated: 2021/12/22 14:31:27 by eveiled          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	//std::string str;
	int i;
	int j;


	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i])
		{
			if (argv[j][i] >= 'a' && argv[j][i] <= 'z')
				std::cout << (char) (argv[j][i] - 32);
			else
				std::cout << argv[j][i];
			i++;
		}
		j++;
	}
	std::cout << std::endl;
	return (0);
}
