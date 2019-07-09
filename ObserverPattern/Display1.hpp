//
//  Display1.hpp
//  final
//
//  Created by Egemen Ihsan Guray on 12/14/18.
//  Copyright © 2018 Egemen Ihsan Guray. All rights reserved.
//

#ifndef Display1_hpp
#define Display1_hpp
#include "Observer.hpp"
#include "Subject.hpp"
#include <string>
#include <iostream>

class Display1: public Observer{
    Subject *s;
public:
    Display1(Subject* s);
    
    ~Display1();
    
    void update() override;
    
    
};

#endif /* Display1_hpp */
