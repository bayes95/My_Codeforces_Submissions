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
ll x,y,z,var,temp,res,an=1,g=0,h=0,bl;
void func(){
    if(y>x) {
        z=x;
        x=y;
        y=z;
    }
    bl=0;
    if(x%y!=0)  {debug(-1);bl=1;}
    else    if(x==y)    {debug(0); bl=1;  }
    else{
        g-=1;
        temp=x/y;
        h+=1;
        var=0;
        
        
        
        if((temp!=0) and (x%y==0) and ((temp&(temp-1))== 0)){
            h=(h*4);
            while(temp%8==0){temp/=8;g-=1;var+=1;}
            an+=(an*1);
            while(temp%4==0){temp/=4;h+=1;var+=1;}
            an+=(an*1);
            while(temp%2==0){temp/=2;an+=(an*1);var+=1;}
            g+=1;
            debug(var)
            bl=1;     
            h-=1;
                    
            
    }       
        
}
    if  (bl==0) debug(-1)
   
}
int main()
{
    vfast
    ll t;
    cin>>t;
    while(t--){
        cin>>x>>y;        
        func();
    }    
    return 0;
}
