#include <bits/stdc++.h>
using namespace std;

void merge(int *a, int si, int ei){
	int mid = (si+ei)/2;
	int ans[ei-si+1];
	int i =si;
	int j =mid+1;
	int k = 0;
	
	 while(i<=mid && j<=ei){
   
        if(a[i]<=a[j]){
            ans[k]=a[i];
            i++;
        }
        else{
            ans[k]=a[j];
            j++;
        }
        k++;

    }
    if(i<=mid){
        for(;i<=mid;i++){
            ans[k]=a[i];
            k++;
        }
    }
        
    if(j<=ei){
           for(;j<=ei;j++){
            ans[k]=a[j];
            k++;
        } 
    }
  
    for(k=0, i=si; i<=ei; i++, k++) {
        a[i] = ans[k];
    }
}


void mergeSort(int * a, int si, int ei){
     if(si>=ei){
     	return;
	 }
	 int mid = (si+ei)/2;
	 mergeSort(a,si,mid);
	 mergeSort(a,mid+1,ei);
	 merge(a,si,ei);
}



int main(){
int n;
cin>>n;

int * arr = new int[n];
for(int i=0;i<n;i++){
	cin>>arr[i];
}
int start = 0;
int end = n-1;
mergeSort(arr,start,end);

for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
}

return 0;
}

