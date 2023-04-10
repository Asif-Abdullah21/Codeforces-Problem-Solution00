#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int flag=0,len1=0;

    if(str[0] >= 'a' && str[0] <='z')
    {
        int i=1;
        while(str[i] != '\0')
        {
            if(str[i] >= 'A' && str[i] <='Z') len1++;
            i++;
        }

        if(len1 == str.size()-1) flag=1;
    }
    int i=0,len2=0;
    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <='Z') len2++;
        i++;
    }

    if(str.size()==len2) flag=2;

    if(flag==0) cout << str << endl;
    else if(flag==1)
    {
        str[0] -= 32;
        for(i=1; str[i] !='\0'; i++)
        {
            if(str[i] >= 'A' && str[i] <='Z') str[i] += 32;
        }

        cout << str << endl;
    }
    else if(flag==2)
    {
        for(i=0; str[i] !='\0'; i++)
        {
            if(str[i] >= 'A' && str[i] <='Z') str[i] += 32;
        }

        cout << str << endl;
    }

    return 0;
}
