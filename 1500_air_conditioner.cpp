//https://codeforces.com/problemset/problem/1547/E

//unsolved

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>  
using namespace std;

#define FOR(n) for(int i = 0; i < int(n); i++)

int min(long long a, long long b){
    if (a<b){
        return a;
    }
    else{
        return b;
    }
}

void solve(){
    long long n, k,a,t,p1,p2;
    std::vector<long long> an(k),tn(k);
    std::cin>>n>>k;
    FOR(k){
        std::cin>>an[i]; 
    }
    FOR(k){
        std::cin>>tn[i];
    } 
    std::vector<long long> c(n);
    FOR(k){
        c[an[i]] = tn[i];
    }
    std::vector<long long> L(n);
    FOR(n-1){
        L[i] = min(c[i+1], c[i]);
    }
    std::vector<long long> R(n);
    for (int i=n-1; i>0; i--){
        R[i] = min(c[i-1], c[i]);
    }
    FOR(n){
        std::cout<< min(L[i],R[i])<<" ";
    }
    std::cout<<std::endl;

    
    

  

}


int main() {
        //write("Case #", i+1, ": ");
    int t;
    std::cin>>t;
    FOR(t){
        solve();
    }
}