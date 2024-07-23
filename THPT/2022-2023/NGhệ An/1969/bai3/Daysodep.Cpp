#include <bits/stdc++.h>
using namespace std;
int tc(vector <int> a, int n)
{
	int s=0;
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0) s+=a[i];	
	}
	return s;
}
int tl(vector <int> a, int n)
{
	int s=0;
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]%2==1) s+=a[i];
		
	}
	return s;
}
int kt(vector <int> a, int n, int k)
{
	int i,kt1=0,kt2=0;
	int kt=0;
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0) kt1++;
		if(a[i]%2==1) kt2++;
		if(kt1>=1 and kt2>=1) {
			kt=1; break;
		}
	}
	int x=tc(a,a.size())-tl(a,a.size());
	if(kt==1 and (0<=x and x<=k)) return 1;
	else return 0;
	
}
int main(int argc, char** argv) {
	ifstream fi;
	fi.open("Daysodep.Inp");
	ofstream fo;
	fo.open("Daysodep.Oudt");
	int n,k;
	fi>>n>>k;
	int cnt=0;
	int a[n];
	int i,j;
	for(i=0;i<n;i++) fi>>a[i];
	for(i=0;i<n-1;i++)
	{
		vector <int> kq;
		for(j=i;j<n;j++)
		{
			kq.push_back(a[j]);
			if(kq.size()>=2)
			{
				if(kt(kq,kq.size(), k)==1) cnt++;
			}
		}
	}
  fo<<cnt;
}




