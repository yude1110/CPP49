//B2-Sequence
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,cases=1;
    while(cin>>n)
    {
        int a[n+5];
        bool flag=true;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];

            if(a[i]<1) {
                flag=false;}
  
            if((i>=1)&&(a[i-1]>=a[i])) {
                flag=false;}
        }

        int index;
        int sum[20005]={0};
        if(flag==true)
        {

            for(int j=0;j<n;j++)
            {
                for(int k=j;k<n;k++)
                {
                    index=a[j]+a[k];
            
                    if(sum[index]==0) { 
                        sum[index]=1;}
                    else { 
                        flag=false;
                        break;}
                }
            }
        }
        if(flag==true){
            printf("Case #%d: It is a B2-Sequence.\n",cases);}
        else{
            printf("Case #%d: It is not a B2-Sequence.\n",cases);}
        cases++;
        cout<<endl;
    }
    return 0;
}