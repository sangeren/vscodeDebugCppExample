#ifndef STACK_H
#define STACK_H

typedef unsigned long Item;
class Stack
{
private:
    enum
    {
        Max = 10
    };
    Item items[Max];
    int top;

public:
    Stack(/* args */);
    bool isEmpty() const;
};

#endif