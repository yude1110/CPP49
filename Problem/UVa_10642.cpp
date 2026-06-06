#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T,t=1;
    cin>>T;
    while(T--)
    {   
        long long int x1,y1,x2,y2,step;

        cin>>y1>>x1>>y2>>x2;

        long long int L1,L2; 
        L1=(((x1+y1)*(x1+y1+1)/2)+y1);
        L2=(((x2+y2)*(x2+y2+1)/2)+y2);
        step=L2-L1;

        cout<<"Case "<<t<<": "<<step<<"\n";
        t++;
    }
}