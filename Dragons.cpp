#include <iostream>
#include <string.h>

using namespace std;

//http://codeforces.com/problemset/problem/230/A

int main(int argc, char const *argv[])
{
  /* code */
   int s , n;
   bool pass = true;
   cin>>s>>n;
   for(int i=1;i<=n;i++){
    int x,y;
    cin>>x>>y;
    if(s>=x)
      s+=y;
    else{
      pass = false;
      break;
    }
   }
   pass ? cout<<"YES"<<endl : cout<<"No"<<endl;
  return 0;
}
