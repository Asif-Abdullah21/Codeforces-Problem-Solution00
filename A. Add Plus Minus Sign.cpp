#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        getchar();
        string str;
        cin >> str;

        int cnt = 0;
        if(str[0]=='1') cnt++;

        for(i=1;i<n;i++)
        {
            if(str[i]=='0') cout << "+";
            else{
                cnt++;
                if(cnt%2==0) cout << "-";
                else cout << "+";
            }
        }
        cout << "\n";

    }
    return 0;
}
