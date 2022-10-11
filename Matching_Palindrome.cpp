#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

string solve(string s, int n)
{
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        ans += s[i];
        if (n % (i + 1) == 0)
        {
            bool aj = true;
            ll ind = i + 1;
            for (int k = 0; k < ind; k++)
            {
                for (int l = k; l < n; l++)
                {
                    if (s[l] != ans[k])
                    {
                        ans = false;
                        break;
                    }
                }
                if (!aj)
                {
                    break;
                }
            }
            if (aj)
            {
                return ans;
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        cout << "Case #" << i << ": ";
        string ans = solve(s, n);
        cout << ans << endl;
    }
}