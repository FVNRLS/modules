/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 12:54:13 by rmazurit          #+#    #+#             */
/*   Updated: 2023/03/12 12:54:13 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <list>
#include <unistd.h>
#include <algorithm>

enum errors {

};

class RPN {
private:
	std::list<int>	_data;
	int 			_res;
	std::string 	_input;

	int 			parse_input();
public:
	RPN();
	RPN(const std::string &input);
	RPN(const RPN &src);
	RPN &operator=(const RPN &src);
	~RPN();

	int calculate();
};