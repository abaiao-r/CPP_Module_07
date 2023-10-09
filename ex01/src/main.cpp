/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:17:56 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/10/09 14:55:40 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/iter.hpp"

/* struct s_test */
struct s_test
{
    int a;
    std::string b;
    float c;
};

/* overload operator<< to print the value of the struct */
std::ostream &operator<<(std::ostream &o, s_test const &rhs)
{
    o << rhs.a << " " << rhs.b << " " << rhs.c;
    return o;
}

/* class Awesome */
class Awesome
{
public:
    Awesome(void) : _n(42) { return; }
    int get(void) const { return this->_n; }

private:
    int _n;
};

/* overload operator<< to print the value of the class */
std::ostream &operator<<(std::ostream &o, Awesome const &rhs)
{
    o << rhs.get();
    return o;
}

/* print: function that prints the value of the parameter passed as argument. */
template <typename T>
void print(T &x)
{
    std::cout << x << std::endl;
    return;
}

int main(void)
{
    std::cout << "********** TEST WITH INT **********" << std::endl;
    int tab[] = {0, 1, 2, 3, 4};
    Awesome tab2[5];

    iter(tab, 5, print<const int>);
    iter(tab2, 5, print<Awesome>);

    std::cout << "\n\n----------------------------------\n\n";

    // I want to test wit complex data types
    std::cout << "********** TEST WITH STRING **********" << std::endl;
    std::string str[] = {"Hello", "World", "!"};
    iter(str, 3, print<const std::string>);

    std::cout << "\n\n----------------------------------\n\n";

    // more complex data types (class Awesome)
    std::cout << "********** TEST WITH CLASS **********" << std::endl;
    Awesome tab3[5];
    iter(tab3, 5, print<Awesome>);
    std::cout << "\n\n----------------------------------\n\n";

    // more complex data types struts with different types
    std::cout << "********** TEST WITH STRUCT - DIFFERENT TYPES **********" 
        << std::endl;
    s_test test[3] = {{1, "Hello", 1.2}, {2, "World", 2.3}, {3, "!", 3.4}};
    iter(test, 3, print<s_test>);
    std::cout << "\n\n----------------------------------\n\n";

    return (0);
}
