/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 14:11:45 by rmazurit          #+#    #+#             */
/*   Updated: 2022/12/28 14:11:45 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/easyfind.hpp"

int main() {

	std::vector<char> v;

	v.push_back('a');
	v.push_back('b');
	v.push_back('c');

	int pos = easyfind(v, 'a');
	if (pos == -1)
		std::cout << "Item not found" << std::endl;
	else
		std::cout << "Item found at position: " << pos << std::endl;

	return 0;
}