#ifndef _FIGURE_H_
#define _FIGURE_H_


#include <string>
#include <iostream>

class Figure{
    int x;
    int y;
    std::string color;
    
protected:
     Figure(int x, int y, std::string color);
    
public:
    virtual void draw()=0;
    
    virtual double area()=0;
    
    void getPos(int &x, int &y);
    
    void setPos(int x, int y);
    
};





#endif
