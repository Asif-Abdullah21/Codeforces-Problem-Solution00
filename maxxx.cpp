#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n=5;
    int a[n] = {10,20,30,15,5};

    int index;
    index = max_element(a,a+n)-a;

    cout << a[index];

    return 0;
}
