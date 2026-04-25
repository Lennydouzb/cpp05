/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 10:51:57 by ldesboui          #+#    #+#             */
/*   Updated: 2026/04/25 14:17:59 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "AForm.hpp"
#include <ctime>
#include <cstdlib> 

class RobotomyRequestForm : public AForm
{
    private:
		const std::string	target;
        RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm& other);
    public:
        RobotomyRequestForm(const std::string target);
        RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
        ~RobotomyRequestForm();
		const std::string	getTarget() const;
		void				printAction() const;
};
