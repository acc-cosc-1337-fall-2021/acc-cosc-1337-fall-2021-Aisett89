#include "shape.h"

//shape.h
#ifndef LINE_H
#define LINE_H

class Line : public Shape
{
public:
    void draw() override; // <-- in the back class, there is a base class we can override
};

#endif