#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,level,cnt=0,j;
    cin >> level;


    int c[102];
    for(i=0; i<102; i++)
    {
        c[i] = 0;
    }

    int n1;
    cin >> n1;
    int a[n1];

    for(i=0; i<n1; i++)
    {
        cin >> a[i];
        if(c[a[i]]==0)
        {
        cnt++;
        c[a[i]] = 1;
        }
    }

    int n2;
    cin >> n2;
    int b[n2];

    for(i=0; i<n2; i++)
    {
        cin >> b[i];
        if(c[b[i]]==0)
        {
        cnt++;
        c[b[i]] = 1;
        }
    }

    if(cnt==level) cout << "I become the guy.\n";
    else cout << "Oh, my keyboard!\n";

    return 0;
}

/* #include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, p, q, i, x, flag = 0;
    cin >> n;
    int cnt[n+1];

    for(i=0; i<n+1; i++){
        cnt[i] = 0;
    }

    cin >> p;
    for(i=0; i<p; i++){
        cin >> x;
        cnt[x]++;
    }

    cin >> q;
    for(i=0; i<q; i++){
        cin >> x;
        cnt[x]++;
    }

    for(i=1; i<=n; i++){
        if(cnt[i] == 0) {
            flag = 1;
            break;
        }
    }

    if(flag == 0) cout << "I become the guy." << endl;
    else cout << "Oh, my keyboard!" << endl;

    return 0;
}
 */
