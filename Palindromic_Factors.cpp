#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int oneDigit(int num)
{
    return (num >= 0 && num < 10);
}

bool isPalUtil(int num, int *dupNum)
{
    if (oneDigit(num))
        return (num == (*dupNum) % 10);
    if (!isPalUtil(num / 10, dupNum))
        return false;
    *dupNum /= 10;
    return (num % 10 == (*dupNum) % 10);
}
int isPal(int num)
{
    if (num < 0)
        num = -num;
    int *dupNum = new int(num);
    return isPalUtil(num, dupNum);
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cout << "Case #" << i + 1 << ": ";
        ll a;
        cin >> a;
        int cnt = 1;
        if (a == 1)
        {
            cout << cnt << endl;
        }
        else
        {
            if (isPal(a))
            {
                cnt++;
            }
            for (int i = 2; i <= sqrt(a); i++)
            {
                if (a % i == 0)
                {
                    int z = a / i;
                    if(z==i && isPal(z) && isPal(i)){
                        cnt++;
                    }else{
                        if(isPal(i)){
                            cnt++;
                        }
                        if(isPal(z)){
                            cnt++;
                        }
                    }
                }
            }
            cout << cnt << endl;
        }
    }
    return 0;
}