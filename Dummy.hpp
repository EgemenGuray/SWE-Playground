//
//  Dummy.hpp
//  final
//
//  Created by Egemen Ihsan Guray on 12/14/18.
//  Copyright © 2018 Egemen Ihsan Guray. All rights reserved.
//

#ifndef Dummy_hpp
#define Dummy_hpp
#include <iostream>

class Dummy{
    int x;
public:
    Dummy(int x);
    
    ~Dummy();
    
    int getData();
    
    void setData(int x);
    
};

#endif /* Dummy_hpp */
