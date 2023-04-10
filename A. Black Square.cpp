#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,sum=0;

    cin >> a >> b >> c >> d;
    cin.ignore();

    string str;

    cin >> str;

    for(int i=0;str[i] != '\0';i++)
    {
        if(str[i]-48 == 1) sum += a;
        else if(str[i]-48 == 2) sum += b;
        else if(str[i]-48 == 3) sum += c;
        else if(str[i]-48 == 4) sum += d;
    }

    cout << sum << endl;

    return 0;
}
