#include <iostream>
using namespace std;

#define USE_EXPLICIT 0

class Myclass {
    public:
        Myclass(int i,int j,string s):age(i),year(j),name(s){}
        Myclass():Myclass(0,0,"robot"){}
#if USE_EXPLICIT
        explicit Myclass(int i):Myclass(i,0,"robot"){}
#else
        Myclass(int i):Myclass(i,0,"robot"){}
#endif
        Myclass add(const Myclass &c);
        int age,year;
        string name;
};

Myclass
Myclass::add(const Myclass &c)
{
    Myclass t;
    t.age+=c.age+age;
    return t;
}

int main(int argc, char const* argv[])
{
    Myclass *m = new Myclass(27,1991,"ctxrr");
    Myclass *n = new Myclass();
    Myclass *r = new Myclass(20);
    cout<<m->age<<" "<<m->year<<" "<<m->name<<endl;
    cout<<n->age<<" "<<n->year<<" "<<n->name<<endl;
    cout<<r->age<<" "<<r->year<<" "<<r->name<<endl;
#if USE_EXPLICIT
    Myclass q = m->add((Myclass)10); //must convert explicit
#else
    Myclass q = m->add(10);  //can convert implicit
#endif
    cout<<q.age<<" "<<q.year<<" "<<q.name<<endl;
}
