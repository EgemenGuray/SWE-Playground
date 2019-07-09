//
//  BasicPizza.cpp
//  final
//
//  Created by Egemen Ihsan Guray on 12/14/18.
//  Copyright © 2018 Egemen Ihsan Guray. All rights reserved.
//

#include "BasicPizza.hpp"


BasicPizza::BasicPizza(){
    
    
}

BasicPizza::~BasicPizza(){

    std::cout << "Basic deleted" << std::endl;
}


std::string BasicPizza::operation(){
    return "Basic";
}
