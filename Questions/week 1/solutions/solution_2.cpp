#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007
bool binarySearch(ll arr[],ll el,ll m)
{
	ll l=0;
	ll h=m-1;
	bool ans=false;
	while(l<=h)
	{
	ll mid=(l+h)/2;
	if(el==arr[mid])
	{
		ans=true;
		break;
	}
	if(el>arr[mid])
	l=mid+1;
	else
	h=mid-1;
   }
return ans;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll m;
cin>>m;
ll arr[m];
for(ll i=0;i<m;i++)
{
	cin>>arr[i];
}
sort(arr,arr+m);
ll el;  //element to be searched
cin>>el;
bool ans=binarySearch(arr,el,m);
if(ans==true)
cout<<"Found"<<endl;
else
cout<<"Not Found"<<endl;
return 0;
}

