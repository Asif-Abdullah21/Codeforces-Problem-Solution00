#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define sz(v) v.size()
#define mem(a, x) memset(a, x, sizeof(a))
#define fio                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
using namespace std;
int main()
{
    fio;
    string s;
    cin >> s;

    int n = s.size();

    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[i + 1])
        {
            for (int j = i; s[j] !='\0'; j++)
            {
                s[j] = s[j + 2]; // 2 ta ghor skip krse kintu
            }

            i = i - 2; // 1 to abr i++ hoye bere jabe tai 2 minus krlam
            if (i < 0) i = -1; // i abr shurute antesi
            n = s.size();
        }
    }

    if (s.size() == 0)
        cout << "Empty String\n";
    else
        cout << s << endl;

    return 0;
}