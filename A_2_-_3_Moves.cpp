#include <iostream>
#include<algorithm>
#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define nl cout<<endl;
using namespace std;

int main()
{
    ll t=1; ;
      cin >> t;
    while (t--)
    {
       ll x,c,m=0,k=0;
       cin>>x;
       ll ciunt=0;
       
       if(x%3==0)
       cout<<x/3<<endl;
       else if(x%3==1){
       if(x/3==0)
        cout<<2<<endl;
        else 
        cout<<(x/3)+1<<endl;
       }
else
       
        
       cout<<(x/3)+1<<endl;

       }
    
    return 0;
    }