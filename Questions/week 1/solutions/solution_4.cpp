#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007
void reverse(ll arr[],ll n)
{
	ll l=0,h=n-1;
	while(l<h)
	{
		swap(arr[l],arr[h]);
		l++;
		h--;
	}
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
cin>>n;
ll arr[n];
for(ll i=0;i<n;i++)
{
	cin>>arr[i];
}
reverse(arr,n);
for(ll i=0;i<n;i++)
{
	cout<<arr[i]<<" ";  // reverse array
}
cout<<endl;
return 0;
}

