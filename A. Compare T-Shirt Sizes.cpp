#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    cin >> t;

    while(t--)
    {
        string s1,s2;
        cin >> s1 >> s2;
        int n1 = s1.size()-1;
        int n2 = s2.size()-1;

        if(s1[n1]==s2[n2] && n1==n2) cout << "="<< endl;
        else if(s1[n1]=='L' && s2[n2]=='M') cout << ">"<< endl;
        else if(s1[n1]=='L' && s2[n2]=='S') cout << ">"<< endl;
        else if(s2[n2]=='L' && s1[n1]=='M') cout << "<"<< endl;
        else if(s2[n2]=='L' && s1[n1]=='S') cout << "<"<< endl;
        else if(s1[n1]=='L' && s2[n2] =='L' && n1>n2) cout << ">"<< endl;
        else if(s1[n1]=='L' && s2[n2] =='L' && n1<n2) cout << "<"<< endl;
        else if(s1[n1]=='S' && s2[n2] =='S' && n1>n2) cout << "<"<< endl;
        else if(s1[n1]=='S' && s2[n2] =='S' && n1<n2) cout << ">"<< endl;
        else if(s1[n1]=='S' && s2[n2] =='M') cout << "<"<< endl;
        else if(s1[n1]=='M' && s2[n2] =='S') cout << ">"<< endl;


    }

    return 0;
}
