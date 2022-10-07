/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:51:27 by hcremers          #+#    #+#             */
/*   Updated: 2022/10/07 15:24:04 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
/* ----- PDF: MutantStack ----- */
	{
		MutantStack<int>	mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << "Top: " << mstack.top() << std::endl;

		mstack.pop();

		std::cout << "Size: " << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;

		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

		std::stack<int> s(mstack);

		std::cout << std::endl;
	}

/* ----- PDF: List ----- */
	{
		std::list<int>	mstack;

		mstack.push_back(5);
		mstack.push_back(17);

		std::cout << "Back: " << mstack.back() << std::endl;

		mstack.pop_back();

		std::cout << "Size: " << mstack.size() << std::endl;

		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		//[...]
		mstack.push_back(0);

		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();

		++it;
		--it;

		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

		std::list<int> l(mstack);

		std::cout << std::endl;
	}

/* ----- Copy ----- */
	{
		MutantStack<int>	mstack;
		MutantStack<int>	mstack2;

		mstack.push(5);
		mstack.push(17);

		mstack2 = mstack;
		std::cout << "Top: " << mstack2.top() << std::endl;

		mstack.pop();

		mstack2 = mstack;
		std::cout << "Size: " << mstack2.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);

		mstack2 = mstack;
		MutantStack<int>::iterator it = mstack2.begin();
		MutantStack<int>::iterator ite = mstack2.end();

		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

		std::cout << std::endl;
	}
	return (0);
}