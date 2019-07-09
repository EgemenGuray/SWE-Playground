//
//  C.cpp
//  final
//
//  Created by Egemen Ihsan Guray on 12/15/18.
//  Copyright © 2018 Egemen Ihsan Guray. All rights reserved.
//

#include "C.hpp"
CImpl::CImpl(Dummy a): a{a}{}

C::C(Dummy a){
    pimpl = std::make_unique<CImpl>(a);
}
void C::f(){
    auto temp = std::make_unique<CImpl>(*pimpl);
    temp->a.setData(103);
    std::swap(pimpl, temp);
    std::cout << pimpl->a.getData() << std::endl;
}
