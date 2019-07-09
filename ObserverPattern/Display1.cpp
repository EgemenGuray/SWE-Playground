//
//  Display1.cpp
//  final
//
//  Created by Egemen Ihsan Guray on 12/14/18.
//  Copyright © 2018 Egemen Ihsan Guray. All rights reserved.
//

#include "Display1.hpp"

Display1::Display1(Subject *s): s{s}{
    s->add(this);
}

Display1::~Display1(){
    s->remove(this);
    std::cout << "Display 1 deleted" << std::endl; 
}

void Display1::update(){
    std::cout << s->getState() << std::endl;
}
