//
//  Rectangle.hpp
//  final
//
//  Created by Egemen Ihsan Guray on 12/13/18.
//  Copyright © 2018 Egemen Ihsan Guray. All rights reserved.
//

#ifndef Rectangle_hpp
#define Rectangle_hpp

#include "Figure.hpp"

class Rectangle: public Figure{
    int w;
    int h;
    
public:
    
    Rectangle(int x, int y, std::string color, int w, int h);
    
    void draw() override;
    
    double area() override;
    
    void setSize(int &w, int &h);
    
    void getSize(int w, int h);
};

#endif /* Rectangle_hpp */
