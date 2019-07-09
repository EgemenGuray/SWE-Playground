//
//  Node.cpp
//  final
//
//  Created by Egemen Ihsan Guray on 12/15/18.
//  Copyright © 2018 Egemen Ihsan Guray. All rights reserved.
//

#include "Node.hpp"

Node::Node(int data, Node *next): data{data}, next{next}{}

Node::~Node(){
    delete next;
}

Node & Node::operator=(const Node &other){
    Node temp = other;
    std::swap(data, temp.data);
    std::swap(next, temp.next);
    return *this;
    
    
}

Node::Node(Node &&other): data{other.data}, next{other.next}{
    other.next = nullptr;
}

Node & Node::operator=(Node &&other){
    std::swap(data, other.data);
    std::swap(next, other.next);
    return *this;
    
}

Node::Node(const Node &other): data{other.data}, next{nullptr == other.next? nullptr : new Node{*other.next}}{}
