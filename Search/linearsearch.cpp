#include <bits/stdc++.h>

using namespace std;	

int searchItem(int &arr[],int n ,int  k){

	for(int i=0;i<n;i++)
		if(arr[i]==k)
			return i+1;
	return -1;	
}

int main(int argc, char const *argv[])
{
	/* code */
	int T,K,N;
	cout << "Enter the number of testcases:"<< endl;
	cin>> T;
	while (T--){
	cout << "Enter the size of the array:"<< endl;
	cin>>N;
	cout << "Enter the a number to find:"<< endl;
	cin>>K;
	int A[N];
	for(int i=0;i<N;i++){
		cin>>A[i];
	}
	
		cout<<"the index is:"<< searchItem(A,N,K) <<endl;
	}



	return 0;
}