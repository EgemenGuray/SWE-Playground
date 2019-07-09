//
//  List.cpp
//  final
//
//  Created by Egemen Ihsan Guray on 12/15/18.
//  Copyright © 2018 Egemen Ihsan Guray. All rights reserved.
//

#include "List.hpp"
struct List::Node{
    int data;
    Node *next;
};

class List::Iterator{
public:
    explicit Iterator(Node *p);
    int operator*();
    Iterator &operator++();
    
    bool operator==(const Iterator &other) const;
    
    bool operator!=(const Iterator &other) const;
    
private:
    Node *p;
    
};

int List::Iterator::operator*(){
    return p->data;
}

List::Iterator& List::Iterator::operator++(){
    p = p->next;
    return *this;
}

bool List::Iterator::operator==(const Iterator &other) const{
    return p == other.p;
}

bool List::Iterator::operator!=(const Iterator &other) const{
    return p != other.p;
}


List::Iterator List::begin(){
    return Iterator(theList);
}

List::Iterator List::end(){
    return Iterator(nullptr);
}


void List::addToFront(int data){
    List::Node *temp = new List::Node;
    temp->data = data;
    temp->next = theList;
    theList = temp;
}
