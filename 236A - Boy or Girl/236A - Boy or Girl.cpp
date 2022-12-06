#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    char ch; int i=0;
    set<char>s1;
    while(cin>>ch)
        s1.insert(ch);
    if(s1.size()%2==0)
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";
    return 0;
}
