//function taken from geeks for geeks
#include<bits/stdc++.h>
#define fio ios::sync_with_stdio(false);cin.tie(nullptr);
#define int long long
#define mod 1000000007
using namespace std;
signed main()
{
int t ;
cin>>t;
while(t--)
{
    int arr[4] ;
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
    int a=max(arr[0],arr[1]) ;
    int b=max(arr[2],arr[3]) ;
    sort(arr,arr+4) ;
    if(arr[2]+arr[3]==a+b)
    {
        cout<<"YES\n" ;
    }
    else
        cout<<"NO\n" ;
}
return 0;
}
