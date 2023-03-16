
#include <iostream>
#include <list>
#include <set>
#include <vector>
#include <algorithm>

template<class T>
void print_container(std::vector<T> v) {
    std::for_each(v.begin(), v.end(), [](const T& a)->void {std::cout << a << " "; });
}

template<class T>
void print_container(std::list<T> l) {
    std::for_each(l.begin(), l.end(), [](const T& a)->void {std::cout << a << " "; });
}

template<class T>
void print_container(std::set<T> s) {
    std::for_each(s.begin(), s.end(), [](const T& a)->void {std::cout << a << " "; });
}



int main()
{
    std::vector<std::string> test_vector = { "one", "two", "three", "four" };
    print_container(test_vector); 
    std::cout << "\n";
    std::list<std::string> test_list = { "one", "two", "three", "four" };
    print_container(test_list); 
    std::cout << "\n";
    std::set<std::string> test_set = { "one", "two", "three", "four" };
    print_container(test_set);
}
