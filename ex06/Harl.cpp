/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 13:10:27 by msousa            #+#    #+#             */
/*   Updated: 2022/03/27 21:51:03 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	Harl::complain( std::string level_name )
{
	static s_level definitions[COUNT] = {
		{ "DEBUG", 		&Harl::debug },
		{ "INFO", 		&Harl::info },
		{ "WARNING", 	&Harl::warning },
		{ "ERROR", 		&Harl::error }
	};
	t_level level = NULL;

	for (size_t i = 0; i < COUNT; i++) {
		if (definitions[i].name == level_name) {
			level = definitions[i].level;
			break ;
		}
	}

	if (level)
		CALL(*this, level)();
	else
		LOGERR("level " + level_name + " doesn't exist");
}

void	Harl::debug( void )
{
	LOG("[DEBUG]");
	LOG("I love having extra bacon for my 7XL-double-cheese-triple-pickle-");
	LOG("special- ketchup burger. I really do!");
	LOG("");
}

void	Harl::info( void )
{
	LOG("[INFO]");
	LOG("I cannot believe adding extra bacon costs more money. You didn’t put ");
	LOG("enough bacon in my burger! If you did, I wouldn’t be asking for more!");
	LOG("");
}

void	Harl::warning( void )
{
	LOG("[WARNING]");
	LOG("I think I deserve to have some extra bacon for free. I’ve been ");
	LOG("coming for years whereas you started working here since last month.");
	LOG("");
}

void	Harl::error( void )
{
	LOG("[ERROR]");
	LOG("This is unacceptable! I want to speak to the manager now.");
	LOG("");
}
