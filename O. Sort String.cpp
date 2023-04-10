#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    string str;
    char temp;
    cin >> n>>str;

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(str[i]>str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    cout << str << endl;
}

