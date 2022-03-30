/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:58:00 by msousa            #+#    #+#             */
/*   Updated: 2022/03/30 22:03:58 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MAIN_H__
#define __MAIN_H__

# include <iostream>

# include "Harl.hpp"

# define LOG(x) std::cout << x << std::endl
# define LOGERR(x) std::cerr << "Error: " << x << std::endl

# define CALL(object, member_pointer) ((object).*(member_pointer))

# define COUNT 4

enum e_level {
	DEBUG,
	INFO,
	WARNING,
	ERROR,
};

#endif /* __MAIN_H__ */
