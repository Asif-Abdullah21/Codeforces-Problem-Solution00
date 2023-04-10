#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        int digit=0;
        int last_digit = n%10;
        while(n)
        {
            n=n/10;
            digit++;
        }

        /// int digit = log10(n)+1;

        if(digit==1)
        {
            cout << (last_digit-1)*10+1 <<endl;
        }
        else if(digit==2)
        {
            cout << (last_digit-1)*10+3<< endl;
        }
        if(digit==3)
        {
            cout << (last_digit-1)*10+6 << endl;
        }
        if(digit==4)
        {
            cout << last_digit*10 << endl;
        }

    }


    return 0;
}


/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int x;
        cin >> x;

        int digit = log10(x)+1;

        int rem = x%10;
        if(rem==1)
        {
            if(digit==1) cout << 1<<endl;
            else if(digit==2) cout << 3<<endl;
            else if(digit==3) cout << 6<<endl;
            else if(digit==4) cout << 10<<endl;
        }
        else if(rem==2)
        {
            if(digit==1) cout << 11<<endl;
            else if(digit==2) cout << 13<<endl;
            else if(digit==3) cout << 16<<endl;
            else if(digit==4) cout << 20<<endl;
        }
        if(rem==3)
        {
            if(digit==1) cout << 21<<endl;
            else if(digit==2) cout << 23<<endl;
            else if(digit==3) cout << 26<<endl;
            else if(digit==4) cout << 30<<endl;
        }
        if(rem==4)
        {
            if(digit==1) cout << 31<<endl;
            else if(digit==2) cout << 33<<endl;
            else if(digit==3) cout << 36<<endl;
            else if(digit==4) cout << 40<<endl;
        }
        if(rem==5)
        {
            if(digit==1) cout << 41<<endl;
            else if(digit==2) cout << 43<<endl;
            else if(digit==3) cout << 46<<endl;
            else if(digit==4) cout << 50<<endl;
        }
        if(rem==6)
        {
            if(digit==1) cout << 51<<endl;
            else if(digit==2) cout << 53<<endl;
            else if(digit==3) cout << 56<<endl;
            else if(digit==4) cout << 60<<endl;
        }
        if(rem==7)
        {
            if(digit==1) cout << 61<<endl;
            else if(digit==2) cout << 63<<endl;
            else if(digit==3) cout << 66<<endl;
            else if(digit==4) cout << 70<<endl;
        }
        if(rem==8)
        {
            if(digit==1) cout << 71<<endl;
            else if(digit==2) cout << 73<<endl;
            else if(digit==3) cout << 76<<endl;
            else if(digit==4) cout << 80<<endl;
        }
        if(rem==9)
        {
            if(digit==1) cout << 81<<endl;
            else if(digit==2) cout << 83<<endl;
            else if(digit==3) cout << 86<<endl;
            else if(digit==4) cout << 90<<endl;
        }
    }

    return 0;
}


 */
