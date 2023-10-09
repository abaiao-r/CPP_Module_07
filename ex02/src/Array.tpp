/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:04:54 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/10/09 18:42:04 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Array_TPP
# define Array_TPP

#include "../includes/Array.hpp"

/* class Array<T>:
** is a template class, so we need to include the implementation in the header
** file. This is because the compiler needs to know the implementation of the
** class in order to compile it. If we were to separate the implementation into
** a .cpp file, the compiler would not be able to compile it. This is because
** the compiler does not know what type T is, and therefore cannot compile the
** class. */
template <class T>
class Array;

/* Array<T>::Array(void):
** default constructor. */
template <typename T>
Array<T>::Array(void)
{
    std::cout << GREEN << "Array default constructor called" << RESET
        << std::endl;
    this->_len = 0;
    this->_arr = new T[0];
}

/* Array<T>::Array(unsigned int n):
** parameter constructor. */
template <typename T>
Array<T>::Array(unsigned int n)
{
    std::cout << GREEN << "Array parameter constructor called" << RESET
        << std::endl;
    this->_len = n;
    this->_arr = new T[n];
}

/* Array<T>::Array(Array const &src):
** copy constructor. */
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

/* Array<T>::~Array(void):
** destructor. */
template <typename T>
Array<T>::~Array(void)
{
    std::cout << RED << "Array destructor called" << RESET << std::endl;
    delete [] this->_arr;
}

/* Array<T> &Array<T>::operator=(Array const &src):
** assignation operator overload. */
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

/* T &Array<T>::operator[](unsigned int i):
** subscript operator overload. An subscript operator overload allows us to
** access the class as if it were an array. */
template <typename T>
T &Array<T>::operator[](unsigned int i)
{
    if (i >= this->_len)
    {
        std::cerr << BLUE << "Array index out of bounds\n";
        std::cerr << BLUE << "Array size is " << this->_len << " and you are "
            << "trying to access index " << i << RESET << std::endl;
        throw std::exception();
    }
    return (this->_arr[i]);
}

/* const T &Array<T>::operator[](unsigned int i) const:
** const subscript operator overload. */
template <typename T>
const T &Array<T>::operator[](unsigned int i) const
{
    if (i >= this->_len)
    {
        std::cerr << BLUE << "Array index out of bounds\n";
        std::cerr << BLUE << "Array size is " << this->_len << " and you are "
            << "trying to access index " << i << RESET << std::endl;
        throw std::exception();
    }
    return (this->_arr[i]);
}

/* unsigned int Array<T>::size(void) const:
** returns the size of the array. */
template <typename T>
unsigned int Array<T>::size(void) const
{
    return (this->_len);
}

/* std::ostream &operator<<(std::ostream &o, Array<T> const &src):
** output stream operator overload. It allows us to print the array using the
** std::cout function. */
template <typename T>
std::ostream &operator<<(std::ostream &o, Array<T> const &src)
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


/* ostream &operator<<(ostream &o, Array<float> const &src):
** output stream operator overload. It allows us to print the array using the
** std::cout function. */
template <typename T>
std::ostream &operator<<(std::ostream &o, Array<float> const &src)
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
