//PGRM1 => 15 min
#include <iostream>
/*int main(){
    int r,c,i,j,max,min,e=0;
    std::cin >> r >> c;
    int a[r][c];
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            std::cin >> a[i][j];
    max = -1000;
    min = 1000;
    for(i=0;i<r;i++){
        min = a[i][0];
        for(j=0;j<c;j++)
            if(min>a[i][j]){
                min = a[i][j];
                e = j;
            }
        for(j=0;j<r;j++)
            if(max < a[j][e])
                max = a[j][e];
        if(max == min){  
            std::cout << max;
            break;
        }
    }
}*/

//PGRM2 =>
void row(int a[][13],int n,int r){
    int i=0;
    for(;i<n;i++)
        if(a[r][i]!=2)
            a[r][i]=1;
}
void coln(int a[][13],int n,int c){
    int i=0;
    for(;i<n;i++)
        if(a[i][c]!=2)
            a[i][c]=1;
}
void diag(int a[][13],int n,int r,int c){
    int i=0;
    for(;i<n;i++){
        /*if(r+i > n || c+i > n)
            break;*/
        // letting the array go out of bounds
        if(a[r+i][c+i]!=2)
            a[r+i][c+i]=1;
        if(a[r-i][c-i]!=2)
            a[r-i][c-i]=1;
    }
}


int main(){
    int n,i,j;
    std::cin >> n;
    int a[n][13];
    int q[n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            a[i][j]=0;
        q[i]=0;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i][j]==0){
                a[i][j]=2;
                row(a,n,j);
                coln(a,n,i);
                diag(a,n,i,j);
                q[i] = j+1;
            }
        }
        
        for(int e:q)
            std::cout << e << " ";
        std::cout << std::endl; 
    }
}