/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:37:03 by hcremers          #+#    #+#             */
/*   Updated: 2022/10/06 13:39:49 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _sizeMax(0)
{
	return;
}

Span::Span(unsigned int n) : _sizeMax(n)
{
	return;
}

Span::Span(const Span& src) : _lst(src._lst), _sizeMax(src._sizeMax)
{
	return;
}

Span::~Span()
{
	return;
}

Span&	Span::operator=(const Span& rhs)
{
	_sizeMax = rhs._sizeMax;
	_lst = rhs._lst;
	return (*this);
}

void	Span::addNumber(int nbr)
{
	if (_lst.size() < _sizeMax)
	{
		std::cout << "Number " << nbr << " has been added to the class" << std::endl;
		_lst.push_back(nbr);
	}
	else
		throw (SizeMaxReachedException());

	return;
}

int		Span::shortestSpan() const
{
	std::list<int>				lst_copy;
	std::list<int>::iterator	it;
	std::list<int>::iterator	next;
	std::list<int>::iterator	ite;
	int							tmp;
	int							ret;

	if(_lst.size() <= 1)
		throw (ClassTooSmallException());

	lst_copy = _lst;
	lst_copy.sort();

	next = lst_copy.begin();
	it = next++;
	ite = lst_copy.end();

	ret = std::abs(*next - *it);
	// ret = std::abs(static_cast<int>(*next) - static_cast<int>(*it));
	next++;
	it++;

	while (next != ite)
	{
		tmp = std::abs(*next - *it);
		// tmp = std::abs(static_cast<int>(*next) - static_cast<int>(*it));
		next++;
		it++;
		ret = (tmp < ret ? tmp : ret);
	}

	return (ret);
}

int		Span::longestSpan() const
{
	if(_lst.size() <= 1)
		throw (ClassTooSmallException());

	int	min = *std::min_element(_lst.begin(), _lst.end());
	int	max = *std::max_element(_lst.begin(), _lst.end());

	return (max - min);
}
