#ifndef VECTOR2D_H
#define VECTOR2D_H

class Vector2D
{
private:
    double x;
    double y;

public:
    Vector2D();
    Vector2D(double xValue, double yValue);

    double getX() const;
    double getY() const;

    double magnitude() const;
};

#endif
