#include <iostream>

int main(){
    int t;
    std::cin>>t;
    for (int count =0; count<t;count++){
        
        int n,k,sum=0, min, max,diff;
        std::cin>>n>>k;
        int array[n];
        for (int i=0; i<n;i++){
            std::cin>>array[i];   
            
        }
        min= array[0];
        max= array [0];
        
        for (int i=0; i<n; i++){
            if (array[i]<min){
                min = array[i];
            }
            else if (array[i]>max){
                max = array [i];
            }
            

        }
        std::cout<<max-min<<std::endl;
    }
}