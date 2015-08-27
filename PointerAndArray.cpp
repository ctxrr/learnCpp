#include<iostream>
using namespace std;
int main(int argc, char const* argv[])
{
    /*prepare array or memery to use*/
    int a[5] = {1,2,3,4,5};
    int b[5][2] = {{1,2},{3,4},{5,6},{7,8},{9,10}};
    int *p = new int[5];

    int *p1 = a;
    int (*p2)[5] = &a;
    int (*p3)[2] = b;
    int (*p4)[5][2] = &b;

    /* 1.show infomation of a[5]*/

    //you can use both the array name and point to access the member
    cout<<a[1]<<" "<<a[5]<<endl;
    cout<<p1[1]<<" "<<p1[5]<<endl;

    //this 4 pointer have the same value but different type
    cout<<a<<endl;       //type:int*
    cout<<&a[0]<<endl;   //type:int*
    cout<<*p2<<endl;     //type:int (*)[5]
    cout<<&a<<endl;      //type:int (*)[5]
    cout<<"the size of memory that p2 point to:"<<sizeof(*p2)<<endl; // size is 4 * 5

    cout<<"size of a "<<sizeof(a)<<endl; // this is the easiest way to caculate the size of array

    /* 2.show infomation of b[5][2]*/

    //you can use both the array name and point to access the member
    cout<<b[1][1]<<endl;
    cout<<p3[1][1]<<endl;
    cout<<"the size of memory that p4 point to:"<<sizeof(*p4)<<endl;

    return 0;
}
