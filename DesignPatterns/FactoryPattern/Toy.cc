#include <iostream>
using namespace std;

#pragma once

class Toy
{
public:
    virtual void prepareToyParts() = 0;
    virtual void assembleToyParts() = 0;
    virtual void packToy() = 0;
    virtual void showToy() = 0;
};