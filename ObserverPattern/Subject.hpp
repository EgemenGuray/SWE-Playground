//
//  Subject.hpp
//  final
//
//  Created by Egemen Ihsan Guray on 12/14/18.
//  Copyright © 2018 Egemen Ihsan Guray. All rights reserved.
//

#ifndef Subject_hpp
#define Subject_hpp

#include "Observer.hpp"
#include <vector>

class Subject{
    
protected:
    std::vector<Observer*> obs;
public:
    Subject();
    
    virtual ~Subject();
    
    virtual void add(Observer* n);
    
    virtual void remove(Observer* n);
    
    virtual void notify();
    
    virtual std::string getState() = 0;
    
};

#endif /* Subject_hpp */
