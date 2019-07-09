//
//  Cheese.cpp
//  final
//
//  Created by Egemen Ihsan Guray on 12/14/18.
//  Copyright © 2018 Egemen Ihsan Guray. All rights reserved.
//

#include "Cheese.hpp"

std::string Cheese::operation(){
    std::string prev = c->operation();
    return prev + " cheese";
}


Cheese::Cheese(Component *c):  Decorator{c}{}


