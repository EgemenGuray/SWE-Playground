//
//  my_uni.cpp
//  final
//
//  Created by Egemen Ihsan Guray on 12/15/18.
//  Copyright © 2018 Egemen Ihsan Guray. All rights reserved.
//

#include "my_uni.hpp"
template <typename T>
my_uni<T>::my_uni(T *p): p{p}{}

template <typename T>
T* my_uni<T>::operator->(){
    return p;
}

template <typename T>
T& my_uni<T>::operator*(){
    return *p;
}

// MOVE
template <typename T>
my_uni<T>& my_uni<T>::operator=(my_uni<T> && other){
    std::swap(p, other.p);
    return *this;
}

template <typename T>
my_uni<T>::my_uni(my_uni<T> && other){
    p = other.ptr;
    other.ptr = nullptr;
}

template <typename T>
my_uni<T>::~my_uni(){
    delete p;
}
