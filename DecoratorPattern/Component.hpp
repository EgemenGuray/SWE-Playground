//
//  Component.hpp
//  final
//
//  Created by Egemen Ihsan Guray on 12/14/18.
//  Copyright © 2018 Egemen Ihsan Guray. All rights reserved.
//

#ifndef Component_hpp
#define Component_hpp
#include <string>
#include <iostream>

class Component{
    

    
public:
    virtual ~Component();
    virtual std::string operation() = 0; 
    
};

#endif /* Component_hpp */
