/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:56:49 by msousa            #+#    #+#             */
/*   Updated: 2022/03/28 20:50:41 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void    replace(std::string& line, const std::string& s1, const std::string& s2)
{
    size_t	start = 0;

	while (true)
	{
		size_t	i = line.find(s1, start);

		if (i == std::string::npos)
			break ;

		line = line.substr(0, i) + s2 + line.substr(i + s1.length());
		start = i + s2.length();
	}
}

int	main( int argc, char* argv[] )
{
	if (argc != 4) {
		ERROR("arguments <filename> <s1> <s2> required");
		return 1;
	}

	std::ifstream   in(argv[1], std::ifstream::in);

	if (in.fail()) {
		ERROR("opening file");
        return 2;
    }

	std::string     filename(argv[1]);
    std::ofstream   out((filename + ".replace").c_str());

    if (out.fail()) {
		ERROR("creating file");
        return 3;
    }

    std::string     s1(argv[2]);
    std::string     s2(argv[3]);

	if (!s1.length()) {
        ERROR("string to replace can't be empty");
        return 4;
    }

	while (!in.eof())
	{
        std::string 	line;
        std::getline(in, line);

		replace(line, s1, s2);

		out << line << std::endl;
    }

    in.close();
    out.close();
	return 0;
}
