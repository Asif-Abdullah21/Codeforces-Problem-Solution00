#include<bits/stdc++.h>
#define pii pair<int,int>
#define ll long long
#define endl '\n'
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;


int main()
{
     int t;
     cin >> t;

     while(t--)
     {
         int n;
         cin >> n;
         int a[n];

         for(int i=0;i<n;i++) cin >> a[i];

         cout << a[0]<< endl;
     }


     return 0;
}
