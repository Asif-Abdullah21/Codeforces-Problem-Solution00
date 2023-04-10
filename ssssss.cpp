#include<bits/stdc++.h>
#define   nl         "\n"
#define   ll         long long
#define   pii        pair<int,int>

#define   mem(a,x)   memset(a,x,sizeof(a))
#define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    FIO;
    string s;
    cin>>s;

    int h=0,e=0,l=0,o=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='h')h++;
        else if(s[i]=='e' && h !=0)e++;
        else if(s[i]=='l' && e !=0)l++;
        else if(s[i]=='l'&& l !=0)l++;
        else if(s[i]=='o' && l >=2)o++;
    }

    if(h!= 0 && e !=0 && l>=2  && o !=0) cout << "YES"<< endl;
    else cout << "NO"<< endl;

    return 0;
}
