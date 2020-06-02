#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	int a[n],b[n],c[n];
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	for(int i=0;i<n;i++)
	{
		cin >> b[i];
	}
	for(int i=0;i<n;i++)
	{
		c[i]= a[i]+b[i];
	}
	for(int i=0;i<n;i++)
	{
		cout << c[i] <<" ";
	}
	return 0;
}
// Write your code here
