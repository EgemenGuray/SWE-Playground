//
//  Subject.cpp
//  final
//
//  Created by Egemen Ihsan Guray on 12/14/18.
//  Copyright © 2018 Egemen Ihsan Guray. All rights reserved.
//

#include "Subject.hpp"
Subject::Subject(){}
Subject::~Subject(){}

void Subject::add(Observer * n){
    obs.emplace_back(n);
    
}
void Subject::remove(Observer * n){
    for(int i = 0; i < obs.size(); i++){
        if(n == obs.at(i)){
            Observer* temp = obs.at(i);
            obs.erase(obs.begin() + i);
            //delete temp;
        }
    }
    
}

void Subject::notify(){
    for(int i = 0; i < obs.size(); i++){
        obs.at(i)->update();
    }
}
