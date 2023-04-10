#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;

    int min_play = min(a,b);

    if(min_play%2==0) cout << "Malvika\n";
    else cout << "Akshat\n";

    return 0;
}
/*

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    int i=1;
    int cnt =1;

    while(1)
    {
        if(a-i==0) break;
        if(b-i==0) break;
        i++;
        cnt++;
    }

    if(cnt%2==0) cout << "Malvika\n";
    else cout <<"Akshat\n";
    return 0;
}

 */

/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;

    if(a==1 || b==1) cout << "Akshat\n";

    else if(a%2 !=0 && b%2 !=0) cout << "Akshat\n";
    else if(a%2==0 & b%2!=0 && b>a) cout << "Malvika\n";
    else if(a%2==0 & b%2!=0 && a>b) cout << "Akshat\n";
    else if(a%2==0 & b%2==0) cout << "Malvika\n";
    else if(a%2!=0 & b%2==0 && a>b) cout << "Malvika\n";
    else if(a%2!=0 & b%2==0 && a<b) cout << "Akshat\n";

    return 0;
}

*/
