#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string cmd;
    while(cin>>n) {  
        int top=1,bottom=6;
        int north=2,south=5;
        int west=3,east=4;
        if(n==0) break;
        for(int i=0;i<n;i++) {
            cin>>cmd;
            if(cmd=="north") { 
                swap(bottom,north);
                swap(north,top);
                swap(top,south);
            } else if(cmd=="south") { 
                swap(bottom,south);
                swap(south,top);
                swap(top,north);
            } else if(cmd=="west") { 
                swap(bottom,west);
                swap(west,top);
                swap(top,east);
            } else if(cmd=="east") { 
                swap(bottom,east);
                swap(east,top);
                swap(top,west);
            }
        }
        cout<<top<<"\n";
    }
}