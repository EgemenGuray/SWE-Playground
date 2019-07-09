//
//  Cheese.hpp
//  final
//
//  Created by Egemen Ihsan Guray on 12/14/18.
//  Copyright © 2018 Egemen Ihsan Guray. All rights reserved.
//

#ifndef Cheese_hpp
#define Cheese_hpp
#include "Decorator.hpp"

class Cheese: public Decorator{
    
    
    
public:
    Cheese(Component *c);
    
    
    
    std::string operation() override;
    
};

#endif /* Cheese_hpp */
