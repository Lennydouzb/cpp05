/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 18:04:41 by ldesboui          #+#    #+#             */
/*   Updated: 2026/04/25 19:34:34 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(){}

Intern::~Intern(){}

Intern::Intern(Intern &other)
{
	(void)other;
}

Intern& Intern::operator=(const Intern& other)
{
	(void)other;
	return (*this);
}

AForm *Intern::makeForm(std::string nameForm, std::string target)
{
	const std::string val[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
	int	i = 0;
	while (i < 3)
	{
		if (nameForm == val[i])
			break;
		++i;
	}
	switch (i)
	{
		case (0):
			std::cout << "Intern creates " << nameForm << std::endl;
			return (new PresidentialPardonForm(target));
		case (1):
			std::cout << "Intern creates " << nameForm << std::endl;
			return (new RobotomyRequestForm(target));
		case (2):
			std::cout << "Intern creates " << nameForm << std::endl;
			return (new ShrubberyCreationForm(target));
		default:
			std::cout << "Form does not exist" << std::endl;
			return (NULL);
	}
}
