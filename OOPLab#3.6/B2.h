#pragma once
#include <string>
#include <iostream>

class B2 {
protected:
    std::string b2;
public:
    B2(std::string val) : b2(val) {}
    virtual ~B2() {}
    virtual void show() { std::cout << "Class: B2, Field: " << b2 << std::endl; }
};