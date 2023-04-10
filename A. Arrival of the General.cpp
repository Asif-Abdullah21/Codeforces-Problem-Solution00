#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }

    int min_index;
    int max_index;

    int minn = a[0];
    int maxx = a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>maxx)
        {
            maxx = a[i];
            max_index = i;
        }
        if(a[i]<=minn)
        {
            minn = a[i];
            min_index = i;
        }
    }

    int steps = ((n-1)-min_index)+(max_index-0);

    if(max_index<min_index)
    {
        cout << steps << endl;
    }
    else
    {
        cout << steps-1<< endl;
    }


    return 0;
}
