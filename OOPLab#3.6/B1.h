#pragma once
#include <string>
#include <iostream>

class B1 {
protected:
    std::string b1;
public:
    B1(std::string val) : b1(val) {}
    virtual ~B1() {}
    virtual void show() { std::cout << "Class: B1, Field: " << b1 << std::endl; }
};