#include <iostream>
    

    
void solve() {
    int n,k,e,pri,days=0,j=0;
    std::cin>>n>>k>>e;
    k=k+e;
    
    std::cin>>pri;
  
    while(j<n){
        days++;
        if (k>=pri){
            k=k-pri;
            j++;
            if (j!=n){
                std::cin>>pri;
            }   
        }
        k=k+e;
            
    }
    std::cout<<days<<std::endl;  
}


int main() {
        //write("Case #", i+1, ": ");
    solve();
    
}
