// CPP program to find number of pairs  and minimal
// possible value

#include <bits/stdc++.h>
#define nmax 500000
using namespace std;
int k1 ;
    int n1,m;
    int a[nmax + 5]={} ;

// function for finding pairs and min value
void pairs(int arr[], int n, int k)
{
    // initialize smallest and count
    int smallest = INT_MAX;
    int Count = 0;

    // iterate over all pairs
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++) {
            // is abs value is smaller than smallest
            // update smallest and reset count to 1
            if (abs(arr[i] + arr[j] - k) < smallest) {
                smallest = abs(arr[i] + arr[j] - k);
                Count = 1;
            }

            // if abs value is equal to smallest
            // increment count value
            else if (abs(arr[i] + arr[j] - k) == smallest)
                Count++;
        }

   if (smallest != 0) cout <<  -1<<" "<<smallest << "\n";
    else cout << 0<<" "<< Count <<  "\n";
}

// driver program
int main()
{
     ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    freopen("PITAGO.INP","r",stdin);
    freopen("PITAGO.OUT","w",stdout);
     cin>>n1;
     cin>>k1;
        k1=k1*k1;

    for (int i=1; i<=n1; i++)
        {
            cin>>m;
            a[i]=m*m;
        }
    pairs(a, n1, k1);
    return 0;
}
