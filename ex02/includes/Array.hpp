/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:04:13 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/10/09 16:46:20 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Array_HPP
# define Array_HPP

#include <iostream>
#include "colours.hpp"
#include "../src/Array.tpp"

template <class T>
class Array
{
    private:
        T *_arr;
        unsigned int _len;

    public:
        // Constructors & Destructors
        Array(void);
        Array(unsigned int n);
        Array(Array const &src);
        ~Array(void);

        // Operators
        Array &operator=(Array const &src);

        // Subscript operator - this means that we can use the class as an array
        T &operator[](unsigned int i);
        const T &operator[](unsigned int i) const;

        unsigned int size(void) const;
};

template <typename T>
std::ostream &operator<<(std::ostream &o, Array<T> const &src);


#endif
