/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:58:00 by msousa            #+#    #+#             */
/*   Updated: 2022/03/31 19:47:48 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMAN_A_H__
#define __HUMAN_A_H__

# include <iostream>
# include "Weapon.hpp"

// ************************************************************************** //
//                               HumanA Class                                 //
// ************************************************************************** //

class HumanA {


public:

	HumanA( std::string name, Weapon& weapon );
	~HumanA( void );

	void			attack( void ) const;

private:

	std::string		_name;
	Weapon&			_weapon;

};

#endif /* __HUMAN_A_H__ */
