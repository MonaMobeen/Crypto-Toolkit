/* the idea is to have three pointers low,mid and high with values 0, 0 and n-1 respectively

  WHILE(MID<=HIGH)
   when arr[mid]==0
   do : swap(arr[low],arr[mid])
        mid++,low++

	when arr[mid]==1
	do : mid++;

  when arr[mid]==2
  do : swap(arr[high],arr[mid])
       high--


*/


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007
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
ll l=0,m=0,h=n-1;
while(m<=h)
{
	if(arr[m]==1)
	m++;
	else if(arr[m]==0)
	{
		swap(arr[l],arr[m]);
		l++;
		m++;
	}
	else
	{
		swap(arr[h],arr[m]);
		h--;
	}
}
for(ll i=0;i<n;i++)
{
	cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}



