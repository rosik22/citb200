//
// Created by kiril on 3/20/17.
//

#include "circle.h"

Circle::~Circle(){}

double Circle::perimeter() const{
    return 2*pi*r;
}

double Circle::area() const{
    return pi*r*r;
}

istream &Circle::read(istream &in){
    return in>>r;
}