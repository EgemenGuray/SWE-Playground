//
//  Circle.hpp
//  final
//
//  Created by Egemen Ihsan Guray on 12/13/18.
//  Copyright © 2018 Egemen Ihsan Guray. All rights reserved.
//

#ifndef Circle_hpp
#define Circle_hpp

#include "Figure.hpp"

class Circle: public Figure{
    int radius;
    
public:
    Circle(int x, int y, std::string color, int radius);
    
    
    void draw() override;
    
    double area() override;
    
    void getRadius(int &r);
    
    
    void setRadius(int r);
    
};

#endif /* Circle_hpp */
