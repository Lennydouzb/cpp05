/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 10:48:34 by ldesboui          #+#    #+#             */
/*   Updated: 2026/04/25 13:04:46 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Bureaucrat.hpp"

int	main(void)
{
	std::cout << "-------------------------Bureaucrat tests---------------------" << std::endl;
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

	std::cout << "-------------------------Form tests---------------------" << std::endl;
	{
		try
		{
			Form aForm;
			std::cout << aForm;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}	
	{
		try
		{
			Form aForm("Job", 0 , 140);
			std::cout << aForm;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try
		{
			Form aForm("Job", 1 , 169);
			std::cout << aForm;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try
		{
			Form aForm("Job", 50 , 40);
			std::cout << aForm;
			Bureaucrat aBur("Joe", 1);
			std::cout << aBur;
			aBur.signForm(aForm);
			std::cout << aForm;
			aBur.signForm(aForm);
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try
		{
			Form aForm("Job", 50 , 40);
			std::cout << aForm;
			Bureaucrat aBur("Joe", 150);
			std::cout << aBur;
			aBur.signForm(aForm);
			std::cout << aForm;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
}
