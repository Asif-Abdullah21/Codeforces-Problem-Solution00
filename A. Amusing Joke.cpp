#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2,s3;
    cin >> s1 >> s2 >> s3;

    s1 = s1+s2;

    int i,j;
    char temp;
    for(i=0;i<s1.size()-1;i++)
    {
        for(j=i+1;j<s1.size();j++)
        {
            if(s1[i]>s1[j])
            {
                temp = s1[i];
                s1[i] = s1[j];
                s1[j] = temp;
            }
        }
    }

    for(i=0;i<s3.size()-1;i++)
    {
        for(j=i+1;j<s3.size();j++)
        {
            if(s3[i]>s3[j])
            {
                temp = s3[i];
                s3[i] = s3[j];
                s3[j] = temp;
            }
        }
    }

    if(s1==s3) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
