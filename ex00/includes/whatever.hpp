/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:23:20 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/10/09 13:41:56 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T min(T &a, T &b)
{
    return (a < b ? a : b);
}

template <typename T>
T max(T &a, T &b)
{
    return (a > b ? a : b);
}

#endif
