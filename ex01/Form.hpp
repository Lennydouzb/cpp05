/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:51:01 by ldesboui          #+#    #+#             */
/*   Updated: 2026/04/24 16:12:28 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include <string>
#include <iostream>

class Bureaucrat;
class Form
{
	private:
		const	std::string name;
		bool				isSigned;
		const	int			signGrade;
		const	int			execGrade;
	public:

		Form();
		Form(const std::string name, const int sGrade, const int eGrade);
		Form(const Form& aForm);
		Form& operator=(const Form& aForm);
		~Form();
		

		const std::string	getName() const;
		std::string			setIsSigned();
		bool				getIsSigned() const;
		const int			getSignGrade() const;
		const int			getExecGrade() const;
		void				beSigned(Bureaucrat &aBureaucrat);
		class		GradeTooHighException : public std::exception
		{
			public:
			const char* what() const throw();
		};
		class		GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};
};
std::ostream& operator<<(std::ostream &os, const Form& aForm);
