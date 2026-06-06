
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        double p,q,ans=0;
        int n,i;
        cin>>n>>p>>i;
        q=1-p;
        if(p==0){
            cout<<"0.0000"<<endl;}
        else {
            ans=(pow((q),(i-1))*p)/(1-pow(q,n));

            cout<<fixed<<setprecision(4)<<ans<<endl;}
    }
    return 0;
}