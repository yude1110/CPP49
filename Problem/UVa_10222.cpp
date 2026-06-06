//Decode the Mad man
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    string s2;
    while(getline(cin,s2))
    {
        for(int i=0;i<s2.length();i++) 
        {   
            if(s2[i]>='A'&&s2[i]<='Z') 
                s2[i]=tolower(s2[i]); 

            if(s2[i]==32||s2[i]==10) { 
                cout<<s2[i];}
            else { 
                cout<<s1[s1.find(s2[i])-2];}
        }
        cout<<"\n";
    }
    return 0;
}