//
//  Rectangle.cpp
//  final
//
//  Created by Egemen Ihsan Guray on 12/13/18.
//  Copyright © 2018 Egemen Ihsan Guray. All rights reserved.
//

#include "Rectangle.hpp"

Rectangle::Rectangle(int x, int y, std::string color, int w, int h): Figure{x,y,color}, w{w},h{h}{}

void Rectangle::draw(){
    int a;
    int b;
    getPos(a, b);
    std::cout <<  "I am a rect X: " << a << "Y: " << b << std::endl;
}

double Rectangle::area(){
    return w*h;
    
}

void Rectangle::setSize(int &w, int &h){
    w = this->w;
    h = this->h;
}

void Rectangle::getSize(int w, int h){
    this->w = w;
    this->h = h;
}
