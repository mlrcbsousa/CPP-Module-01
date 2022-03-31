/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:58:00 by msousa            #+#    #+#             */
/*   Updated: 2022/03/31 19:47:24 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMAN_B_H__
#define __HUMAN_B_H__

# include <iostream>
# include "Weapon.hpp"

// ************************************************************************** //
//                               HumanB Class                                 //
// ************************************************************************** //

class HumanB {


public:

	HumanB( std::string name );
	~HumanB( void );

	void			attack( void ) const;
	void			setWeapon( Weapon& weapon );

private:

	std::string		_name;
	Weapon*			_weapon;

};

#endif /* __HUMAN_B_H__ */
