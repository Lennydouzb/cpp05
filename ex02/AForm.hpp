/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:51:01 by ldesboui          #+#    #+#             */
/*   Updated: 2026/04/25 13:29:51 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include <string>
#include <iostream>

class Bureaucrat;
class AForm
{
	private:
		const	std::string name;
		bool				isSigned;
		const	int			signGrade;
		const	int			execGrade;
	public:

		AForm();
		AForm(const std::string name, const int sGrade, const int eGrade);
		AForm(const AForm& aAForm);
		AForm& operator=(const AForm& aAForm);
		virtual ~AForm();
		

		const std::string	getName() const;
		bool				getIsSigned() const;
		int					getSignGrade() const;
		int					getExecGrade() const;
		void				beSigned(Bureaucrat &aBureaucrat);
		void				execute(Bureaucrat const & executor) const;
		virtual void		printAction() const = 0;
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
std::ostream& operator<<(std::ostream &os, const AForm& aAForm);
