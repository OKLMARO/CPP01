/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 11:57:45 by oamairi           #+#    #+#             */
/*   Updated: 2026/03/04 13:56:09 by oamairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>

int	main(int argc, char **argv)
{
	if (argc != 4)
		return 1;
	size_t i;
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::ifstream file(argv[1]);
	if (s1.empty() == true || s2.empty() == true || !file)
		return (1);
	std::string new_file_name;
	new_file_name.append(argv[1]);
	new_file_name.append(".replace");
	std::ofstream new_file(new_file_name.c_str());
	if (!new_file)
		return (file.close(), 1);
	std::string ligne;
	while (std::getline(file, ligne))
	{
		while (true)
		{
			i = ligne.find(s1);
			if (i == std::string::npos)
				break ;
			ligne.replace(i, s1.size(), s2);
		}
		new_file << ligne << "\n";
	}
	file.close();
	new_file.close();
	return (0);
}
