/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:43:41 by hcremers          #+#    #+#             */
/*   Updated: 2022/10/05 17:40:34 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <vector>

int main()
{
	std::list<int>					lst;										// Initiate list

	lst.push_back(6);															// Fill list
	lst.push_back(3);
	lst.push_back(21);
	lst.push_back(42);
	lst.push_back(0);
	lst.push_back(-10);

	std::list<int>::const_iterator	it;											// Initiate iterators
	std::list<int>::const_iterator	ite = lst.end();

	for (it = lst.begin(); it != ite; it++)
		std::cout << *it << std::endl;

	std::cout << std::endl;

	int								n = 5;
	
	try																			// Try to find n
	{
		std::cout << *easyfind(lst, n) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
