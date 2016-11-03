#include <iostream>
#include "vectorarray.h"

using namespace std;

Vectorarray::Vectorarray(){
    this->vec=new Pointarray[0];
    this->_size=0;
}
Vectorarray::Vectorarray(Pointarray p[],int _size){
    this->vec=new Pointarray[_size];
    int i;
    for(i=0;i<_size;++i){
        p[i]=vec[i];
    }
}
void Vectorarray::push_back( Pointarray &p){
    int i;
    for(i=0;i<_size;++i)
        ;
    vec[i]=p;

}
void Vectorarray::rezise(int x){
    Pointarray *a;
    a=new Pointarray[x];
    this->_size=x;
    for (int i=0;i<x;i++)
        a[i]=vec[i];
    delete[] vec;
    vec=a;
}
void Vectorarray::insert( int posicion,Pointarray &p){
    rezise(_size+1);
    for(int i=_size;i>posicion;i--)
        vec[i]=vec[--i];
    vec[posicion]=p;
}
void Vectorarray::remove( int posicion){
    int i=posicion+1;
    for(;i<_size;i++)
        vec[i-1]=vec[i];
    rezise(_size-1);

}
int Vectorarray::getzide(){
    return _size;
}
void Vectorarray::clean(){
    int i;
    Pointarray *p=0;
    for(i=0;i<_size;++i)
        vec[i]=*p;
    rezise(0);

}
