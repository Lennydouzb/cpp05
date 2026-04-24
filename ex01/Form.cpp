/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 16:12:14 by ldesboui          #+#    #+#             */
/*   Updated: 2026/04/24 16:15:06 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
{

}

Form::Form(const std::string name, const int sGrade, const int eGrade)
{

}

Form::Form(const Form& aForm)
{

}

Form::~Form()
{

}

const std::string Form::getName() const
{

}

std::string Form::setIsSigned()
{

}

bool Form::getIsSigned() const
{

}

const int Form::getSignGrade() const
{

}

const int Form::getExecGrade() const
{

}

void Form::beSigned(Bureaucrat &aBureaucrat)
{

}

const char* Form::GradeTooHighException::what() const throw()
{

}

const char* Form::GradeTooLowException::what() const throw()
{

}

