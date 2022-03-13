#include<iostream>
using namespace std;
void get(int &a)
{
    a=10;
    cout<<a<<endl;
}


int main(){

    int a=9;
    get(a);
    cout<<a;


    return 0;
}