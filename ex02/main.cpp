/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 10:48:34 by ldesboui          #+#    #+#             */
/*   Updated: 2026/04/25 17:34:10 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	//abstract proof
	//	AForm aForm;
	std::cout << "----------------------Presidential ------------------" <<  std::endl;
	try
	{
		Bureaucrat	Franck("Franck", 26);
		PresidentialPardonForm Pre("Presidential");
		Franck.signForm(Pre);
	}
	catch(std::exception &e)
	{
		std::cout << e.what()<< std::endl;
	}
	try
	{
		Bureaucrat	Franck("Franck", 25);
		PresidentialPardonForm Pre("Presidential");
		Franck.signForm(Pre);
		Pre.execute(Franck);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	Franck("Franck", 4);
		PresidentialPardonForm Pre("Presidential");
		Franck.signForm(Pre);
		Pre.execute(Franck);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "----------------------Robotomy ------------------" <<  std::endl;
	try
	{
		Bureaucrat	Franck("Franck", 79);
		RobotomyRequestForm Pre("Robo");
		Franck.signForm(Pre);
	}
	catch(std::exception &e)
	{
		std::cout << e.what()<< std::endl;
	}
	try
	{
		Bureaucrat	Franck("Franck", 71);
		RobotomyRequestForm Pre("Robo");
		Franck.signForm(Pre);
		Pre.execute(Franck);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	Franck("Franck", 4);
		RobotomyRequestForm  Pre("Robo");
		Franck.signForm(Pre);
		Pre.execute(Franck);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "----------------------Shruberry ------------------" <<  std::endl;
	try
	{
		Bureaucrat	Franck("Franck", 150);
		ShrubberyCreationForm Pre("shrub");
		Franck.signForm(Pre);
	}
	catch(std::exception &e)
	{
		std::cout << e.what()<< std::endl;
	}
	try
	{
		Bureaucrat	Franck("Franck", 138);
		ShrubberyCreationForm Pre("shrub");
		Franck.signForm(Pre);
		Pre.execute(Franck);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	Franck("Franck", 4);
		ShrubberyCreationForm Pre("shrub");
		Franck.signForm(Pre);
		Pre.execute(Franck);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
