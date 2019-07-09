//
//  Decorator.hpp
//  final
//
//  Created by Egemen Ihsan Guray on 12/14/18.
//  Copyright © 2018 Egemen Ihsan Guray. All rights reserved.
//

#ifndef Decorator_hpp
#define Decorator_hpp

#include <iostream>
#include "Component.hpp"

class Decorator: public Component{

protected:
    Component *c;
    Decorator(Component *c);
    
public:
    
    virtual ~Decorator();
    virtual std::string operation() override;
    
};

#endif /* Decorator_hpp */
