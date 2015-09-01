#include <iostream>
using namespace std;

const int & foo(const int &i);
class A
{
    private:
        int p;

    public:
        A(int a) {p=a;}
        void show();
        void show() const;
};

void
A::show()
{
    cout<<"no const"<<p<<endl;
}

void
A::show() const
{
    cout<<"const"<<p<<endl;
}

int main(int argc, char const* argv[])
{
    int i;
    i = foo(1);
    cout<<i<<endl;
    A a(1);
    a.show();  //overload
    const A b(2);
    b.show();  //overload
    return 0;
}

const int & foo(const int &i)
{
    return i;
}
