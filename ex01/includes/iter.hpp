/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:57:14 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/10/09 14:31:11 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Iter_HPP
# define Iter_HPP

#include <iostream>

template <typename T>
void iter(T *arr, int len, void (*f)(T const &))
{
    for (int i = 0; i < len; i++)
        f(arr[i]);
}

template <typename T>
void print(T const &x)
{
    std::cout << x << std::endl;
    return ;
}


#endif
