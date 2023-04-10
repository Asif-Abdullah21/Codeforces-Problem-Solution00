#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;

        if(n<=10) cout << n << endl;
        else
        {
            int ans = 9;//1 theke 9 prjnto
            int num = 10;
            for(int i=0;i<5;i++)
            {
                int add = min(9,n/num);// 10 theke 90 prjnto 9 ta songkha jog krlam, then 10 gun diye num ta baray 100 er jnno ekta nilam
                ans = ans + add;
                num = num*10;//jehetu test case a highest 1000000-1 eto prjnto hote pare bolse dise tai 10*10^5 prjnto check dilam
            }

            cout << ans << endl;
        }
    }

    return 0;
}

/*
#include<bits/stdc++.h>

#define endl '\n'
#define ll long long
#define pii pair<int,int>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;
using namespace __gnu_pbds;
template <typename T> using o_set=tree<T,null_type,less<T>, rb_tree_tag,tree_order_statistics_node_update>;

//bool operator<(const node& p)const{return varname>p.varname;}..Overloading

int main()
{
    fastIO;

    int t,n;

    cin>>t;

    while(t--)
    {
        cin>>n;

        if(n<=10)cout<<n<<endl;

        else
        {
            int ans=9;
            int num=10;

            for(int i=0;i<5;i++)
            {
                ans+=min(9,n/num);

                num*=10;
            }

            cout<<ans<<endl;
        }
    }
    return 0;
}  */
