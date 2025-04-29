/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 11:17:56 by gabastos          #+#    #+#             */
/*   Updated: 2025/04/16 14:50:58 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int		printError(std::string error)
{
	std::cerr << error << std::endl;
	return (1);
}

int 	printError(std::string error, std::ifstream &file)
{
	std::cerr << error << std::endl;
	file.close();
	return (1);
}

int		searchAndReplace(const char *file_name, const std::string &s1, const std::string &s2)
{
	std::ifstream	infile(file_name);
	std::string		text;
	std::string		new_file;

	if (!infile.is_open())
		return (printError("Error: could not open file"));
	getline(infile, text, '\0');
	if (text.empty())
		return (printError("Error: text is empty"));
	new_file = file_name;
	std::ofstream	outfile(new_file.append(".replace").c_str());
	if (!outfile.is_open())
		return (printError("Error: could not create file", infile));
	for (size_t pos = text.find(s1); pos != std::string::npos; pos = text.find(s1, pos + s2.length()))
	{
		text.erase(pos, s1.length());
		text.insert(pos, s2);
	}
	outfile << text;
	infile.close();
	outfile.close();
	return (0);
}

int main(int argc, char **argv)
{
    std::string     search;
    std::string     replace;

	if (argc != 4)
		return (printError("Usage: <filename> <string to find> <string to replace>"));
	search = argv[2];
	replace = argv[3];
	if (search.empty())
		return (printError("Error: no string to find bro"));
	return (searchAndReplace(argv[1], search, replace));
}
