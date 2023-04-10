#include<bits/stdc++.h>
using namespace std;

int main()
{
        int t,i;
        cin >> t;
        cin.ignore();
        while(t--)
        {
            string str;
            cin >> str;

            sort(str.begin(),str.end());

            cout << str[0] << " ";
            for(i=1;i<str.size()-1;i++) cout << str[i];
            cout << " "<< str[str.size()-1] << endl;


        }

    return 0;
}


