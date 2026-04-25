/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 17:48:18 by ldesboui          #+#    #+#             */
/*   Updated: 2026/04/25 19:29:03 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <string>

class Intern
{
	public:
		Intern();
		~Intern();
		Intern(Intern &other);
		Intern& operator=(const Intern& other);
		AForm *makeForm(std::string nameForm, std::string target);
};
