/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 13:20:53 by msousa            #+#    #+#             */
/*   Updated: 2022/03/31 19:47:09 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name) { /* No-op */ }
HumanB::~HumanB( void ) { /* No-op */ }

void	HumanB::attack( void ) const
{
	std::cout << _name << " attacks with their ";
	std::cout << _weapon->getType() << std::endl;
}

void	HumanB::setWeapon( Weapon& weapon )
{
	_weapon = &weapon;
}
