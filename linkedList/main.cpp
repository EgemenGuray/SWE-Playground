//
//  main.cpp
//  linkedList
//
//  Created by Egemen Ihsan Guray on 10/22/18.
//  Copyright © 2018 Egemen Ihsan Guray. All rights reserved.
//


#include "node.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    Node *n = new Node(2);
    Node *m = new Node(3);
    Node *z = new Node(4, new Node(3, new Node(2, nullptr)));
    //n->addToBack(3);
    n->addSmart_wrap(5);
    n->addSmart_wrap(1);
    n->addSmart_wrap(0);
    n->addSmart_wrap(7);
    n->addSmart_wrap(9);
    n->addSmart_wrap(8);
    n->addSmart_wrap(0);
    std::cout << *n << std::endl;
   n->removeSmart(0);
    n->removeSmart(0);
    n->removeSmart(9);
     n->removeSmart(1);
     n->removeSmart(5);
     n->removeSmart(8);
     n->removeSmart(7);
     n->removeSmart(2);
    
    std::cout << *n << std::endl;
    return 0;
}
