#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int cnt=0;
    if(str[0] >='a' && str[0]<='z')
    {
        for(int i=1; str[i] !='\0'; i++)
        {
            if(str[i] >='a' && str[i]<='z')
            {
                cout << str<< endl;
                return 0;
            }

        }

        str[0] = str[0]-32;

        for(int i=1; str[i] !='\0'; i++) str[i] = str[i]+32;

        cout << str << endl;

    }


else
{
    for(int i=1; str[i] !='\0'; i++)
    {
        if(str[i] >='a' && str[i]<='z')
        {
            cout << str<< endl;
            return 0;
        }
    }

    for(int i=0; str[i] !='\0'; i++) str[i] = str[i]+32;

    cout << str << endl;


}



return 0;
}


