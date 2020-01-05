#include <iostream>
//#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int main()
{
  int n;
  int amount =0;
  cout<<"enter number to check how many prime numbere bfr it"<< endl;
  cin>>n;
  bool g [n+1];
  memset(g,false,sizeof(g));
  int pfactor[n+1];
  memset(pfactor,0,sizeof(pfactor));
  
  for(int i =2;i<=n;i++){
    if(!g[i])
    for(int j=i+i;j<=n;j+=i){
       g[j]=1;
       pfactor[j]+=1;
    }
    if(pfactor[i]==2){
      amount+=1;
    }
}
    cout<< amount << endl;  

  
  return 0;
}
