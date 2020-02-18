//
// Created by kiril on 3/20/17.
//

#include "triangle.h"
#include <cmath>

Triangle::~Triangle(){}

double Triangle::perimeter() const{
    return a+b+c;
}

double Triangle::area() const{
    double p = perimeter()/2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

istream &Triangle::read(istream &in){
    return in>>a>>b>>c;
}