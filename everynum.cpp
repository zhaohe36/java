#include<iostream>
using namespace std;
int NUM[10010]={0},n=0;
void putnum(int a)
{
do{
    int temp=a%10;
    NUM[n++]=temp;
    cout<<temp<<" ";
    a=a/10;
}
while(a!=0);
cout<<endl;
}



int main()
{
    
    putnum(20);
    for(int i=n-1;i>=0;i--)
        cout<<NUM[i]<<" ";
    return 0;
}