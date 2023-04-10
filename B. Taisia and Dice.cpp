#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n,s,r;
        cin >> n >> s >> r;
        int maxx = s-r;

        cout << maxx << " ";

        int x = r/(n-1);
        int rem = r%(n-1);

        for(int i=0;i<n-1;i++)
        {
            if(rem>0) cout << x+1<<" ";
            else cout << x<< " ";
            rem--;
        }
        cout << endl;
    }


    return 0;
}

