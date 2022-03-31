/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 13:12:53 by msousa            #+#    #+#             */
/*   Updated: 2022/03/31 19:45:06 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) : _type(type) { /* No-op */ }
Weapon::~Weapon( void ) { /* No-op */ }

std::string const &	Weapon::getType( void ) const
{
	return _type;
}

void	Weapon::setType( std::string type )
{
	_type = type;
}
