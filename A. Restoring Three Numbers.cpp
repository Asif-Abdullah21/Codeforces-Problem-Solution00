#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n1,n2,n3,n4;
    cin >> n1>> n2>> n3 >> n4;

    int sum = max({n1,n2,n3,n4});

    int a,b,c;//3654

    if(n1 != sum && n2 != sum && n3 != sum)
    {
        a = sum - n1;
        b = sum - n2;
        c = sum - n3;
    }
    else if(n1 != sum && n2 != sum && n4 != sum)
    {
        a = sum - n1;
        b = sum - n2;
        c = sum - n4;
    }
    else if(n1 != sum && n3 != sum && n4 != sum)
    {
        a = sum - n1;
        b = sum - n3;
        c = sum - n4;
    }
    if(n2 != sum && n3 != sum && n4 != sum)
    {
        a = sum - n2;
        b = sum - n3;
        c = sum - n4;
    }

    cout << a << " " << b << " " <<c;

    return 0;
}


/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5], i, maxx;

    for(i=0; i<4; i++){€
        cin >> a[i];
    }

     maxx = max({a[0],a[1],a[2],a[3]});

    for(i=0; i<4; i++){
        if(a[i] != maxx) cout << maxx-a[i] << " ";
    }

    return 0;
}
 */
