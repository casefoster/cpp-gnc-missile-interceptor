#include "Vector2D.h"
#include <cmath>

Vector2D::Vector2D(){
    x=0.0;
    y=0.0;

}

Vector2D::Vector2D(double xValue, double yValue){
    x = xValue;
    y = yValue;
}

double Vector2D::getX() const{
    return x;
}
double Vector2D::getY() const{
    return y;
}

void Vector2D::setX(double xValue) {
    x = xValue;
}
void Vector2D::setY(double yValue) {
    y = yValue;
}

double Vector2D::magnitude() const{
    return std::sqrt((x*x)+(y*y));
}