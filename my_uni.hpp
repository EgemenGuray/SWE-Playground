//
//  my_uni.hpp
//  final
//
//  Created by Egemen Ihsan Guray on 12/15/18.
//  Copyright © 2018 Egemen Ihsan Guray. All rights reserved.
//

#ifndef my_uni_hpp
#define my_uni_hpp

#include <stdio.h>
#include <utility>

#endif /* my_uni_hpp */

template<typename T>
class my_uni{
    
    T *p;
    
public:
    
    my_uni(T *p);
    
    T* operator->();
    
    T& operator*();
    
    // COPY
    my_uni(const my_uni<T> & other)=delete;
    
    my_uni<T> &operator=(const my_uni<T> & other) = delete;
    
    // MOVE
    my_uni<T> &operator=(my_uni<T> && other);
    
    my_uni(my_uni<T> && other);
    
    ~my_uni();
    
};
