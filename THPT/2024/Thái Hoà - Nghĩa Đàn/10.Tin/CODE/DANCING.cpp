#include <bits/stdc++.h>
using namespace std;
int dboy[100001], amboy[100001], dgirl[100001], amgirl[100001];
int n, idboy, iamboy, idgirl, iamgirl;
int tknp1(int d, int c, int x)
{
    int mid, result = -1;
    while (d<=c)
    {
        mid = (d + c)/2;
        if (amgirl[mid] > x)
        {
            result = mid;
            c = mid - 1;
        }
        else d = mid + 1;
    }
    return result;
}
int tknp2(int d, int c, int x)
{
    int mid, result = -1;
    while (d<=c)
    {
        mid = (d + c)/2;
        if (dgirl[mid] < x)
        {
            result = mid;
            d = mid + 1;
        }
        else c = mid - 1;
    }
    return result;
}

int main()
{
    
    freopen("DANCING.INP", "r", stdin);
    freopen("DANCING.OUT", "w", stdout);
    int k;
    cin >> n;
    for (int i = 1; i<=n; i++)
    {
        cin >> k;
        if (k > 0)
        {
            idboy++;
            dboy[idboy] = k;
        }
        else
        {
            iamboy++;
            amboy[iamboy] = -k;
        }
    }
    for (int i = 1; i<=n; i++)
    {
        cin >> k;
        if (k > 0)
        {
            idgirl++;
            dgirl[idgirl] = k;
        }
        else
        {
            iamgirl++;
            amgirl[iamgirl] = -k;
        }
    }
    sort(dgirl + 1, dgirl + idgirl + 1);
    sort(amgirl + 1, amgirl + iamgirl + 1);
    sort(dboy + 1, dboy + idboy + 1);
    sort(amboy + 1, amboy + iamboy + 1);
    int first = 1, last = idgirl, r = 0, z;
    for (int i = 1; i<= idboy; i++)
    {
        z = tknp1(first, iamgirl, dboy[i]);
        if (z != -1)
        {
            r++;
            first = z + 1;
        }
        else break;
    }
    for (int i = iamboy; i>= 1; i--)
    {
        z = tknp2(1, last, amboy[i]);
        if (z != -1)
        {
            r++;
            last = z-1;
        }
        else break;
    }
    cout << r;
    return 0;
}
