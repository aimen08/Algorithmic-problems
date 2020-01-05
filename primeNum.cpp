#include <iostream>
#include <cmath>


using namespace std;
  
  bool isprime (int n){

    if(n<=1)
      return false;
    if(n==2)
      return true;
  
      for(int i =2;i<sqrt(n);i++)
        if(n%i==0)return false;

      
      return true;
    }
int main(int argc, char* argv[])

{
  
cout << "enter number:" <<endl;
int number;
cin>>number;
  if(isprime(number)){
    cout<< "yes it is prime number"<< endl;
  }else{
    cout<< "no try again"<<endl;
  }

    return 0;
  }