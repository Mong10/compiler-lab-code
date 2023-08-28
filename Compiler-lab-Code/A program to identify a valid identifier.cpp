/*
#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int n = s.size();
    bool valid = true;

    if (!(s[0] >= 'a' && s[0] <= 'z') && !(s[0] >= 'A' && s[0] <= 'Z') && !(s[0] == '_')) {
        valid = false;
    } else {
        for (int i = 1; i < n; i++) {
            if (!((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] == '_') || (s[i] >= '0' && s[i] <= '9'))) {
                valid = false;
                break;
            }
        }
    }

    if (valid) {
        cout << "Valid" << endl;
    } else {
        cout << "Invalid" << endl;
    }

    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    bool flag=true;
    int n=s.size();
    if(!(s[0]>='a' && s[0]<='z') && !(s[0]>='A' && s[0]<='Z') && !(s[0]=='_'))
    {
        flag=false;
    }
    else
    {
        for(int i=1;i<n;i++)
        {
            if(!(s[i]>='a' && s[i]<='z') && !(s[i]>='A' && s[i]<='Z') && !(s[i]=='_') && !(s[i]>='0' && s[i]<='9'))
            {
              flag=false;
              break;
            }
        }
    }
    if(flag)
    {
        cout<<"valid"<<endl;
    }
    else cout<<"Not valid"<<endl;

}
