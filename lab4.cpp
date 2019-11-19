#include <iostream>
#include "farm.h"
#include "farm_methods.cpp"
using namespace std;

int main()
{
    Farm Fonterra("New Zeland", 1200, 500, 2001, 400, "wheat", 230);
    Fonterra.getInfo();
    cout<<endl;
    Farm DFA("USA", 940, 450, 1991, 255, "potato", 500);
    DFA.getInfo();
    cout<<endl;
    Farm Lactalis("France", 600, 700, 1933, 350, "milk", 400);
    Lactalis.getInfo();
    cout<<endl;
    
    return 0;
}
