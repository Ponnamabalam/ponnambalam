#include<bits/stdc++.h>
using namespace std;
string comPref(string arr[], int n)
{
	int index = findMinLen(arr, n);
	string pref; 
	int low = 0, high = index;
	while (low <= high)
	{
		int mid = low + (high - low) / 2;
		if (allContPref (arr, n, arr[0], low, mid))
		{
			pref = pref + arr[0].substr(low, mid-low+1);
			low = mid + 1;
		}
		else 
			high = mid - 1;
	}

	return (pref);
}
bool allContPref(string arr[], int n, string str,int start, int end)
{
	for (int i=0; i<=n-1; i++)
		for (int j=start; j<=end; j++)
			if (arr[i][j] != str[j])
				return (false);
	return (true);
}
int findMinLen(string arr[], int n)
{
	int min = INT_MAX;
	for (int i=0; i<=n-1; i++)
		if (arr[i].length() < min)
			min = arr[i].length();
	return(min);
}
int main()
{
	string arr[10] ;
	int t=0;
	cin>>t;
	for(int i=0;i<t;i++)
	cin>>arr[i];

	string res = comPref(arr, t);

	if (res.length())
		cout << res;
	return (0);
}
