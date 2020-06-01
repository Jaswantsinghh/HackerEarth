

#include <iostream>

using namespace std;

int main() {


	long long n,q;
	cin >> n;
	cin >> q;
	long long arr[n];
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	for(int j=0;j<q;j++)
	{
		int query,left,right,flip;
		cin >> query;
		if(query==1)
		{
			cin >> flip;
			if(arr[flip-1]==0)
			{
				arr[flip-1]=1;
			}
			else if(arr[flip-1]==1)
			{
				arr[flip-1]=0;
			}
		}
		else if(query==0)
		{
			cin >> left;
			cin >> right;
			if(arr[right-1]==0)
			{
				cout << "EVEN";
			}
			else if(arr[right-1]==1)
			{
				cout << "ODD";
			}
			cout << "\n";
		}
	}
	return 0;
}


// Write your code here
