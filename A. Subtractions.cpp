#include<bits/stdc++.h>
#define  endl  '\n'
#define  yes  "YES"
#define  no  "NO"
using namespace std;
int main()
{
    int test;
    cin >> test; // muhammad_sayem er theke niye edited

    while(test--){
        int a, b, ans = 0;
        cin >> a >> b;

        while(a>0 && b>0){
            if(a>b){
                ans += (a/b);
                a = a%b;
            }
            else{
                ans += (b/a);
                b = b%a;
            }
        }

        cout << ans << endl;

    }

    return 0;
}
