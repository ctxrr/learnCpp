#include <iostream>
using namespace std;


int main(int argc, char const* argv[])
{
    //prepare 2 object
    int m = 10;
    const int n = 20;

    //use non-const referance
    int &p1 = m;
    int &p2 = n;  //error

    //use const referance
    const int &p3 = m;
    int const &p7 = m; //both "const int" and "int const" are correct
    const int &p4 = n;

    //init non-const referance
    int &p5 = p3;  //error
    int &p6 = m;
}
