#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;



bool findifprime(unsigned int n){


  if(n<=1)
    return false;
  if(n==2)
    return true;
  for(int i =2;i<=sqrt(n);i++)
      if(n%i==0)
        return false;
    
  return true;    
  
  





}




int main(int argc, char const *argv[])
{
  /* code */
  unsigned int sum=0;
  string alphabet = "0abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
  
  string name;
  cin>>name;
  for(int i=0;i<alphabet.length();i++){
      for(int j=0;j<name.length();j++)
        if(name[j]==alphabet[i])
          sum+=i;

      }
  cout<<sum<<endl;
  if(findifprime(sum))
    cout<< "the sum is prime number"<<endl;
  else{
    cout<<"not prime number"<<endl;
  }

  return 0;
}