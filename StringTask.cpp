
#include <iostream>

//#include <ctype.h>

using namespace std;



int main(int argc, char const *argv[])
{
 // /* code */

    string s;
    string snv;
    string swp;

    int offset =0;
    cin>>s;
    
    for(int i =0;i<s.length();i++){
      if(s[i]!='A' && s[i]!='a' && s[i]!='o' && s[i]!='O' && s[i]!='Y' && s[i]!='y'
       && s[i]!='E' && s[i]!='e' && s[i]!='u' && s[i]!='U' && s[i]!='i' && s[i]!='I'){
            snv+=s[i];  
          
       }
}
    for(int i=0;i<snv.length();i++)
      swp=swp+'.'+snv[i];
      
    for(int i=0;i<swp.length();i++)
      swp[i]=tolower(swp[i]);
     
    cout << swp <<endl;
}