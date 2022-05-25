
#include "easyfind.h"
#include <vector>
#include <list>
#include <iostream>

int main(void) {
    std::vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(99);
    v.push_back(77);
    v.push_back(26);
    v.push_back(11);
    v.push_back(16);
    v.push_back(31);
    v.push_back(17);
    v.push_back(21);
    v.push_back(12);
    v.push_back(15);

    int toFind = 12;

    if (easyfind(v, toFind) == v.end()) {
        std::cout << toFind << " not found in vector" << std::endl;
    } else {
        std::cout << toFind << " found in vector" << std::endl;
    }

    std::list<int> l;
    toFind = 100;
    l.push_back(1);
    l.push_back(2);
    l.push_back(99);
    l.push_back(77);
    l.push_back(26);
    l.push_back(11);
    l.push_back(16);
    l.push_back(31);
    l.push_back(17);
    l.push_back(21);
    l.push_back(12);
    l.push_back(15);
    if (easyfind(l, toFind) == l.end()) {
        std::cout << toFind << " not found in list" << std::endl;
    } else {
        std::cout << toFind << " found in list" << std::endl;
    }
    return 0;
}