#include <iostream>

//PGRM 1
/*int main(){
    int s1,s2,i,j,p=1;
    std::cin >> s1;
    std::cin >> s2;
    int k[s2],n[s1];
    for(i=0;i<s1;i++)
        std::cin>>n[i];
    for(i=0;i<s2;i++)
        std::cin>>k[i];
    
    for(i=0;i<(s1-s2+1);i++){
        p=0;
        for(j=0;j<s2;j++)
            p+= k[j] * n[i+j];
        std::cout << p << " ";
    }
}*/

//PGRM2
/*int main(){
    int n,i,a=0,b=0;
    bool striker = true; // true = a , false = b
    std::cin >> n;
    int run[n];
    for(i=0;i<n;i++)
        std::cin >> run[i];
    for(i=0;i<n;i++){
        if((run[i]%2)==1 && striker){a+=run[i];striker=false;}
        else if((run[i]%2)==1 && !striker){b+=run[i];striker=true;}
        else if((run[i]%2)==0 && striker)a+=run[i];
        else if((run[i]%2)==0 && !striker)b+=run[i];
        else ;
        if((i%6)==5 && striker) striker=false;
        else if((i%6)==5 && !striker) striker= true;
        else;
    }
    std::cout << a << " " << b <<(striker ? " A" : " B");
}*/

//PGRM3
int main(){
    int n,i,j,c0=0,c1=0,count=0,start=0,sub;
    std::cin >> n;
    int arr[n];
    for(i=0;i<n;i++)
        std::cin >> arr[i];
    for(i=2;i<=n;i+=2){
        sub=n-i+1;
        start=0;
        while(sub>0){
            for(j=start;j<start+i;j++)
                if(arr[j]==0)c0++;
                else c1++;
            sub--;
            start++;
            if(c0==c1)count++;
            c0=0;c1=0;
        }
    }
    std::cout << count;
}

