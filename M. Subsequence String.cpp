#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int h,e,l,o,i;
    h=e=l=o=0;

    for(i=0;i<str.size();i++)
    {
        if(str[i]=='h') h++;

        else if(str[i] == 'e' && h!=0) e++;
        else if(str[i] == 'l' && e!=0) l++;
        else if(str[i] == 'l' && l!=0) l++;
        else if(str[i] == 'o' && l>1) o++;
    }

    if(h>0 && e>0 && l>1 && o>0) cout << "YES\n";
    else cout << "NO\n";
}


