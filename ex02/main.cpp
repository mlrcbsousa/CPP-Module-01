/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:56:49 by msousa            #+#    #+#             */
/*   Updated: 2022/03/27 12:16:00 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main( void )
{
	std::string		stringVAR("HI THIS IS BRAIN");
	std::string*	stringPTR = &stringVAR;
	std::string&	stringREF = stringVAR;

	std::cout << "memory address of the string variable: ";
	std::cout << &stringVAR << std::endl;
	std::cout << "memory address held by stringPTR: ";
	std::cout << stringPTR << std::endl;
	std::cout << "memory address held by stringREF: ";
	std::cout << &stringREF << std::endl;

	std::cout << "value of the string variable: ";
	std::cout << stringVAR << std::endl;
	std::cout << "value pointed to by stringPTR: ";
	std::cout << *stringPTR << std::endl;
	std::cout << "value pointed to by stringREF: ";
	std::cout << stringREF << std::endl;

	return 0;
}
