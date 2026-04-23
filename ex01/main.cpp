/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 10:48:34 by ldesboui          #+#    #+#             */
/*   Updated: 2026/04/23 11:00:45 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat aBureaucrat("Joe", 149);
		std::cout << aBureaucrat;
		aBureaucrat.decrement();
		std::cout << aBureaucrat;
		aBureaucrat.increment();
		std::cout << aBureaucrat;
		aBureaucrat.decrement();
		std::cout << aBureaucrat;
		aBureaucrat.decrement();
	}
	catch(std::exception &e)
	{
		std::cerr << e.what()  << std::endl;
	}


	try
	{
		Bureaucrat aBureaucrat("Joe", 2);
		std::cout << aBureaucrat;
		aBureaucrat.increment();
		std::cout << aBureaucrat;
		aBureaucrat.decrement();
		std::cout << aBureaucrat;
		aBureaucrat.increment();
		std::cout << aBureaucrat;
		aBureaucrat.increment();
	}
	catch(std::exception &e)
	{
		std::cerr << e.what()  << std::endl;
	}



	try
	{
		Bureaucrat aBureaucrat("Joe", 151);
		std::cout << aBureaucrat;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what()  << std::endl;
	}



	try
	{
		Bureaucrat aBureaucrat("Joe", 0);
		std::cout << aBureaucrat;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what()  << std::endl;
	}


}
