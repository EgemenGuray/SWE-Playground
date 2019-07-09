//
//  Dummy.cpp
//  final
//
//  Created by Egemen Ihsan Guray on 12/14/18.
//  Copyright © 2018 Egemen Ihsan Guray. All rights reserved.
//

#include "Dummy.hpp"

Dummy::Dummy(int x): x{x}{}

Dummy::~Dummy(){
    std::cout << "POINTER CIKIS YAPIYORUM" << std::endl;
}

int Dummy::getData(){
    return x;
}

void Dummy::setData(int x){
    this->x = x;
}
