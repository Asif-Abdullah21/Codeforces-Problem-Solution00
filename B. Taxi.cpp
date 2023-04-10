#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,cnt_1=0,cnt_2=0,cnt_3=0,cnt_4=0,cnt=0,i;
    cin >> n;
    int a[n];

    for(i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i]==1) cnt_1++;
        else if(a[i]==2) cnt_2++;
        else if(a[i]==3) cnt_3++;
        else if(a[i]==4) cnt_4++;
    }

    cnt += cnt_4;
    int remaining_1=0,remaining_2=0;

    if(cnt_1>cnt_3)
    {
        cnt += cnt_3;
        remaining_1 = cnt_1-cnt_3;
    }
    else cnt += cnt_3;

    if(cnt_2%2==0) cnt+= (cnt_2/2);
    else
    {
        cnt+= (cnt_2/2);
        remaining_2 = 2;
    }

    int rem = remaining_1+remaining_2;

    if(rem%4==0) cnt += (rem/4);
    else cnt += (rem/4)+1;

    cout << cnt << endl;

    return 0;
}
