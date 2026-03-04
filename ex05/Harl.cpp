/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 12:37:02 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/04 13:47:15 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){};

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra steack costs more money. You didn’t put enough steack in my burger! If you did, I wouldn’t be asking for more!\n";
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void	Harl::debug(void)
{
	std::cout << "I love having extra steack for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra steack for free. I’ve been coming for years, whereas you started working here just last month.\n";
}

void	Harl::complain(std::string level)
{
	void	(Harl::*complain_list[4]) (void) = {&Harl::info, &Harl::error, &Harl::debug, &Harl::warning};
	std::string level_list[4] = {"INFO", "ERROR", "DEBUG", "WARNING"};
	for (size_t i = 0; i < 4; i++)
	{
		if (level_list[i].compare(level.c_str()) == 0)
			(this->*complain_list[i])();
	}
}

Harl::~Harl(){};
