/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 14:46:15 by rmazurit          #+#    #+#             */
/*   Updated: 2022/11/20 14:46:15 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main() {

	PhoneBook	phonebook;
	std::string	line;
	bool 		phonebook_closed;

	phonebook_closed = false;
	while (!phonebook_closed){
		std::cout << "PHONEBOOK: ";
		std::getline(std::cin, line);
		if (line == "ADD")
			phonebook.add();
		else if (line == "SEARCH")
			phonebook.search();
		else if (line == "EXIT")
			phonebook_closed = true;
	}

	return (0);
}



