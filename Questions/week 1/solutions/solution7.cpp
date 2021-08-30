#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n,k;  // k is the element to be searched
cin>>n>>k;
unordered_map<ll,ll>m;
for(ll i=0;i<n;i++)
{
	ll a;
	cin>>a;
	m[a]++;
}
cout<<m[k]<<endl;
return 0;
}

