#include <iostream>
#include "Vector2D.h"

int main(){
    Vector2D v(3.0, 4.0);

    std::cout << "X: " << v.getX() << std::endl;
    std::cout << "Y: " << v.getY() << std::endl;
    std::cout << "Magnitude: " << v.magnitude() << std::endl;

    return 0;

}