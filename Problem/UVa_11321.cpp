#include <bits/stdc++.h>
using namespace std;
int n,m;
bool cmp(int a,int b) {
    if(a%m!=b%m) return a%m<b%m;
    else {
        if(abs(a%2)) {
            if(abs(b%2)) return a>b;
            else return true;
        } else {
            if(abs(b%2)) return false;
            else return a<b;
        }
    }
    return a<b;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    while(cin>>n>>m) {
        if(n==0 && m==0) {
            cout<<0<<" "<<0<<"\n";
            break;
        }
        cout<<n<<" "<<m<<"\n";
        int A[10005];
        for(int i=0; i<n; i++) {
            cin>>A[i];
        }

        sort(A, A+n, cmp);

        for(int i=0; i<n; i++) {
            cout<<A[i]<<"\n";
        }
    }
}