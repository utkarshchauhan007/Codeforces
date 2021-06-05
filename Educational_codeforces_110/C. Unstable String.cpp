//function taken from geeks for geeks
#include<bits/stdc++.h>
#define fio ios::sync_with_stdio(false);cin.tie(nullptr);
//#define int long long
#define mod 1000000007
using namespace std;
signed main()
{
int t ;
cin>>t;
while(t--)
{
    string str ;
    cin>>str ;
    int n=str.size() ;
    int temp[2]={-1,-1} ;
    int ans=0 ;
    for(int i=0;i<n;i++)
    {  if(str[i]=='0'||str[i]=='1')
        {int k=(str[i]-'0')^(i%2) ;
        temp[k]=i ;}
        int l=min(temp[0],temp[1]) ;
        ans+=i-l ;
    }
cout<<ans<<"\n" ;
}
return 0;
}
