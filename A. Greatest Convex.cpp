#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,n,i,j;
    cin >> test;

    while(test--)
    {
        int flag=0;
        cin >> n;

        for(i=n;i>0;i--)
        {
            long long sum;
            long long fact1=1,fact2=1;

            for(j=1;j<n;j++)
            {
                fact1 *=j;
            }
            for(j=1;j<n-1;j++)
            {
                fact2 *=j;
            }

            sum = fact1+fact2;
            if(sum % n ==0)
            {
                flag = 1;
                break;
            }
        }
        if(flag==1) cout << n-1 << "\n";
        else cout << "-1\n";
    }

}
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,n;
    cin >> test;

    while(test--)
    {
        cin >> n;
        cout << n-1<< endl;
    }

}

*/
