#include <iostream>

using namespace std;

class Myclass {

    public:
        Myclass() = default;
        Myclass(int a);
    private:
        int number;
};
//Myclass::Myclass() {

//}

Myclass::Myclass(int a) {
    number = a;

}
int main(int argc, char const* argv[])
{
    Myclass *c1 = new Myclass(10);
    Myclass *c2 = new Myclass();
    return 0;
}
