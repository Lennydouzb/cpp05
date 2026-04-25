/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 10:51:58 by ldesboui          #+#    #+#             */
/*   Updated: 2026/04/25 18:03:25 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <string>
#include <fstream>
#include <sys/stat.h>

class ShrubberyCreationForm : public AForm
{
    private:
		const std::string	target;
		ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm& other);
    public:
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
        ~ShrubberyCreationForm();
		const std::string	getTarget() const;
		void				printAction() const;
		bool				checkFile(std::string filename) const;
};
