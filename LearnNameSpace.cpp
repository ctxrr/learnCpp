#include <iostream>
using namespace std;
namespace Tom {
    string name = "Tom";
} // namespace Tom

namespace Wayne {
    string name = "Wayne";
} // namespace Wayne

void foo1();
void foo2();
void foo3();

int main(int argc, char const* argv[])
{
    foo1();
    foo2();
    foo3();
    return 0;
}

/*
    Way 1:access the namespace member by :: operator
*/
void foo1()
{
    cout<<"Test in foo1"<<endl;
    string name = "ctxrr";
    cout<<name<<endl;
    cout<<Tom::name<<endl;
    cout<<Wayne::name<<endl;
}

/*
    Way 2:access the namespace member by using declaration
          Be attention,only one name can exist
*/
void foo2()
{
    cout<<"Test in foo2"<<endl;
    //using Tom::name;
    //using Wayne::name;
    string name = "ctxrr";
    cout<<name<<endl;
}

/*
    Way 3:access the namespace member by using compile
          Be attention,only ctxrr will be used
*/
void foo3()
{
    cout<<"Test in foo3"<<endl;
    string name = "ctxrr";
    using namespace Tom;
    using namespace Wayne;
    cout<<name<<endl;
    cout<<Tom::name<<endl;
    cout<<Wayne::name<<endl;
}
