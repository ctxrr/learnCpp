//This course show how to access the base class member in subclass in template inherit

#include <iostream>

//in base template A,we define a varible named size
//and init size into 10
template<typename T>
class A {
    public:
        A() {size = 10;}
        int size;
};

//sub-template is inherit from A
template<typename T>
class B : public A<T>
{
    public:
        void show();
};

//function show() is to access size which is inherit from A
template<typename T>
void B<T>::show()
{
    //std::cout<<size;                       //error!
    std::cout<<this->size<<std::endl;        //way 1 ,right!
    std::cout<<A<T>::size<<std::endl;        //way 2 ,right!
}

int main(int argc, char const* argv[])
{
    B<int> a;
    a.show();
    return 0;
}
