//
//  Weather.hpp
//  final
//
//  Created by Egemen Ihsan Guray on 12/14/18.
//  Copyright © 2018 Egemen Ihsan Guray. All rights reserved.
//

#ifndef Weather_hpp
#define Weather_hpp

#include "Subject.hpp"
#include <string>
#include <iostream>

class Weather: public Subject{
    
public:
    
    Weather();
    
    ~Weather();
    
    std::string getState();
    
    
    
};

#endif /* Weather_hpp */
