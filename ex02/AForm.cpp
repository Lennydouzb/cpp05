/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 16:12:14 by ldesboui          #+#    #+#             */
/*   Updated: 2026/04/25 17:39:55 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : name("A form"), signGrade(75), execGrade(75)
{
	this->isSigned = false;
}

AForm::AForm(const std::string name, const int sGrade, const int eGrade) : name(name), signGrade(sGrade), execGrade(eGrade)
{
	if (this->signGrade < 1)
		throw AForm::GradeTooHighException();
	if (this->signGrade > 150)
		throw AForm::GradeTooLowException();
	if (this->execGrade < 1)
		throw AForm::GradeTooHighException();
	if (this->execGrade > 150)
		throw AForm::GradeTooLowException();
	this->isSigned = false;
}

AForm::AForm(const AForm& aAForm) : name(aAForm.name), signGrade(aAForm.signGrade), execGrade(aAForm.execGrade)
{
	if (this->signGrade < 1)
		throw AForm::GradeTooHighException();
	if (this->signGrade > 150)
		throw AForm::GradeTooLowException();
	if (this->execGrade < 1)
		throw AForm::GradeTooHighException();
	if (this->execGrade > 150)
		throw AForm::GradeTooLowException();
	this->isSigned = false;
}

AForm::~AForm() {}

const std::string AForm::getName() const
{
	return (this->name);
}

bool AForm::getIsSigned() const
{
	return (this->isSigned);
}

int AForm::getSignGrade() const
{
	return (this->signGrade);
}

int AForm::getExecGrade() const
{
	return (this->execGrade);
}

void AForm::beSigned(Bureaucrat &aBureaucrat)
{
	if (this->isSigned == false)
	{
		if (aBureaucrat.getGrade() > this->signGrade)
			throw AForm::GradeTooLowException();
		else
			this->isSigned = true;
	}
	else
		std::cout << this->name << " has already been signed" << std::endl;
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

void	AForm::execute(Bureaucrat const & executor) const
{
	if (this->isSigned == true)
	{
		if (executor.getGrade() < this->execGrade)
		{
			this->printAction();
			std::cout << executor.getName() << " executed " << this->getName() << std::endl;
		}
		else
			throw AForm::GradeTooLowException();
	}
	else
		std::cout << this->name << "is not signed, can't execute" << std::endl;
}
std::ostream& operator<<(std::ostream &os, const AForm& aAForm)
{
	os << "AForm : " << aAForm.getName() << " | signGrade : " << aAForm.getSignGrade() << " | execGrade : " << aAForm.getExecGrade();
	os << " | signed : " << aAForm.getIsSigned() << std::endl;
	return (os);
}
