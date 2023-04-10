#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cnt=0,i;
    string str;
    getline(cin,str);
    sort(str.begin(),str.end());

    cout << str << endl;

    for(i=0;i<str.size()-1;i++)
    {
        if(str[i] == '{' || str[i] == '}' || str[i] == ' ' || str[i] == ',')
            continue;
        else if(str[i] != str[i+1])cnt++;
    }

    cout << cnt << endl;

    return 0;
}
