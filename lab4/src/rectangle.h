//
// Created by kiril on 3/20/17.
//

#ifndef LAB4_RECTANGLE_H
#define LAB4_RECTANGLE_H


#include "shape.h"

class Rectangle: public Shape{
    double a,b;
public:
    ~Rectangle();
    double perimeter() const;
    double area() const;
    istream &read (istream &in);
};

#endif //LAB4_RECTANGLE_H
