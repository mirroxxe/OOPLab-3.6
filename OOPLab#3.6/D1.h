#pragma once
#include <string>
#include <iostream>
#include "B1.h"
#include "B2.h"

class D1 : public B1, private B2 {
protected:
    std::string d1;
public:
    D1(std::string val1, std::string val2, std::string val3) : B1(val1), B2(val2), d1(val3) {}
    virtual ~D1() {}
    void show() override { B1::show(); std::cout << "Class: D1, Field: " << d1 << std::endl; }
};
