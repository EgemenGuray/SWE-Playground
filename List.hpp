//
//  List.hpp
//  final
//
//  Created by Egemen Ihsan Guray on 12/15/18.
//  Copyright © 2018 Egemen Ihsan Guray. All rights reserved.
//

#ifndef List_hpp
#define List_hpp

#include <stdio.h>

class List{
  
public:
    class Iterator;
    
    Iterator begin();
    
    Iterator end();
    
    void addToFront(int data);
    
private:
    struct Node;
    Node *theList;
    
};

#endif /* List_hpp */
