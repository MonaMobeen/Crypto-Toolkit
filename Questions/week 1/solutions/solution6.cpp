#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n,k;
cin>>n>>k;
ll arr[n];
for(ll i=0;i<n;i++)
{
cin>>arr[i];
}
sort(arr,arr+n,greater<int>());
//cout<<arr[0]<<endl;
cout<<"Kth largest = "<<arr[k-1]<<" Kth smallest = "<<arr[n-k]<<endl;
return 0;
}

