/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 11:19:06 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/03 12:03:12 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	if (N <= 0)
	{
		std::cerr << "Error : N <= 0\n";
	}
	Zombie *z = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		z[i].setName(name);
	}
	return z;
}
