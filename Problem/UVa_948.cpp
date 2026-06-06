//Fibonaccimal Base
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,flag=0;
        int f[40]={0,1};
        cin>>n;
        cout<<n<<" = ";
        for(int i=2;i<40;i++)
        {   
            f[i]=f[i-1]+f[i-2];
        }
        for(int i=39;i>1;i--)
        {  
            if(n>=f[i]) {
                n-=f[i];
                flag=1;
                cout<<"1";
            }
            else if(flag==1) {
                cout<<"0";
            }
        }
        cout<<" (fib)"<<endl;
    }
    return 0;
}