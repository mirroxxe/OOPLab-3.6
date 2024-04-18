#pragma once
#include <string>
#include <iostream>
#include "D1.h"

class D2 : private D1 {
protected:
    std::string d2;
public:
    D2(std::string val1, std::string val2, std::string val3, std::string val4) : D1(val1, val2, val3), d2(val4) {}
    virtual ~D2() {}
    void show() override { D1::show(); std::cout << "Class: D2, Field: " << d2 << std::endl; }
};