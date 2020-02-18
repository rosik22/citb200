//
// Created by kiril on 3/20/17.
//

#include "rectangle.h"

Rectangle::~Rectangle(){}

double Rectangle::perimeter() const{
    return 2*(a+b);
}

double Rectangle::area() const{
    return a*b;
}

istream &Rectangle::read(istream &in){
    return in>>a>>b;
}
