#include<iostream>
#include<math.h>
#include<time.h>
using namespace std;
int hashfunc(char a[],int n)
{
int id=0;
for(int i=0;i<n;i++)
    id+=(a[i]-'A')*pow(26,i);//左边字符是结尾
return id;
}
void dehash(int id)
{int i=0;
char c;
    while(id!=0)
        {//先从末尾输出，正好返回了正常字符串的顺序
            i=id%26;
            c='A'+i;
            cout<<c;
            id=id/26;
        }

}



int main()
{
clock_t t1,t2;
t1=clock();

char a[10]="ABCDF";

dehash(hashfunc(a,5));
t2=clock();
cout<<endl<<double(t2-t1)<<"ms";
return 0;
}