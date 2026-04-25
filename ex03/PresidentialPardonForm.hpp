/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 11:16:13 by ldesboui          #+#    #+#             */
/*   Updated: 2026/04/25 13:30:21 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private:
		const std::string	target;
        PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm& other);
    public:
        PresidentialPardonForm(const std::string target);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
        ~PresidentialPardonForm();
		const std::string	getTarget() const;
		void				printAction() const;

};
