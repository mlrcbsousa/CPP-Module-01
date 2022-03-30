/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:56:49 by msousa            #+#    #+#             */
/*   Updated: 2022/03/30 22:11:46 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main( int argc, char *argv[] )
{
	if (argc != 2) {
		LOGERR("arguments <filename> <s1> <s2> required");
		return 1;
	}

	std::string levels[COUNT] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	std::string	level(argv[1]);

	int	i = 0;
	while (i < COUNT) {
		if (levels[i] == level)
			break ;
		i++;
	}

	Harl		harl;

	switch(i) {
		case DEBUG :
			harl.complain("DEBUG");
			harl.complain("INFO");
			harl.complain("WARNING");
			harl.complain("ERROR");
			break ;
		case INFO  :
			harl.complain("INFO");
			harl.complain("WARNING");
			harl.complain("ERROR");
			break ;
		case WARNING	:
			harl.complain("WARNING");
			harl.complain("ERROR");
			break ;
		case ERROR  :
			harl.complain("ERROR");
			break ;
		default :
         	LOGERR("level " + level + " doesn't exist");
			break ;
	}

	return 0;
}
