#include <bits/stdc++.h>
using namespace std;
const int MAX = 10000;

int prefix[MAX + 1];
class Solution
{
public:
    void buildPrefix()
    {
        bool prime[MAX + 1];
        memset(prime, true, sizeof(prime));

        for (int p = 2; p * p <= MAX; p++)
        {

            if (prime[p] == true)
            {

                for (int i = p * 2; i <= MAX; i += p)
                    prime[i] = false;
            }
        }
        prefix[0] = prefix[1] = 0;
        for (int p = 2; p <= MAX; p++)
        {
            prefix[p] = prefix[p - 1];
            if (prime[p])
                prefix[p]++;
        }
    }

    int query(int L, int R)
    {
        return prefix[R] - prefix[L - 1];
    }
    int Count(int L, int R)
    {
        int pr=query(L,R);
        int c=L-R+1;
        c=c-pr;
        return abs(pr-c);
    }
};
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int L, R;
        cin >> L >> R;
        Solution obj;
        int ans = obj.Count(L, R);
        cout << ans << endl;
    }
}