/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:17:56 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/10/09 20:18:50 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.tpp"
#include <cstdlib>

#define MAX_VAL 10

int main(void)
{
    // Test Default Constructor
    {
        std::cout << "Test Default Constructor" << std::endl;
        Array<int> arr(MAX_VAL);
        int *mirror = new int[MAX_VAL];
        srand(time(NULL));
        for (int i = 0; i < MAX_VAL; i++)
        {
            const int value = rand();
            arr[i] = value;
            mirror[i] = value;
        }
        std::cout << "arr.size(): " << arr.size() << std::endl;
        std::cout << "arr: " << arr << std::endl;
        delete [] mirror;
    }
    // Test Parametric Construtor
    {
        std::cout << "------------------------\n\n" << std::endl;
        std::cout << "Test Parametric Construtor" << std::endl;
        Array<int> arr(MAX_VAL);
        int *mirror = new int[MAX_VAL];
        srand(time(NULL));
        for (int i = 0; i < MAX_VAL; i++)
        {
            const int value = rand();
            arr[i] = value;
            mirror[i] = value;
        }
        std::cout << "arr.size(): " << arr.size() << std::endl;
        std::cout << "arr: " << arr << std::endl;
        delete [] mirror;
    }
    // Test Copy Constructor
    {
        std::cout << "------------------------\n\n" << std::endl;
        std::cout << "Test Copy Constructor" << std::endl;
        Array<int> arr(MAX_VAL);
        int *mirror = new int[MAX_VAL];
        srand(time(NULL));
        for (int i = 0; i < MAX_VAL; i++)
        {
            const int value = rand();
            arr[i] = value;
            mirror[i] = value;
        }
        std::cout << "arr.size(): " << arr.size() << std::endl;
        std::cout << "arr: " << arr << std::endl;
        Array<int> arr2(arr);
        std::cout << "arr2.size(): " << arr2.size() << std::endl;
        std::cout << "arr2: " << arr2 << std::endl;
        delete [] mirror;
    }
    // Test Assignation Operator
    {
        std::cout << "------------------------\n\n" << std::endl;
        std::cout << "Test Assignation Operator" << std::endl;
        Array<int> arr(MAX_VAL);
        int *mirror = new int[MAX_VAL];
        srand(time(NULL));
        for (int i = 0; i < MAX_VAL; i++)
        {
            const int value = rand();
            arr[i] = value;
            mirror[i] = value;
        }
        std::cout << "arr.size(): " << arr.size() << std::endl;
        std::cout << "arr: " << arr << std::endl;
        Array<int> arr2;
        arr2 = arr;
        std::cout << "arr2.size(): " << arr2.size() << std::endl;
        std::cout << "arr2: " << arr2 << std::endl;
        delete [] mirror;
    }
    std::cout << "------------------------\n\n" << std::endl;

    // Test Out of Bounds
    {
        std::cout << "Test Out of Bounds" << std::endl;
        Array<int> arr(MAX_VAL);
        int *mirror = new int[MAX_VAL];
        srand(time(NULL));
        for (int i = 0; i < MAX_VAL; i++)
        {
            const int value = rand();
            arr[i] = value;
            mirror[i] = value;
        }
        std::cout << "arr.size(): " << arr.size() << std::endl;
        std::cout << "arr: " << arr << std::endl;
        try
        {
            std::cout << "arr[0]: " << arr[0] << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
        try
        {
            std::cout << "arr[11]: " << arr[11] << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << BLUE << e.what() << std::endl;
        }
        delete [] mirror;
    }
    std::cout << "------------------------\n\n" << std::endl;

    // test Bounds with floats
    {
        std::cout << "Test Bounds with floats" << std::endl;
        Array<float> arr(MAX_VAL);
        float *mirror = new float[MAX_VAL];
        srand(time(NULL));
        for (int i = 0; i < MAX_VAL; i++)
        {
            const int value = rand();
            arr[i] = value;
            mirror[i] = value;
        }
        std::cout << "arr.size(): " << arr.size() << std::endl;
        std::cout << "arr: " << arr << std::endl;
        try
        {
            std::cout << "arr[0]: " << arr[0] << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
        try
        {
            std::cout << "arr[11]: " << arr[11] << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << BLUE << e.what() << std::endl;
        }
        delete [] mirror;
    }
    std::cout << "------------------------\n\n" << std::endl;
    return (0);
}

/* #define MAX_VAL 10
struct s_person {
    std::string name;
    int age;
};

std::ostream &operator<<(std::ostream &o, s_person const &rhs)
{
    o << "name: " << rhs.name << " age: " << rhs.age;
    return (o);
}

int main() {
    // Test with complex type Person
    {
        std::cout << "Test with complex type Person" << std::endl;
        Array<s_person> arr(2);
        arr[0].name = "John";
        arr[0].age = 21;
        arr[1].name = "Jane";
        arr[1].age = 22;
        s_person *mirror = new s_person[MAX_VAL];
        std::cout << "arr.size(): " << arr.size() << std::endl;
        std::cout << "arr: " << arr << std::endl;
        delete [] mirror;
    }

    return 0;
} */
