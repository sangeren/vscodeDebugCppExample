#include <iostream>
#include <cctype>
#include "stack.h"

int main()
{
    using namespace std;

    Stack st;
    char ch;

    cin >> ch;
    auto isQ = toupper(ch) != 'Q';
    int isAlpha = isalpha(ch);
    auto stIsEmpty = st.isEmpty();

    cout << isQ << isAlpha << stIsEmpty << endl;

    return 0;
}