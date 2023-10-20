
#ifndef RESIZEABLE_H
#define RESIZEABLE_H

class Resizeable
{
public:
    virtual void enlarge(int n) = 0;
    virtual void shrink(int n) = 0;
};

#endif