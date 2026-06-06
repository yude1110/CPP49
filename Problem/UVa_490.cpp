//Rotating Sentences
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s[101];
    int k=0,maxlen=0;
    while(getline(cin,s[k]))
    {
        if(s[k].length()>maxlen)
            maxlen=s[k].length();
        k++;
    }
    //output
    for(int i=0;i<maxlen;i++)
    {
        for(int j=k-1;j>=0;j--)
        {
            s[j].length()>i ? cout<<s[j][i] : cout<<" ";
        cout<<"\n";
    }
    return 0;
}
