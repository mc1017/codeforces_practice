//https://codeforces.com/problemset/problem/1547/C

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>  
#include <bits/stdc++.h>
using namespace std;


#define FOR(n) for (int i = 0; i < int(n); i++)


void solve(){
    int k=0,n=0,m=0,A=0,B=0;
    std::cin>>k>>n>>m;
    std::vector<int> an(n);
    std::vector<int> bn(m);
    std::vector<int> cn;
    FOR(n){
        std::cin>>an[i];
    }
    FOR(m){
        std::cin>>bn[i];
    }  
    int o=1;
    while (A<n || B<m){
        while (an[A]<=k && A<n){
            if (an[A]==0){
                k++;
            }
            cn.push_back(an[A]);
            
            A++;
            o=0;
        }
        while (bn[B]<=k && B<m){
            if (bn[B]==0){
                k++;
            }
            cn.push_back(bn[B]);
            B++;
            o=0;
        }
        if(o==1){
            std::cout<<"-1";
            break;
        }
    }
    if (o==0){
        FOR(cn.size()){
            std::cout<<cn[i]<<" ";
        }
    }
    std::cout<<"\n";
      
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    std::cin>>t;
    FOR(t){
        solve();
    }
}