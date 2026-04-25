/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 16:12:14 by ldesboui          #+#    #+#             */
/*   Updated: 2026/04/25 18:22:08 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name("A form"), signGrade(75), execGrade(75)
{
	this->isSigned = false;
}

Form::Form(const std::string name, const int sGrade, const int eGrade) : name(name), signGrade(sGrade), execGrade(eGrade)
{
	if (this->signGrade < 1)
		throw Form::GradeTooHighException();
	if (this->signGrade > 150)
		throw Form::GradeTooLowException();
	if (this->execGrade < 1)
		throw Form::GradeTooHighException();
	if (this->execGrade > 150)
		throw Form::GradeTooLowException();
	this->isSigned = false;
}

Form::Form(const Form& aForm) : name(aForm.name), signGrade(aForm.signGrade), execGrade(aForm.execGrade)
{
	if (this->signGrade < 1)
		throw Form::GradeTooHighException();
	if (this->signGrade > 150)
		throw Form::GradeTooLowException();
	if (this->execGrade < 1)
		throw Form::GradeTooHighException();
	if (this->execGrade > 150)
		throw Form::GradeTooLowException();
	this->isSigned = false;
}

Form::~Form() {}

Form &Form::operator=(const Form& other)
{
	(void)other;
	return (*this);
}

const std::string Form::getName() const
{
	return (this->name);
}

bool Form::getIsSigned() const
{
	return (this->isSigned);
}

int Form::getSignGrade() const
{
	return (this->signGrade);
}

int Form::getExecGrade() const
{
	return (this->execGrade);
}

void Form::beSigned(Bureaucrat &aBureaucrat)
{
	if (this->isSigned == false)
	{
		if (aBureaucrat.getGrade() > this->signGrade)
			throw Form::GradeTooLowException();
		else
			this->isSigned = true;
	}
	else
		std::cout << this->name << " has already been signed" << std::endl;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}
std::ostream& operator<<(std::ostream &os, const Form& aForm)
{
	os << "Form : " << aForm.getName() << " | signGrade : " << aForm.getSignGrade() << " | execGrade : " << aForm.getExecGrade();
	os << " | signed : " << aForm.getIsSigned() << std::endl;
	return (os);
}
