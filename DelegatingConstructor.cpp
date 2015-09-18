#include <iostream>
using namespace std;

class Myclass {
    public:
        Myclass(int i,int j,string s):age(i),year(j),name(s){}
        Myclass():Myclass(0,0,"robot"){}
        Myclass(string s):Myclass(0,0,s){}
        int age,year;
        string name;
};

int main(int argc, char const* argv[])
{
    Myclass *m = new Myclass(27,1991,"ctxrr");
    Myclass *n = new Myclass();
    Myclass *j = new Myclass("wayne");
    cout<<m->age<<" "<<m->year<<" "<<m->name<<endl;
    cout<<n->age<<" "<<n->year<<" "<<n->name<<endl;
    cout<<j->age<<" "<<j->year<<" "<<j->name<<endl;

}

