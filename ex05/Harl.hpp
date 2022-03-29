/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:58:00 by msousa            #+#    #+#             */
/*   Updated: 2022/03/27 21:50:20 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL_H__
#define __HARL_H__

# include "main.hpp"

// ************************************************************************** //
//                               Harl Class                                 //
// ************************************************************************** //

class Harl {

public:

	void	complain( std::string level );

private:

	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );

};

typedef void	(Harl::*t_level)( void );

struct s_level {
	std::string		name;
	t_level			level;
};

#endif /* __HARL_H__ */
