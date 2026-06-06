#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T,cases=1;
    cin>>T;
    while(T--) {
        char n1,n2;
        int size;
        cin>>n1>>n2>>size;
        long long int table[size*size];
        int i;
        for(i=0;i<size*size;i++) {
            cin>>table[i];
        }
        for(i=0;i<size*size;i++) { 
            if(table[i]!=table[(size*size-1)-i]||table[i]<0) break;

        if(i==size*size) { 
            
		    cout<<"Test #"<<cases++<<": Symmetric."<<endl;
		} else {
		    cout<<"Test #"<<cases++<<": Non-symmetric."<<endl;
		}
    }
}