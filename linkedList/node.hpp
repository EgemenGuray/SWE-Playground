//
//  node.hpp
//  linkedList
//
//  Created by Egemen Ihsan Guray on 10/22/18.
//  Copyright © 2018 Egemen Ihsan Guray. All rights reserved.
//

#ifndef node_hpp
#define node_hpp
#include <iostream>
#include <stdio.h>

struct Node{
    int data;
    
    Node *next;
    
    Node(int data);
    
    Node(const Node &other);
    
    Node(int data, Node *other);
    
    Node &operator=(const Node &other);
    
    ~Node();
    
    void addToBack(int data);
    
    //void addToFront(int data);
    
    void addSmart(int data);
    
    void addSmart_wrap(int data);
    
    int removeBack();
    
    int removeFront();
    
    int removeSmart(int x);
    
    
    
};

std::ostream & operator<<( std::ostream & out, Node &head);
#endif /* node_hpp */
