/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:04:54 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/10/09 17:31:50 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Array_TPP
# define Array_TPP

#include "../includes/Array.hpp"

template <class T>
class Array;

template <typename T>
Array<T>::Array(void)
{
    std::cout << GREEN << "Array default constructor called" << RESET
        << std::endl;
    this->_len = 0;
    this->_arr = new T[0];
}

template <typename T>
Array<T>::Array(unsigned int n)
{
    std::cout << GREEN << "Array parameter constructor called" << RESET
        << std::endl;
    this->_len = n;
    this->_arr = new T[n];
}

template <typename T>
Array<T>::Array(Array const &src)
{
    std::cout << GREEN << "Array copy constructor called" << RESET
        << std::endl;
    unsigned int src_len = src.size();

    this->_len = src_len;
    this->_arr = new T[src_len];
    for (unsigned int i = 0; i < src_len; i++)
        this->_arr[i] = src._arr[i];
}

template <typename T>
Array<T>::~Array(void)
{
    std::cout << RED << "Array destructor called" << RESET << std::endl;
    delete [] this->_arr;
}

template <typename T>
Array<T> &Array<T>::operator=(Array const &src)
{
    std::cout << YELLOW << "Array assignation operator called" << RESET
        << std::endl;
    unsigned int src_len = src.size();

    if (this != &src)
    {
        delete [] this->_arr;
        this->_len = src_len;
        this->_arr = new T[src_len];
        for (unsigned int i = 0; i < src_len; i++)
            this->_arr[i] = src._arr[i];
    }
    return (*this);
}

template <typename T>
T &Array<T>::operator[](unsigned int i)
{
    if (i >= this->_len)
    {
        std::cout << BLUE << "Array index out of bounds" << RESET << std::endl;
        std::cout << BLUE << "Array size is " << this->_len << RESET
            << std::endl;
        std::cout << BLUE << "Index is " << i << RESET << std::endl;
        throw std::exception();
    }
    return (this->_arr[i]);
}

template <typename T>
const T &Array<T>::operator[](unsigned int i) const
{
    if (i >= this->_len)
    {
        std::cout << BLUE << "Array index out of bounds" << RESET << std::endl;
        std::cout << BLUE << "Array size is " << this->_len << RESET
            << std::endl;
        std::cout << BLUE << "Index is " << i << RESET << std::endl;
        throw std::exception();
    }
    return (this->_arr[i]);
}

template <typename T>
unsigned int Array<T>::size(void) const
{
    return (this->_len);
}

std::ostream &operator<<(std::ostream &o, Array<int> const &src)
{
    unsigned int src_len = src.size();

    o << "[";
    for (unsigned int i = 0; i < src_len; i++)
    {
        o << src[i];
        if (i < src_len - 1)
            o << ", ";
    }
    o << "]";
    return (o);
}

#endif
