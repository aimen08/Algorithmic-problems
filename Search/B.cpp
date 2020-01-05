
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
   int t,n,m;
   cin>>t;
   map<string, int> ml;
   map<string, int> mout;
   while(t--){
    cin>>n>>m;
    

    for(int i=0;i<n;i++){
        string s;
        int age;
        cin>>s;
        cin>>age;
        ml.insert(pair<string,int>(s,age));
    }
    for(int i=0;i<m;i++){
        string s,s1;
        cin>>s;
        if(s[0]!='*')
        cin>>s1;
        if(s[0]=='*'){
            if(!ml.empty())
            cout<< max_element(ml.begin(),ml.end(),[](const pair<string,int>& l ,const pair<string,int>& r){return l.y<r.y;})->x<<endl;
            else
                cout<<"No one!"<<endl;
        }
        else if(s[0]=='-'){
                auto it = ml.find(s1);
                mout.insert(pair<string,int>(it->x,it->y));
                ml.erase(it->x);
                if(!ml.empty()){
                cout<< max_element(ml.begin(),ml.end(),[](const pair<string,int>& l ,const pair<string,int>& r){return l.y<r.y;})->x<<endl;
                }
                else
                    cout<<"No one!"<<endl;
                
            }
        else if(s[0]=='+'){
            auto it = mout.find(s1);
            ml.insert(pair<string,int>(it->x,it->y));
            mout.erase(it->x);
            cout<< max_element(ml.begin(),ml.end(),[](const pair<string,int>& l ,const pair<string,int>& r){return l.y<r.y;})->x<<endl;
            }
        }
    if(!ml.empty())
    ml.clear();
    if(!mout.empty())
    mout.clear();
  }





    return 0;
  }



 