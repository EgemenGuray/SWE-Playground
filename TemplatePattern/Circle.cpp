//
//  Circle.cpp
//  final
//
//  Created by Egemen Ihsan Guray on 12/13/18.
//  Copyright © 2018 Egemen Ihsan Guray. All rights reserved.
//

#include "Circle.hpp"


Circle::Circle(int x, int y, std::string color, int radius): Figure{x,y, color}, radius{radius}{}


void Circle::draw(){
    int a;
    int b;
    getPos(a, b);
    std::cout <<  "I am a circle X: " << a << "Y: " << b << std::endl;
}

double Circle::area(){
    return 3.14*radius*radius;
}

void Circle::getRadius(int &r){
    r = radius;
}


void Circle::setRadius(int r){
    radius = r;
}
