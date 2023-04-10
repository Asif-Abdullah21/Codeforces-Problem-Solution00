#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    cin >> t;

    while(t--)
    {
        string s1;
        string s2;
        cin >> s1;

        s2 = s1;
        reverse(s2.begin(),s2.end());

        cout << s1 << s2<< endl;

    }

    return 0;
}


/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    cin >> t;

    while(t--)
    {
        string s1;
        string s2;
        cin >> s1;

        s2 = s1;
        reverse(s1.begin(),s1.end());
        s2 = s1+s2;

        cout << s2<< endl;


    }

    return 0;
}

*/
