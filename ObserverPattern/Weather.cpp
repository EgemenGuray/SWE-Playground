//
//  Weather.cpp
//  final
//
//  Created by Egemen Ihsan Guray on 12/14/18.
//  Copyright © 2018 Egemen Ihsan Guray. All rights reserved.
//

#include "Weather.hpp"



Weather::Weather(){
    
}

Weather::~Weather(){
    while(!obs.empty()){
        Observer *temp = obs.at(obs.size() - 1);
        obs.pop_back();
        delete temp;
    }
    std::cout << "Weather deleted" << std::endl;
    
}

std::string Weather::getState(){
    return "Istanbul'da hava 12";
}

