#include <bits/stdc++.h>
using namespace std;
static auto __ = []()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();

int main()
{
    int T;
    string s;
    cin>>T;
    cin.ignore();
    getline(cin,s);
    while(T--)
    {
        map <string,double> tree;
        double total=0;
        while(getline(cin,s)&&s!="") {  
            tree[s]++; 
            total++; }
        for(const auto& i : tree) {
            cout<<i.first<<" "<<fixed<<setprecision(4)<<i.second/total*100<<"\n"; }

        if(T) cout<<"\n"; 
        tree.clear();
    }
}
