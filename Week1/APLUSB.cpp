#include <iostream>
#include <string>

using namespace std;
int main()
{
    string::iterator_reverse rit;
    string str = "Hello World";
    for (rit=str.rbegin();it<str.end();it++)
    {
        cout<<*it;
    }
}