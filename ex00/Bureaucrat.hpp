/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 10:12:50 by ldesboui          #+#    #+#             */
/*   Updated: 2026/04/23 10:49:58 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include <string>
#include <iostream>

class Bureaucrat
{
private:
	const std::string	name;
	int					grade;
public:
	Bureaucrat();
	Bureaucrat(const std::string name, int grade);
	~Bureaucrat();
	Bureaucrat &operator=(const Bureaucrat& aBureaucrat);
	Bureaucrat(const Bureaucrat& aBureaucrat);
	

	const std::string	getName() const;
	int					getGrade() const;
	void				increment();
	void				decrement();
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
std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);
