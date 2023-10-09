/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:17:56 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/10/09 17:35:10 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.tpp"

int main(void)
{
    // Test Default Constructor
    {
        std::cout << "Test Default Constructor" << std::endl;
        Array<int> arr;
        std::cout << "arr.size(): " << arr.size() << std::endl;
        std::cout << "arr: " << arr << std::endl;
    }
    // Test Parametric Construtor
    {
        std::cout << "------------------------\n\n" << std::endl;
        std::cout << "Test Parametric Construtor" << std::endl;
        Array<int> arr(5);
        std::cout << "arr.size(): " << arr.size() << std::endl;
        std::cout << "arr: " << arr << std::endl;
    }
    // Test Copy Constructor
    {
        std::cout << "------------------------\n\n" << std::endl;
        std::cout << "Test Copy Constructor" << std::endl;
        Array<int> arr(5);
        std::cout << "arr.size(): " << arr.size() << std::endl;
        std::cout << "arr: " << arr << std::endl;
        Array<int> arr2(arr);
        std::cout << "arr2.size(): " << arr2.size() << std::endl;
        std::cout << "arr2: " << arr2 << std::endl;
    }
    // Test Assignation Operator
    {
        std::cout << "------------------------\n\n" << std::endl;
        std::cout << "Test Assignation Operator" << std::endl;
        Array<int> arr(5);
        std::cout << "arr.size(): " << arr.size() << std::endl;
        std::cout << "arr: " << arr << std::endl;
        Array<int> arr2;
        arr2 = arr;
        std::cout << "arr2.size(): " << arr2.size() << std::endl;
        std::cout << "arr2: " << arr2 << std::endl;
    }
    std::cout << "------------------------\n\n" << std::endl;

    // Test Out of Bounds
    {
        std::cout << "Test Out of Bounds" << std::endl;
        Array<int> arr(5);
        std::cout << "arr.size(): " << arr.size() << std::endl;
        std::cout << "arr: " << arr << std::endl;
        try
        {
            std::cout << "arr[5]: " << arr[5] << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
        try
        {
            std::cout << "arr[-1]: " << arr[-1] << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    std::cout << "------------------------\n\n" << std::endl;
    return (0);
}
