/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 15:00:32 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/04 14:27:17 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WEAPON_H_
# define _WEAPON_H_
# include <iostream>

class Weapon
{
private:
	std::string type;
public:
	Weapon();
	Weapon(std::string name);
	void	setType(std::string type);
	const std::string	&getType(void);
	~Weapon();
};

#endif
