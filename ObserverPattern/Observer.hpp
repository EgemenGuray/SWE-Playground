//
//  Observer.hpp
//  final
//
//  Created by Egemen Ihsan Guray on 12/14/18.
//  Copyright © 2018 Egemen Ihsan Guray. All rights reserved.
//

#ifndef Observer_hpp
#define Observer_hpp

class Observer{
public:
    virtual ~Observer();
    virtual void update() = 0;
    
    
}; 

#endif /* Observer_hpp */
