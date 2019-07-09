//
//  Node.hpp
//  final
//
//  Created by Egemen Ihsan Guray on 12/15/18.
//  Copyright © 2018 Egemen Ihsan Guray. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp

#include <stdio.h>
#include <utility>


class Node{

    int data;
    
    Node *next;
    
public:
    Node(int data, Node *next);

    ~Node();
    
    Node & operator=(const Node &other);
    
    Node(Node &&other);
    
    Node & operator=(Node &&other);
    
    Node(const Node &other);
    
    
    
};

#endif /* Node_hpp */
