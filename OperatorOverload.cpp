#include <iostream>
using namespace std;

class Human {
    private:
        string _name;
        int _age;
    public:
        Human();
        Human(int age,string name);

        Human operator+(const Human &e);  //used for ctxrr + wayne
        Human operator+(int n);           //used for ctxrr + 10
        bool operator>(const Human &e);   //used for ctxrr > wayne
        bool operator<(const Human &e);   //used for ctxrr < wayne
        bool operator==(const Human &e);  //used for ctxrr == wayne
        friend Human operator+(int n,const Human &e); //used for 10 + ctxrr
        friend Human operator!(const Human &e); //used for 10 + ctxrr
        friend void operator<<(ostream &os , const Human &e); // overload operator '<<'
        void show();
};

Human::Human()
{
    _name = "result";
    _age = 0;
}

Human::Human(int age,string name)
{
    _name = name;
    _age = age;
}

Human
Human::operator+(const Human &e)
{
    cout<<"Call way 1"<<endl;
    Human ret;
    ret._age = _age + e._age;
    return ret;
}

Human
Human::operator+(int n)
{
    cout<<"Call way 2"<<endl;
    Human ret;
    ret._age = _age + n;
    return ret;
}

bool
Human::operator>(const Human &e)
{
    return _age>e._age;
}

bool
Human::operator<(const Human &e)
{
    return _age<e._age;
}

bool
Human::operator==(const Human &e)
{
    return _age==e._age;
}

Human
operator+(int n , const Human &e)
{
    cout<<"Call way 3"<<endl;
    Human ret;
    ret._age = n + e._age;
    return ret;
}

Human
operator!(const Human &e)
{
    Human ret;
    ret._age = e._age *(-1);
    return ret;
}

void operator<<(ostream &os , const Human &e)
{
    os<<"The age is "<<e._age<<endl;
}

void
Human::show()
{
     cout<<_age<<endl;
}

int main(int argc, char const* argv[])
{
    Human ctxrr(27,"ctxrr");
    Human wayne(26,"wayne");
    Human p1,p2,p3,p4;

    p1 = ctxrr + wayne;
    p2 = ctxrr + 10;
    p3 = 20 + ctxrr;
    p4 = !ctxrr;

    p1.show();
    p2.show();
    p3.show();
    p4.show();

    cout<<p1;
    cout<<p2;
    cout<<p3;
    cout<<p4;

    cout<<(ctxrr>wayne)<<endl;
    cout<<(ctxrr<wayne)<<endl;
    cout<<(ctxrr==wayne)<<endl;
    return 0;
}
