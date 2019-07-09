//
//  Decorator.cpp
//  final
//
//  Created by Egemen Ihsan Guray on 12/14/18.
//  Copyright © 2018 Egemen Ihsan Guray. All rights reserved.
//

#include "Decorator.hpp"


Decorator::Decorator(Component *c): c{c}{}


Decorator::~Decorator(){
    delete c;
}


std::string Decorator::operation(){return "";}
