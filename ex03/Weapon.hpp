/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:58:00 by msousa            #+#    #+#             */
/*   Updated: 2022/03/27 18:42:23 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_H__
#define __WEAPON_H__

# include "main.hpp"

// ************************************************************************** //
//                               Weapon Class                                 //
// ************************************************************************** //

class Weapon {


public:

	Weapon( std::string type );
	~Weapon( void );

	std::string const &		getType( void ) const;
	void					setType( std::string type );

private:

	std::string				_type;

};

#endif /* __WEAPON_H__ */
