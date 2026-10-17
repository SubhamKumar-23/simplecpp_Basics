#include <iostream>
int main(){
    int x,o,n,m,c,i;
    std::cin >> n;
    for(i=n,m=n,x=n-1,c=1 ; i>=1 ;i--,m--,c++, x= i-1){
        o=1;
        for(int j=1 ;j < m*(m+1)/2 ;j ++) std::cout << " ";
        for(int k=1; k<=c ; k++){
            for(int a=x ; a>=1 ; a--)std::cout << "x";
            for(int b=o; b>=1; b--)std::cout <<"o";
            o++;
            std::cout << " ";
        }
        std::cout<<"\n";
    }
}