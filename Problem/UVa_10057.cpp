#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int A[n]={0},mid1,mid2,cnt=0,c;
        for(int i=0;i<n;i++) {
            cin>>A[i]; }
        sort(A,A+n);
        if(n%2==1) 
        {
            mid1=A[(n-1)/2]; 
            for(int i=0;i<n;i++) { 
                if(A[i]==A[n/2]) cnt++;
            }
            c=1; 
        }
        else 
        {
            mid1=A[n/2-1]; 
            mid2=A[n/2];
            for(int i=0;i<n;i++) { 
                if(A[i]==A[n/2]) cnt++;
                else if(A[i]==A[(n-1)/2]) cnt++;
            }
            c=mid2-mid1+1; 
            
        }
        cout<<mid1<<" "<<cnt<<" "<<c<<"\n";
    }
    return 0;
}