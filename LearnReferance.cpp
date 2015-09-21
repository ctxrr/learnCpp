/*Show how to use lvalue referance and rvalue referance*/
#include<iostream>
using namespace std;

void change1(int & n){
    cout<<"address is:"<<&n<<endl;
}

void change2(int && n){
    cout<<"address is:"<<&n<<endl;
}

int main(){
    int n=10;
    cout<<"address is:"<<&n<<endl;
    //change1(n++);//error
    change1(++n);

    change2(n++);
    //change2(++n);//error
    return 0;
}

