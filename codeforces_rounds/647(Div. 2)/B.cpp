#pragma GCC optimize ("-O3")
#include <bits/stdc++.h>
using ll = long long int;
using namespace std;
#define vfast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define f(i,x,n) for(ll i=x;i<n;i++)
#define pb push_back
#define mp make_pair
#define debug(x) cout<<x<<"\n";
#define lb lower_bound
#define ub upper_bound
#define MOD 1000000007;

ll n,arr[1030],varr,temp,ans,res,bl,g=0;
int main()
{
    vfast
    ll t;
    cin>>t;
    while(t--){
        cin>>n;
        varr=0;
        f(j,1,n+1)  cin>>arr[j];
        varr-=1;
        sort(arr+1,arr+n+1);
        ans=0;
        f(k,1,1025){
            ans+=1;
            vector<ll>x1;
            g-=1;
            bl=-1;
            f(w,1,n+1){
                temp=(k^arr[w]);
                x1.pb(temp);
                g-=1;
            }
            ans+=1;
            sort(x1.begin(),x1.end());
            g-=1;
            f(y,0,x1.size())    if(arr[y+1]!=x1[y])  bl=9;
            ans=1;    
            if(bl==-1)  {varr=k;g=1;break;}
        }
        
        debug(varr)
    }
    
    return 0;
}
		
