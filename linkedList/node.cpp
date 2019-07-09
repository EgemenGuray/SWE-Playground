//
//  node.cpp
//  linkedList
//
//  Created by Egemen Ihsan Guray on 10/22/18.
//  Copyright © 2018 Egemen Ihsan Guray. All rights reserved.
//

#include "node.hpp"
#include <iostream>


Node::Node(int data): data{data}, next{nullptr}{}

Node::Node(const Node &other): data{other.data}, next{other.next? new Node {*other.next}: nullptr}{}

Node::Node(int data, Node *other): data{data}, next{other}{}

Node::~Node(){
    delete next;
}

Node & Node::operator=(const Node &other){
    if(this == &other){
        return *this;
    }
    Node *tmp = next;
    next = other.next ? new Node{*other.next} : nullptr;
    data = other.data;
    delete tmp;
    return *this;
}

void Node::addToBack(int data){
    if(next){
        next->addToBack(data);
    }else{
        next = new Node{data, next};
    }
    
    
}

int Node::removeBack(){
    if(this->next){
        Node *tmp = this;
        while(tmp->next->next){
            tmp = tmp->next;
        }
        Node *dummy = tmp->next;
        tmp->next = nullptr;
        delete dummy;
        return 1;
    }else{
        return 0;
    }
}

int Node::removeFront(){

    
    Node *tmp = this->next;
    
    Node *dummy = this;
    dummy->next = nullptr;
    
    //delete dummy;
    
    this->data = tmp->data;
    this->next = tmp->next;
    
    return 1;
    
}


void::Node::addSmart_wrap(int data){
    if(this->data > data){
        Node *nextnode = this->next;
        int curData = this->data;
        this->data = data;
        this->next = new Node{curData, nextnode};
    }else{
        Node *curnode = this;
        Node *prevnode = nullptr;
        while(curnode){
            if(curnode->data > data){
                break;
            }
            prevnode = curnode;
            curnode = curnode->next;
        }
        prevnode->next = new Node{data,curnode};
    }
    
}
void Node::addSmart(int data){
    if(this->data > data){
        next->addSmart(data);
    }else{
        next = new Node{data, next};
    }
}

int Node::removeSmart(int x){
    
    if(this->data == x){
        Node *tmp = this->next;
        this->data = this->next->data;
        this->next = this->next->next;
        //delete tmp;
        return 1;
    }else{
        Node *curnode = this->next;
        Node *prevnode = this;
        while(curnode){
            if(curnode->data == x){
                
                prevnode->next = prevnode->next->next;
                //delete curnode;
                return 1;
            }
            prevnode = curnode;
            curnode = curnode->next;
            
        }
    }
    return 0;
}

std::ostream & operator<<( std::ostream & out, Node &head){
    out << head.data;
    Node *tmp = head.next;
    while(tmp != nullptr){
        out << ", ";
        out << tmp->data;
        tmp = tmp->next;
    }
    out << std::endl;
    return out;
}
