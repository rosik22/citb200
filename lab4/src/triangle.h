//
// Created by kiril on 3/20/17.
//

#ifndef LAB4_TRIANGLE_H
#define LAB4_TRIANGLE_H


#include "shape.h"

class Triangle: public Shape{
    double a,b,c;
public:
    ~Triangle();
    double perimeter() const;
    double area() const;
    istream &read(istream &in);
};


#endif //LAB4_TRIANGLE_H
