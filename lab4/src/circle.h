//
// Created by kiril on 3/20/17.
//

#ifndef LAB4_CIRCLE_H
#define LAB4_CIRCLE_H


#include "shape.h"

class Circle:public Shape{
    double r, pi = 3.14;
public:
    ~Circle();
    double perimeter() const;
    double area() const;
    istream &read(istream &in);
};


#endif //LAB4_CIRCLE_H
