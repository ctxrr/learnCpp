#include <iostream>
using namespace std;

void foo(int n ,int *r){
    cout<<&n<<endl;//heap
    cout<<r<<endl;//stack
    cout<<&r<<endl;//stack
    int k = 20;
    cout<<&k<<endl;//stack
    int *q = new int;
    cout<<q<<endl;//heap
}

int main(int argc, char const* argv[])
{
    int a = 10;
    int b = 10;
    int *p = new int;
    cout<<&a<<endl;//top of stack
    cout<<&b<<endl;//stack
    cout<<&p<<endl;//stack
    cout<<p<<endl;//buttom of heap
    cout<<endl;

    foo(a,p);
}
