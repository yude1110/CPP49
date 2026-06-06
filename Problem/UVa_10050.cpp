#include <bits/stdc++.h>
using namespace std;
int main() {
    int T, D, P;
    cin>>T;
    while(T--) {
        cin>>D; 
        cin>>P; 
        int h[105]; 
    
        for(int i=0; i<P; i++) cin>>h[i];


        int table[3655]={0},k; 
        for(int i=0; i<P; i++) { 
            k=1;
            for(int j=h[i];j<=D;j=h[i]*k) {
                if(j%7!=6 && j%7!=0) 
                    table[j]=1;
                k++;
            }
        }


        int cnt=0;
        for(int i=1; i<=D; i++) {
            if(table[i]==1)
                cnt++;
        }
        cout<<cnt<<"\n";
    }
}