#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,i;
    cin >> a >> b;
    int n = a+b+1;
    string str;
    cin >> str;

    if(n != str.size())
    {
        cout << "No\n" << str.size();
        return 0;
    }
    if(str[a] != '-')
    {
        cout << "No\n";
        return 0;
    }

    int cnt=0;

    for(i=0;str[i] !='\0';i++)
    {
        if(str[i] >= '0' && str[i]<='9' && i!=a)
        {
            cnt++;
        }
    }

    if(a+b==cnt) cout << "Yes\n";
    else cout << "No\n";

    return 0;
}
