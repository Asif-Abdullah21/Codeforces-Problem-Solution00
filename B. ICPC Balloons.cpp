#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    cin >> t;

    while(t--)
    {
        int n,sum=0;
        char ch;
        string str;

        cin >> n >> str;

        for(ch='A';ch<='Z';ch++)
        {
            int cnt=0;
            for(i=0;str[i] !='\0';i++)
            {
                if(str[i] == ch && cnt==0) cnt += 2;
                else if(str[i] == ch && cnt!=0) cnt++;
            }
            sum +=cnt;
        }

        cout << sum << endl;

    }


    return 0;
}



