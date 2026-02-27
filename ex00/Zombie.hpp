/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 09:52:01 by oamairi           #+#    #+#             */
/*   Updated: 2026/02/27 10:14:40 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie
{
private:
	std::string name;
public:
	Zombie(std::string);
	void	announce( void );
	~Zombie();
};

Zombie*	newZombie( std::string name );
void	randomChump(std::string name);

#endif