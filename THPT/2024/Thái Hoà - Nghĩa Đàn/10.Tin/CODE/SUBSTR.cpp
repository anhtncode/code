#include <bits/stdc++.h>

using namespace std;
string s;
int c[26];
int n, k;
int lmax, pos;
int getmax()
{
    int res = c[0];
    for (int i=1; i<26; i++)
        res = max(res,c[i]);
    return res;
}


int main()
{
    freopen("SUBSTR.INP","r",stdin);
    freopen("SUBSTR.OUT","w",stdout);
    cin >> n >> k;
    cin >> s;
    int i = 0, j = 0;
    c[s[0]-97] = 1;
    while (1)
    {
        if (getmax() <= k)
        {
            if (lmax < j - i + 1)
            {
                lmax = j-i+1;
                pos = i;
            }
            j++;
            if (j == n) break;
            c[s[j]-97]++;
        }
        else    c[s[i++]-97]--;
    }
    cout << lmax << " " <<pos+1;
    return 0;
}
