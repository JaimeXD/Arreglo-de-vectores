#ifndef VECTORARRAY_H_INCLUDED
#define VECTORARRAY_H_INCLUDED
#include "puntoarray.h"
using namespace std;

class Vectorarray{
private:
    int _size;
    Pointarray *vec;
    void rezise(int n);
public:
    Vectorarray();
    Vectorarray( Pointarray p[], int _size);
    Vectorarray( Pointarray &a);


    void push_back(Pointarray &p);
    void insert( int posicion, Pointarray &p);
    void remove( int posicion);
    int getzide();
    void clean();
};


#endif // VECTORARRAY_H_INCLUDED
