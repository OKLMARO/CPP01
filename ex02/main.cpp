/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 12:05:10 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/03 14:07:37 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;
	std::cout << "The memory address of the string variable: " << &string << "\n";
	std::cout << "The memory address held by stringPTR: " << stringPTR << "\n";
	std::cout << "The memory address held by stringREF: " << &stringREF << "\n";
	std::cout << "The value of the string variable: " << string << "\n";
	std::cout << "The value pointed to by stringPTR: " << *stringPTR << "\n";
	std::cout << "The value pointed to by stringREF: " << stringREF << "\n";
	return (0);
}
