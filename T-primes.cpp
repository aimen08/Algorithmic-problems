#include <iostream>
#include <string.h>

using namespace std;



int main(int argc, char const *argv[])
{
  /* code */
  int n ;
  cin>>n;
  int arr[n];
  int arr2[n];
  memset(arr2,0,sizeof(arr2));
  for (int i=0;i<n;i++){
      cin>>arr[i];
       for(int j =1;j<=arr[i];j++)
        if(arr[i]%j==0)
          arr2[i]+=1;
}

for(int i=0;i<n;i++)
  if(arr2[i]==3)
    cout<<"yes"<<endl;
  else
    cout << "no"<<endl;


  return 0;
}
