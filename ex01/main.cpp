/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:17:11 by hcremers          #+#    #+#             */
/*   Updated: 2022/10/06 15:00:21 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void addRange(Span* span, int min, int max)
{
	if (min > max)
		return;

	while (min <= max)
	{
		span->addNumber(min++);
	}
}

int	main()
{
	Span	a;
	Span	b(20000);
	
	try																			// Try to add number to empty class
	{
		a.addNumber(1);
	}
	catch (const Span::SizeMaxReachedException& e)
	{
		std::cout << e.what() << std::endl;
	}

	try																			// Add range of numbers to valid class
	{
		addRange(&b, -5000, 5000);
	}
	catch (const Span::SizeMaxReachedException& e)
	{
		std::cout << e.what() << std::endl;
	}

	try																			// Add random numbers to valid class
	{
		b.addNumber(10);
		b.addNumber(-11);
		b.addNumber(42);
		b.addNumber(345);
		b.addNumber(0);
		b.addNumber(19);
		b.addNumber(-245);
		b.addNumber(809);
		b.addNumber(10000);
		b.addNumber(1000);
	}
	catch (const Span::SizeMaxReachedException& e)
	{
		std::cout << e.what() << std::endl;
	}

	try																			// Try member function on empty class
	{
		std::cout << a.longestSpan() << std::endl;
	}
	catch (const Span::ClassTooSmallException& e)
	{
		std::cout << e.what() << std::endl;
	}

	try																			// Try member functions on valid class
	{
		std::cout << b.longestSpan() << std::endl;
		std::cout << b.shortestSpan() << std::endl;
	}
	catch (const Span::ClassTooSmallException& e)
	{
		std::cout << e.what() << std::endl;
	}

	Span	c;
	c = b;

	try																			// Try member functions on copied class
	{
		std::cout << c.longestSpan() << std::endl;
		std::cout << c.shortestSpan() << std::endl;
	}
	catch (const Span::ClassTooSmallException& e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
