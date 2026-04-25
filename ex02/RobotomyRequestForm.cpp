/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 12:52:55 by ldesboui          #+#    #+#             */
/*   Updated: 2026/04/25 14:18:28 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "RobotomyRequestForm.hpp"
RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy Form", 72, 45), target("Something")
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("Robotomy Form", 72, 45), target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other.getName(), other.getSignGrade(), other.getExecGrade()), target(other.target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

const std::string RobotomyRequestForm::getTarget() const
{
	return (this->target);
}

void RobotomyRequestForm::printAction() const
{
	std::cout << "*Drill noises* ";
	srand((unsigned)time(0));
	int	i = (rand()%2) + 1;
	if (i % 2 == 1)
		std::cout << this->target << " has been robotomized successfully" << std::endl;
	else
		std::cout << this->target << " robotomy failed" << std::endl;
}
