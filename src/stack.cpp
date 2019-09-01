#include "stack.h"

Stack ::Stack()
{
    top = 0;
}

bool Stack::isEmpty() const
{
    return top == 0;
}
