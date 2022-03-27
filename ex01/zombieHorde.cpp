/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 18:54:59 by msousa            #+#    #+#             */
/*   Updated: 2022/03/27 11:35:38 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name )
{
	Zombie*	zombies = new Zombie[N];

	for (int i = 0; i < N; i++) {
        zombies[i].setName(name);
    }

	return zombies;
}
