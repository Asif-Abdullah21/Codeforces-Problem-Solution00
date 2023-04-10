#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        int b[n];
        for(i=0;i<n;i++) cin>>a[i];
        for(i=0;i<n;i++)
        {
            int size;
            string str;
            cin>>size>>str;

            for(j=0;j<size;j++)
            {
                if(str[j] == 'D')
                {
                    a[i]++;
                    if(a[i]>9) a[i] = 0;
                }

                else if(str[j] == 'U')
                {
                    a[i]--;
                    if(a[i]<0) a[i] = 9;
                }
            }
        }

        for(i=0;i<n;i++) cout<<a[i]<< " ";
        cout << endl;

    }


    return 0;
}




