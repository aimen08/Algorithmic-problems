
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define x               first 
#define y               second 
#define pb              push_back
#define mp              make_pair
#define all(v)          ((v).begin(),(v).end())
#define mem(o,v)        memset(o,v,sizeof(o))
#define sn(n)           scanf("%d",&n)
#define loop(i,n)       for(int i=0;i<n;i++)
//memset(memo,-1,sizeof(memo))
//memset(arr,0,sizeof(arr))
#define INF 1000000000
#define endl "\n"
#define endll endl
#define CHARS 256

        /* Functions */
   
    //fibonacci Numeber
ll fab(ll f[],int n){
    if(n==0 || n==1)
        f[n]=1;
    
        if(f[n]==-1)
         f[n]=fab(f,n-1)+fab(f,n-2);
    
    return f[n];}

        //check if letter is vowel
   bool isvow(char c){
        if(c=='a' || c=='e' || c=='o' || c=='y' || c=='u' || c=='i' )
            return true;
        return false;
    }
    //bigIntDIV
    string bigIntDIV(string const& number,int div){

        string ans;
        int dx=0;
        
        //char to int use -'0'
        int temp=number[dx]-'0';
        while(temp<div)
            temp=temp*10+(number[++dx]-'0');
        while(number.size()>dx){
            //int to char use + '0' 
            ans+=(temp/div)+'0';
        
            temp=(temp%div)*10+(number[++dx]-'0');

        }
        if(ans.length()==0)
            return "0";
        
        return ans;
    }
    //Sliding window
    int findMinlenght(string const& s1,string const& s2)
    {
        int strLen=s1.length();
        int patLen=s2.length();
        if(strLen<patLen)
            return -1;
        int hash_str[CHARS]={0};
        int hash_ptr[CHARS]={0};
        for(int i=0;i<patLen;i++)
            hash_ptr[s2[i]]++;
        int count =0;
        int start=0,start_index=-1,min_len=INT_MAX;
        for(int j=0;j<strLen;j++){
            hash_str[s1[j]]++;

            if(hash_str[s1[j]]<=hash_ptr[s1[j]] && hash_ptr[s1[j]]!=0)
                count++;

            if(count==patLen){
                while(hash_str[s1[start]]>hash_ptr[s1[start]] || hash_ptr[s1[start]]==0)
                {
                    if(hash_str[s1[start]]>hash_ptr[s1[start]])
                        hash_str[s1[start]]--;
                    start++;
                }
                int len_window =j-start+1;
                if(min_len>len_window){
                    min_len=len_window;
                    start_index=start;
                }

            }
        }

        if(start_index==-1)
            return -1;

        return min_len;
    }




const int N =100005;
//int arr[N];

int main()
{
    #ifndef ONLINE_JUDGE
        //freopen("test.txt","r",stdin); 
    #endif
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
        /* code */
 
    string s1;
    string s2;
    cin>>s1>>s2;
     
     cout<<findMinlenght(s1,s2)<<endl;
   
    
}



 