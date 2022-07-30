#include <iostream>
using namespace std;
//editer on github right now
class node;

class human
{
    int a;
    int b;
    
public:
    int func(node, node);
    
};

class node
{
    int var1;
    friend int human::func(node, node);

public:
};

int human::func(node a, node b){
    return a.var1 + b.var1;
}

int main()
{
    return 0;
}
