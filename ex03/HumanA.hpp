/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 15:12:41 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/03 15:52:14 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANA_H_
# define _HUMANA_H_
# include <iostream>
# include "Weapon.hpp"

class HumanA
{
private:
	Weapon	&weapon;
	std::string	name;
public:
	HumanA(std::string name, Weapon &weapon);
	void	attack(void);
	~HumanA();
};

#endif
