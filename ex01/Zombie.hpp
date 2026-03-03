/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 11:18:23 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/03 11:36:39 by oamairi          ###   ########.fr       */
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
	Zombie();
	Zombie(std::string);
	void	announce( void );
	void	setName(std::string name);
	~Zombie();
};

Zombie	*zombieHorde(int N, std::string name);

#endif
