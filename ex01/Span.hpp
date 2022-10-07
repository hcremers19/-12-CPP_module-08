/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:16:55 by hcremers          #+#    #+#             */
/*   Updated: 2022/10/06 12:38:36 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <list>

class Span
{
	public:
		Span();
		Span(unsigned int n);
		Span(const Span& src);
		~Span();

		Span&	operator=(const Span& rhs);

		void	addNumber(int nbr);
		int		shortestSpan() const;
		int		longestSpan() const;

		class SizeMaxReachedException : public std::exception
		{
			public:
				const char*	what() const throw()
				{
					return ("The maximum size has been reached");
				}
		};

		class ClassTooSmallException : public std::exception
		{
			public:
				const char*	what() const throw()
				{
					return ("The number of elements is too small");
				}
		};

	private:
		std::list<int>	_lst;
		unsigned int	_sizeMax;
};

#endif