//
//  BasicPizza.hpp
//  final
//
//  Created by Egemen Ihsan Guray on 12/14/18.
//  Copyright © 2018 Egemen Ihsan Guray. All rights reserved.
//

#ifndef BasicPizza_hpp
#define BasicPizza_hpp
#include "Component.hpp"

class BasicPizza: public Component{
public:
    BasicPizza();
    ~BasicPizza() override;
    std::string operation() override;
};

#endif /* BasicPizza_hpp */
