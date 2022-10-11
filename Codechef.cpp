#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;

int main()
{
      int t;
      cin >> t;
      while (t--)
      {
            int n;
            cin >> n;
            int A[n];
            stack<int> s;
            vector<int> v;
            for (int i = 0; i < n; i++)
            {
                  cin >> A[i];
            }
            int z = -1;
            for (int i = 0; i < n; i++)
            {
                  if (s.empty())
                  {
                        s.push(A[i]);
                        //cout<<"AAA1"<<endl;
                  }
                  else
                  {
                        if (A[i] < s.top())
                        {
                              s.push(A[i]);
                              //cout<<"AAA2"<<endl;
                        }
                        else
                        {
                              //cout<<"AAA3"<<endl;
                              while (A[i] > s.top())
                              {
                                    v.push_back(A[i]);
                                    s.pop();
                              }
                              s.push(A[i]);
                        }
                  }
            }
            cout<<"Size - "<<v.size();
            for (int i = 0; i < v.size(); i++)
            {
                  cout << v[i] << " ";
            }
      }
      return 0;
}