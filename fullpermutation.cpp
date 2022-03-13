#include<iostream>
using namespace std;
const int maxn=11;
int n,P[maxn],hashtable[maxn]={false},time=0;
void generateP(int index)
{
    if(index == n+1)
    {
        for(int i=1;i<=n;i++)
            cout<<P[i];
        cout<<endl;
        return;
    }

    for(int x=1;x<=n;x++)
        if(hashtable[x]==false)
            {
                P[index]=x;
                hashtable[x]=true;
                generateP(index+1);
                hashtable[x]=false;


            }

}

int main()
{
n=5;
generateP(1);
    return 0;
}