#include <iostream>
using namespace std;

const int & foo(const int &i);
class A
{
    private:
        mutable int p;
        int q;

    public:
        A(int a) {p=a;}
        void show();
        void show() const;
};

void
A::show()
{
    cout<<"no const "<<p<<endl;
    p++;  //true
    q++;  //true
}

void
A::show() const
{
    cout<<"const "<<p<<endl;
    p++;   //true because p is mutable
    //q++; //error
}

int main(int argc, char const* argv[])
{
    int i;
    int m = 1;
    i = foo(m);
    cout<<i<<endl;
    A a(1);
    a.show();  //overload
    const A b(2);
    b.show();  //overload
    return 0;
}

const int & foo(const int &i)
{
    //i++; //error.you can't change a const value
    return i;
}
