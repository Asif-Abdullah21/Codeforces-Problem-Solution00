#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while(test--)
    {
        int n;
        cin >>n;
        int a[n];
        for(int i=0; i<n; i++) cin >> a[i];

        int unknown = 10-n;

        if(unknown == 2) cout << 6 << endl;
        else if(unknown==3) cout << 18<< endl;
        else if(unknown==4) cout << 36<< endl;
        else if(unknown==5) cout << 60<< endl;
        else if(unknown==6) cout << 90<< endl;
        else if(unknown==7) cout << 126<< endl;
        else if(unknown==8) cout << 168<< endl;
        else if(unknown==9) cout << 216<< endl;
    }

    return 0;
}
