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
    int n ;
    cin>>n ;
    vector<int>arr(n) ;
    vector<int>brr ;
    vector<int>crr ;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i] ;
        if(arr[i]%2)
        {
            brr.push_back(arr[i]) ;

        }
        else
        crr.push_back(arr[i]) ;
    }
    sort(brr.begin(),brr.end()) ;
    for(int i=0;i<crr.size();i++)
    {
        arr[i]=crr[i] ;
    }
    for(int j=0;j<brr.size();j++)
    {
        arr[crr.size()+j]=brr[j] ;
    }
    int ctr=0 ;

    for(int i=0;i<n;i++)
    {

        for(int j=i+1;j<n;j++)
        {
            int k=__gcd(arr[i],2*arr[j]) ;
            if(k>1)
            {
               ctr++ ;

            }
        }
    }
    cout<<ctr<<"\n" ;
  // cout<<"u" ;

}
return 0;
}
