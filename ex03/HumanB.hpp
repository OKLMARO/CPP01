/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 15:21:57 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/03 15:54:38 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANB_H_
# define _HUMANB_H_
# include <iostream>
# include "Weapon.hpp"

class HumanB
{
private:
	Weapon	*weapon;
	std::string	name;
public:
	HumanB(std::string name);
	void	attack(void);
	void	setWeapon(Weapon &weapon);
	~HumanB();
};

#endif
