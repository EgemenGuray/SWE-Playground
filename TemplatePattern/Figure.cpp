//
//  Figure.cpp
//  final
//
//  Created by Egemen Ihsan Guray on 12/13/18.
//  Copyright © 2018 Egemen Ihsan Guray. All rights reserved.
//

#include "Figure.hpp"


Figure::Figure(int x, int y, std::string color): x{x}, y{y}, color(color){}

void Figure::getPos(int &x, int &y){
    x = this->x;
    y = this->y;
}

void Figure::setPos(int x, int y){
    this->x = x;
    this->y = y;
}
