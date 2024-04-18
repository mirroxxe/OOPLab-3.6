#include <iostream>
#include "D3.h"

int main() {
    // Create objects and initialize fields
    B1 objB1("B1_val");
    B2 objB2("B2_val");
    D1 objD1("B1_val", "B2_val", "D1_val");
    D2 objD2("B1_val", "B2_val", "D1_val", "D2_val");
    D3 objD3("B1_val", "B2_val", "D1_val", "D2_val", "D3_val");

    // Output size of each object
    std::cout << "Size of B1 object: " << sizeof(objB1) << std::endl;
    std::cout << "Size of B2 object: " << sizeof(objB2) << std::endl;
    std::cout << "Size of D1 object: " << sizeof(objD1) << std::endl;
    std::cout << "Size of D2 object: " << sizeof(objD2) << std::endl;
    std::cout << "Size of D3 object: " << sizeof(objD3) << std::endl;

    // Call show() method for each object
    objB1.show();
    objB2.show();
    objD1.show();
    objD2.show();
    objD3.show();

    return 0;
}
