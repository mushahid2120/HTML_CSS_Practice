#include<iostream>
using namespace std;
int main()
{int i,j,k=1;
for(i=2;k<=10;i++)
        {
            for(j=2;j<=i;j++)
            {
                if(i%j==0)
                break;
            }
            if(j==i)
            {
                cout<<" hello" ;
                cout<<i;
                k++;
                if(k==10)
                break;
            }
        }
}