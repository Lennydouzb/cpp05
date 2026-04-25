/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 10:48:34 by ldesboui          #+#    #+#             */
/*   Updated: 2026/04/25 19:35:53 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int	main(void)
{
	Bureaucrat Franck("Franck", 1);
	Intern Intern;

	AForm *Pres;
	AForm *Robot;
	AForm *Shrub;

	Pres = Intern.makeForm("PresidentialPardonForm", "Loulou");
	Pres->beSigned(Franck);
	Pres->execute(Franck);

	Robot = Intern.makeForm("RobotomyRequestForm", "Lala");
	Robot->beSigned(Franck);
	Robot->execute(Franck);

	Shrub = Intern.makeForm("ShrubberyCreationForm", "pipou");
	Shrub->beSigned(Franck);
	Shrub->execute(Franck);

	AForm *null = Intern.makeForm("a", "a");
	if (null == NULL)
		std::cout << "null is very NULL" << std::endl;
	delete Pres;
	delete Robot;
	delete Shrub;
}
