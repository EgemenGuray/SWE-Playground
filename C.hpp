//
//  C.hpp
//  final
//
//  Created by Egemen Ihsan Guray on 12/15/18.
//  Copyright © 2018 Egemen Ihsan Guray. All rights reserved.
//

#ifndef C_hpp
#define C_hpp

#include <stdio.h>
#include <memory>
#include "Dummy.hpp"
class CImpl{
public:
    Dummy a;
    CImpl(Dummy a);
};


class C{
    std::unique_ptr<CImpl> pimpl;
public:
    C(Dummy a);
    void f();
};

#endif /* C_hpp */
