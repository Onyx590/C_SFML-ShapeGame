#include <iostream>
#include <memory>
#include <fstream>

#include <SFML/Graphics.hpp>
#include "imgui.h"
#include "imgui-SFML.h"

//testing Vec2. Remove later
#include "Vec2.h"
#include "Game.h"

int main() {
    // Test Addition
    Vec2 v1(1.0, 2.0);
    Vec2 v2(3.0, 4.0);
    Vec2 result_add = v1 + v2;
    std::cout << "Addition Result: (" << result_add.x << ", " << result_add.y << ")" << std::endl;

    // Test Subtraction
    Vec2 result_sub = v2 - v1;
    std::cout << "Subtraction Result: (" << result_sub.x << ", " << result_sub.y << ")" << std::endl;

    // Test Multiplication by Scalar
    Vec2 result_mul_scalar = v1 * 2.0;
    std::cout << "Multiplication by Scalar Result: (" << result_mul_scalar.x << ", " << result_mul_scalar.y << ")" << std::endl;

    // Test Division by Scalar
    Vec2 result_div_scalar = v2 / 2.0;
    std::cout << "Division by Scalar Result: (" << result_div_scalar.x << ", " << result_div_scalar.y << ")" << std::endl;

    // Test Equality
    if (v1 == v2) {
        std::cout << "v1 and v2 are equal" << std::endl;
    }
    else {
        std::cout << "v1 and v2 are not equal" << std::endl;
    }

    // Test Inequality
    if (v1 != v2) {
        std::cout << "v1 and v2 are not equal" << std::endl;
    }
    else {
        std::cout << "v1 and v2 are equal" << std::endl;
    }

    
    

    

    return 0;
}