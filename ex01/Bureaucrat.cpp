/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 10:12:45 by ldesboui          #+#    #+#             */
/*   Updated: 2026/04/25 10:11:55 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("joe mama")
{
	this->grade = 75;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade = grade;
}

Bureaucrat::~Bureaucrat(){};

Bureaucrat::Bureaucrat(const Bureaucrat& aBureaucrat) : name(aBureaucrat.name)
{
	this->grade = aBureaucrat.grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& aBureaucrat)
{
	if (this == &aBureaucrat)
		return (*this);
	this->grade = aBureaucrat.grade;
	return (*this);
}

const std::string	Bureaucrat::getName() const
{
	
	return (this->name);
}

int					Bureaucrat::getGrade() const
{
	return (this->grade);
}

void				Bureaucrat::increment()
{
	if (this->grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade--;
}

void				Bureaucrat::signForm(Form &aForm)
{
	try
	{
		aForm.beSigned(*this);
		std::cout << this->name << " signed " << aForm.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << this->name << " couldn't sign " << aForm.getName() << " because " << e.what() << std::endl;
	}
}

void				Bureaucrat::decrement()
{
	if (this->grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade++;

}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade() << "." << std::endl;
	return (os);
}
