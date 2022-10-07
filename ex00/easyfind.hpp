/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:44:41 by hcremers          #+#    #+#             */
/*   Updated: 2022/10/05 17:15:00 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <list>
# include <array>
# include <vector>


class NotFoundException : public std::exception
{
	public:
		virtual const char*	what() const throw()
		{
			return "This value can't be found";
		}
};

template <typename T>
typename T::iterator	easyfind(T& container, int val)
{
	typename T::iterator ret = std::find(container.begin(), container.end(), val);

	if (ret != container.end())
		return (ret);
	else
		throw (NotFoundException());
}

#endif