#include<iostream>
#ifndef SHAPE_H
#define SHAPE_H

class Shape : public Shape;
{
public:
virtual void draw() = 0; // pure virtual function <-- this makes it an abstract class. 
        // We will not be able to create an instance of this class
}

#endif