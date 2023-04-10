
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1 = "qwertyuiopasdfghjkl;zxcvbnm,./";

    string s2;
    char ch;
    cin >> ch;
    cin >> s2;

    for(int i=0; i<s2.size(); i++)
    {
        if(ch == 'R')
        {
            for(int j=1; j<s1.size(); j++)
            {
                if(s2[i]==s1[j])
                {
                    cout << s1[j-1];
                }
            }
        }

        if(ch == 'L')
        {
            for(int j=0; j<s1.size()-1; j++)
            {
                if(s2[i]==s1[j])
                {
                    cout << s1[j+1];
                }
            }
        }
    }

    return 0;
}
