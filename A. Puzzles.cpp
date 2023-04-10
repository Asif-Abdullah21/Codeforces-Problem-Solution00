#include<bits/stdc++.h>
#define pii pair<int,int>
#define ll long long
#define endl '\n'
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;


int main()
{
     int n,m;
     cin >> n >> m;
     int a[m+2];

     for(int i=1;i<=m;i++) cin >> a[i];

     sort(a+1,a+m+1);

     int minn=1e5,j=n;
     for(int i=1;i<=(m-n)+1;i++,j++)
     {
         if((a[j]-a[i])<=minn) minn = a[j]-a[i];
     }

     cout << minn << endl;

     return 0;
}
