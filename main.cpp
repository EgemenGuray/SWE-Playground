//
//  main.cpp
//  final
//
//  Created by Egemen Ihsan Guray on 12/13/18.
//  Copyright © 2018 Egemen Ihsan Guray. All rights reserved.
//

#include <iostream>

#include "Figure.hpp"
#include "Rectangle.hpp"
#include "Circle.hpp"
#include "Subject.hpp"
#include "Observer.hpp"
#include "Weather.hpp"
#include "Display1.hpp"
#include "Component.hpp"
#include "BasicPizza.hpp"
#include "Cheese.hpp"
#include <memory>
#include "my_uni.hpp"
#include "C.hpp"

#include "Dummy.hpp"

void voo(Dummy &c){
    std::cout << c.getData() + 12 << std::endl;
}


template <typename T>
void myswap(T& x, T& y){
    T temp = x;
    x = y;
    y = temp;
}

int main(int argc, const char * argv[]) {
    Figure *f = new Rectangle{1,2,"Red",4,5};
    Figure *f2 = new Rectangle{2,3,"Red",4,5};
    int a = 8;
    int b = 12;
    myswap(f, f2);
    f->draw();
    //////////////////////////////
    Subject *s = new Weather();
    Observer *o = new Display1(s);
    delete s;
    s->notify();
    //////////////////////////////
    Component *c = new BasicPizza();
    
    Component *p = new Cheese(c);
    
    std::cout << p->operation() << std::endl;
    
    delete p;
    
    auto dum = std::make_shared<Dummy>(12);
    
    std::shared_ptr<Dummy> dum2{new Dummy{23}};
    
    std::cout << dum->getData() << std::endl;
    std::cout << dum2->getData() << std::endl;
    voo(*dum2);
    //auto temp = dum;
    dum = dum2;
    
    std::cout << dum->getData() << std::endl;
    std::cout << dum2->getData() << std::endl;
    
    
    dum2 = std::make_unique<Dummy>(54);
    std::unique_ptr<Dummy> za {new Dummy{123}};
    std::cout << dum2->getData() << std::endl;
    auto dum4 = dum2;
    std::cout << dum4->getData() << std::endl;
    std::cout << dum2->getData() << std::endl;
    std::cout << za->getData() << std::endl;
    dum2 = std::move(za);
    std::cout << dum2->getData() << std::endl;
    voo(*dum2);

    //my_uni<Dummy> myp {new Dummy{108}};
    
   //std::cout << myp->getData() << std::endl;
    Dummy test(22);
    C pi{test};
    pi.f();
    std::cout << test.getData() << std::endl;
    
    return 0;
}

