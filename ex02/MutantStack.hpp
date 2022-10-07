/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:15:19 by hcremers          #+#    #+#             */
/*   Updated: 2022/10/07 15:45:05 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() : std::stack<T>()								{}
		MutantStack(const MutantStack& src) : std::stack<T>(src)	{}
		virtual	~MutantStack()										{}

		MutantStack&			operator=(const MutantStack& rhs)
		{
			this->c = rhs.c;
			return (*this);
		}

		typedef typename	MutantStack::container_type::iterator				iterator;
		typedef typename	MutantStack::container_type::reverse_iterator		reverse_iterator;
		typedef typename	MutantStack::container_type::const_iterator			const_iterator;
		typedef typename	MutantStack::container_type::const_reverse_iterator	const_reverse_iterator;

		iterator				begin() 		{return (this->c.begin());}
		iterator				end()			{return (this->c.end());}
		reverse_iterator 		rbegin()		{return (this->c.rbegin());}
		reverse_iterator		rend()			{return (this->c.rend());}
		const_iterator			begin()		const {return (this->c.begin());}
		const_iterator			end()		const {return (this->c.end());}
		const_reverse_iterator	rbegin()	const {return (this->c.rbegin());}
		const_reverse_iterator	rend()		const {return (this->c.rend());}
};

#endif