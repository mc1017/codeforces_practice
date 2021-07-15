//https://codeforces.com/problemset/problem/1256/A

#include <iostream>
    

    
void solve() {
    long long a,b,n,s;
    std::cin>>a>>b>>n>>s;
    if (b>=s%n && n*a+b>=s){
        std::cout<<"Yes"<<std::endl;
    }
    else {
        std::cout<<"NO"<<std::endl;
    }
    
}


int main() {
        //write("Case #", i+1, ": ");
    int t;
    std::cin>>t;
    for(int i=0; i<t; i++){
        solve();
    }
}