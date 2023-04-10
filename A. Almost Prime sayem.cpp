#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, cnt, mainCnt = 0;
    cin >> n;
    int a[n+5];

    memset(a,0,sizeof(a));

    a[1] = 1;

    for(i=2; i<=sqrt(n); i++){
        if(a[i] == 0){
            for(j=i+i; j<=n; j+=i){
                a[j] = 1;
            }
        }
    }

    for(i=2; i<=n; i++){
        cnt = 0;
        if(a[i] == 1){
            for(j=2; j<i; j++){
                if(i%j == 0 && a[j] == 0) cnt++;
            }
            if(cnt == 2) mainCnt++;
        }
    }

    cout << mainCnt << endl;

    return 0;
}

