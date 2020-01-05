
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
#define loop(f,n)       for(int i=f;i<n;i++)
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
    


const int N =100005;
//int arr[N];

int main()
{
    //#ifndef ONLINE_JUDGE
        
        //freopen("testres.out","w",stdout);
    //#endif
	//ios_base::sync_with_stdio(0);
    //cin.tie(0);
    //cout.tie(0);
        /* code */
    freopen("test.in","r",stdin); 

    int t,n;
    cin>>t;
    while(t--){
        set<int> ss;
        cin>>n;
        int arr[n];
        int tem;
        //cin>>tem;
        int g=tem;
        // loop(0,floor(log10(g))){
        //     arr[n-i-1]=tem%10;
        //     tem=tem/10;
        // }
        loop(0,n)
            cin>>arr[i];
        int i,j,best=0;
        for(int f=0;f<n;f++){
            int sum=0;
        for(i=f,j=n-1;i<j;){
            if(ss.find(arr[i])!=ss.end()){
                i++;
                break;
            }
            else if(arr[i]==arr[j]){
                
                sum= sum+arr[i];
                ss.insert(arr[i]);
                i++;
                j--;
            }
            else{
                j--;
            }
            
            
        }
        best=max(best,sum);
            }

            cout<<best<<endl;
        }
    
    

    return 0;
  }



 