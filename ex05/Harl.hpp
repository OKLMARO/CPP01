/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 12:36:59 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/04 12:45:21 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL_H__
# define __HARL_H__

#include <iostream>

class Harl
{
private:
	void	info(void);
	void	error(void);
	void	debug(void);
	void	warning(void);
public:
	Harl();
	void complain(std::string level);
	~Harl();
};

#endif
