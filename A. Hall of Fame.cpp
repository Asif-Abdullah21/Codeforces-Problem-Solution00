#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,i;
    cin >> test;

    while(test--)
    {
        int n;
        string str;
        cin >> n >> str;

        int L=-1,R=-1;

        for(i=0;i<n;i++)
        {
            if(str[i]=='R' && R==-1) R = i;
            if(str[i]=='L') L = i;
        }

        if(L==-1 || R==-1) cout << -1 << endl;
        else if(R<L) cout << 0 << endl;
        else cout << L+1 << endl;
    }

    return 0;
}


/* #include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,i;
    cin >> test;

    while(test--)
    {
        int n;
        string str;
        cin >> n >> str;

        int L=-1,R=-1;

        for(i=0;i<n;i++)
        {
            if(str[i]=='R' && R==-1) R = i;
            if(str[i]=='L') L = i;
        }

        if(L==-1 || R==-1) cout << -1 << endl;
        else if(R<L) cout << 0 << endl;
        else if(L+1==R) cout << L+1 << endl;
        else cout << -1 << endl;
    }

    return 0;
}
*/

/*#include<bits/stdc++.h>
#define pii pair<int,int>
#define ll long long
#define endl '\n'
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;

int main()
{
   fastIO;

   int t,n;
   string s;

   cin>>t;

   while(t--)
   {
       cin>>n>>s;

       int r=-1;
       int l=-1;

       for(int i=0;i<n;i++)
       {
           if(s[i]=='R'&&r==-1)r=i;
           else if(s[i]=='L')l=i;
       }

       if(l==-1||r==-1)
       {
           cout<<-1<<endl;
       }


       else if(r<l)cout<<0<<endl;
       else cout<<l+1<<endl;

       //else cout<<-1<<endl;
   }

   return 0;
}
*/

/*
#include<bits/stdc++.h>
#define pii pair<int,int>
#define ll long long
#define endl '\n'
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;

int main()
{
   fastIO;

   int t,n;
   string s;

   cin>>t;

   while(t--)
   {
       cin>>n>>s;

       int r=-1;
       int l=-1;

       for(int i=0;i<n;i++)
       {
           if(s[i]=='R'&&r==-1)r=i;
           else if(s[i]=='L')l=i;
       }

       if(l==-1||r==-1)
       {
           cout<<-1<<endl;
       }


       else if(r<l)cout<<0<<endl;
       else if(l+1==r)cout<<l+1<<endl;
       else cout<<-1<<endl;
   }

   return 0;
}

*/
