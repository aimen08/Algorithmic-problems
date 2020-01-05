#include <bits/stdc++.h>

using namespace std;	

 int binsearch(int arr[],int l , int r,int x){
 	if(r>=l){
 		int mid = l+(r-l)/2;
 		
 		if(arr[mid]==x){
 			return mid;
 		}
 		if(arr[mid]<x){
 			return binsearch(arr,mid+1,r,x);
 		}
 		if(arr[mid]>x){
 			return binsearch(arr,l,mid-1,x);
 		}
 	}
 	return -1;
 }


int main(int argc, char const *argv[])
{
	/* code */
	
	int arr[]={11,22,33,44,55,66,77};
	int n = sizeof(arr)/sizeof(arr[0]);
	int l=0;
	int index = binsearch(arr,l,n-1,44);
	cout<<index<<endl;

	return 0;
}