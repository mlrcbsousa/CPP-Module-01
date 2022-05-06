/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:56:49 by msousa            #+#    #+#             */
/*   Updated: 2022/05/06 23:22:17 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main( int argc, char* argv[] )
{
	if (argc != 4) {
		ERROR("arguments <filename> <s1> <s2> required");
		return 1;
	}

	std::ifstream   in(argv[1]);

	if (!in.is_open() || in.fail()) {
		ERROR("opening file");
        return 2;
    }

	std::string     filename(argv[1]);
    std::ofstream   out((filename + ".replace").c_str());

    if (!out.is_open() || out.fail()) {
		ERROR("creating file");
        return 3;
    }

    std::string     s1(argv[2]);
    std::string     s2(argv[3]);

	if (!s1.length()) {
        ERROR("string to replace can't be empty");
        return 4;
    }

	std::string 	line;

	while (getline(in, line))
	{
		int start = 0;
		while (true)
		{
			size_t i = line.find(s1, start);
			if (i == std::string::npos)
				break ;

			out << line.substr(start, i - start) << s2;
			start = i + s1.length();
		}
		out << &line[start] << std::endl;
	}

    in.close();
    out.close();
	return 0;
}
