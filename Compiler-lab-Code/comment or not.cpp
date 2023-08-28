//kkkkk
/*sksksksksksk*/
/*
#include<bits/dtc++.h>
using namespace std;
int main()
{
    string s;
    bool flag;
    getline(cin,s);
    int n=s.size();
    if(n>=2 && s[0]=='/' && s[1]=='/')flag=true;
    else if(n>=4 && s[0]=='/' s[1]=='*' && s[n-1]=='/' && s[n-2]=='*')falg=true;
    else flag=false;
    if(flag==true)cout<<"It is comment"<<endl;
    else cout<<"Not a comment"<<endl;
}
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    bool flag;
    getline(cin,s);
    int n=s.size();
    if(n>=2 && s[0]=='/' && s[1]=='/')flag=true;
    else if(n>=4 && s[0]=='/' && s[1]=='*' && s[n-1]=='/' && s[n-2]=='*')flag=true;
    else flag=false;
    if(flag==true)cout<<"Its comment"<<endl;
    else cout<<"Not comment"<<endl;
}
