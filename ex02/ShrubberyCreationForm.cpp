/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 12:53:05 by ldesboui          #+#    #+#             */
/*   Updated: 2026/04/25 14:18:35 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery form", 145, 137), target("Something")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("Shrubbery form", 145, 137), target(target) 

{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other.getName(), other.getSignGrade(), other.getExecGrade()), target(other.target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

const std::string ShrubberyCreationForm::getTarget() const
{
	return (this->target);
}

bool	 ShrubberyCreationForm::checkFile(std::string filename) const
{
        struct stat structStat;

        if (stat(filename.c_str(), &structStat) == 0)
                return (S_ISREG(structStat.st_mode));
        return false;
}
void ShrubberyCreationForm::printAction() const
{
	std::ofstream file((this->target+"_shrubbery").c_str());
	if (!file.is_open() || !checkFile(this->target+"_shrubbery"))
	{
		std::cout << "Can't open / read the file" << std::endl;
		return ;
	}
	file << "               ,@@@@@@@," << std::endl;
    file << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
    file << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
    file << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
    file << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
    file << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
    file << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
    file << "       |o|        | |         | |" << std::endl;
    file << "       |.|        | |         | |" << std::endl;
    file << "    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_" << std::endl;
	file.close();
}

