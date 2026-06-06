#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T,L;
    cin>>T;
    while(T--)
    {
        cin>>L;
        int A[50]={0};
        for(int i=0;i<L;i++)
        {
            cin>>A[i];
        }
        int cnt=0;
        for(int i=0;i<L;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(A[i]<A[j])
                {
                    cnt++;
                }
            }
        }
        cout<<"Optimal train swapping takes "<<cnt<<" swaps.\n";
    }

}