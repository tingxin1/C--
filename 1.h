#ifndef one_H
#define one_H
#include<iostream>
#include "2.h"
class A{
    public:
    void PrintValue(){
        a=1024;
        std::cout<<a<<std::endl;
    }
    private:
    int a;
    B inb;
};

#endif