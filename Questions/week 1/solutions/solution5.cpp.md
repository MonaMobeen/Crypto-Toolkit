#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007
void selectionSort(ll arr[],ll n)  // selection sort
{
for(ll i=0;i<n-1;i++)
{
	ll min=arr[i];
	ll pos=i;
	for(ll j=i+1;j<n;j++)
	{
		if(arr[j]<min)
		{
			min=arr[j];
			pos=j;
		}
	}
	swap(arr[i],arr[pos]);
}
}



void bubbleSort(ll arr[],ll n)   // bubble sort
{
	for(ll i=0;i<n-1;i++)
	{
		bool flag=true;
		for(ll j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{	
			swap(arr[j],arr[j+1]);
			flag=false;
			}
		}
		if(flag)
		break;
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
//selectionSort(arr,n);
bubbleSort(arr,n);
for(ll i=0;i<n;i++)
{
	cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}

