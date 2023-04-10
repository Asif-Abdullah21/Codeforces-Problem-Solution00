#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a,b,i,j,cnt=0;

    cin >> a >> b;

    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if(i%2==0) cout<< "#";

            else{
                if(cnt%2==0)
                {
                   if(j<b-1) cout<<".";
                   else if(j==b-1)
                   {
                       cout << "#";
                       cnt++;
                   }

                }
                else
                {
                   if(j==0)
                   {
                       cout << "#";
                   }
                   else if(j>0)
                   {
                        cout<<".";
                        if(j==b-1)cnt++;
                   }
                }
            }
        }
        cout << endl;
    }

    return 0;
}

