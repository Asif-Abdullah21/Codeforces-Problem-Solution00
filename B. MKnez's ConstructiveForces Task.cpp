#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n,i=0;
        cin >> n;

        if(n%2==0)
        {
            cout << "YES\n";
            while(i<n)
            {
                cout << 1 << " "<<-1<<" ";
                i+=2;
            }
        }
        else if(n==3) cout << "NO";//else if(n<5) cout << "NO\n";
        else{
            int k=0;
            k=(n-1)/2;
            i=0;
            cout << "YES\n";
            while(i<n)
            {
                cout <<k-1<<" ";
                i++;
                if(i<n) cout << -k <<" ";
                i++;
            }
        }


        cout << endl;
    }

    return 0;
}
