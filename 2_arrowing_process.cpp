#include <iostream>

int main(){
    int n, m, num=0;
    char arrow;
    std::cin>>n>>m;
    char grid[n][m];
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            std::cin>>grid[i][j];
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if ((grid[i][j]=='>') && (grid[i][j+1]=='<')){
                grid[i][j]='<';
                grid[i][j+1]='>';
                num++;
                
            }
            if (j!=0){
                if ((grid[i][j]=='<') && (grid[i][j-1]=='>')){
                grid[i][j]='>';
                grid[i][j-1]='<';
                num++;
                j=j-2;
                }
            }

            
            
            if ((grid[i][j]=='v') && (grid[i+1][j]=='^')){
                grid[i][j]='^';
                grid[i+1][j]='v';
                num++;
                
            }
            if(i!=0){
                if ((grid[i][j]=='^') && (grid[i-1][j]=='v')){
                    grid[i][j]='v';
                    grid[i-1][j]='^';
                    num++;
                    i=i-2;
                    
                }
            }
            
        }
    }
    std::cout<<num<<std::endl;
}