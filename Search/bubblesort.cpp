
#include <bits/stdc++.h>

using namespace std;

void swap(int *x,int *y){

  int temp = *x;
  *x=*y;
  *y=temp;
}

int main()
{
 // /* code */
int f[]={11,13,9,3,2,99};
int n=sizeof(f)/sizeof(f[0]);
for(int i=0;i<n-1;i++){
  for(int j=0;j<n-i-1;j++)
    if(f[j]>f[j+1]){
      swap(&f[j],&f[j+1]);
    }
}
for(int i=0;i<n;i++){
  cout<<f[i]<<endl;
}
}
