#pragma once
#include <string>
#include <iostream>
#include "D2.h"

class D3 : public D2 {
protected:
    std::string d3;
public:
    D3(std::string val1, std::string val2, std::string val3, std::string val4, std::string val5) : D2(val1, val2, val3, val4), d3(val5) {}
    virtual ~D3() {}
    void show() override { D2::show(); std::cout << "Class: D3, Field: " << d3 << std::endl; }
};