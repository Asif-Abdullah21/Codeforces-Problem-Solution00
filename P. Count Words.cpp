#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int cnt=1,i;
    getline(cin,str);


    for(i=1;i<str.size();i++)
    {
        if(str[i] == '?' || str[i] == ',' || str[i] == '.' || str[i] == '!') str[i] = ' ';

        if((str[i] >= 'A' && str[i] <= 'z') && (str[i-1] == ' '))
        {
            cnt++;
        }

        else
            continue;
    }


    cout << cnt << endl;

    return 0;
}


/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int cnt=1,i;
    getline(cin,str);


    for(i=1;i<str.size();i++)
    {
        if(!(str[i] >= 'A' && str[i] <= 'z') && (str[i+1] >= 'A' && str[i+1] <= 'z'))
        {
            cnt++;
        }

        else
            continue;
    }


    cout << cnt << endl;

    return 0;
}

 */
