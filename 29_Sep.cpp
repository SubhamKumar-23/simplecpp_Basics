#include <iostream>
//PGRM 1
/*int main(){
    int i,size,process,max=0;
    std::cin >> size;
    int arr[size];
    for(i=0;i<size;i++)
        std::cin>>arr[i];
    std::cin >> process;
    for(i=0;i<size;i++)
        if(arr[i]> arr[max])
            max = i;
    for(i=0;i<size;i++)
        if(arr[i] < arr[max] && arr[i] >= process)
            max = i;
    (arr[max] >= process)? (std::cout << max) : (std::cout << "-1");
}*/

//PGRM 2
/*int main(){
    int i,j,k,water=0,size;
    std::cin >> size;
    int arr[size];
    for(i=0;i<size;i++)
        std::cin >> arr[i];
    for(i=1;i<size-1;i++){
        water+= std::max(0,(std::min(arr[i-1],arr[i+1])-arr[i]));
        if(arr[i] >= arr[i+1] && arr[i-1]>arr[i]){
            for(j=i+1;j<size;j++)
                if(arr[j]>=arr[i-1])
                    break;
            for(k=i;k<j;k++){
                water+= std::max(0,(std::min(arr[i-1],arr[j])-arr[k]));
                if(k==(j-1)) i=k;
            }
        }
    }
    std::cout << water ;
}*/

//PGRM 3
int main(){
    int n,i,p=-1,q;
    bool state = false;
    std::cin >> n;
    int a[n];
    for(i=0;i<n;i++)
        std::cin >> a[i];
    for(i=0;i<n;i++)
        if(a[i]>a[i+1])
            state=true;

    if(!state){
        for(i=n-2;i>=0;i--)
            if(a[i]<a[i+1]){
                p=i;
                break;
            }
        q=i+1;
        for(i=q;i<n;i++)
            if(a[i] < a[q] && a[p] < a[i])
                q=i;
        a[p] = a[q] + a[p];
        a[q] = a[p] - a[q];
        a[p] = a[p] - a[q];
        for(i=0;i<n;i++)
            if(i>p)
                break;
            else 
                std::cout << a[i] <<" ";
        for(i=n-1;i>=(p+1);i--)
            std::cout << a[i] << " ";
    }else
        for(i=n-1;i>=0;i--)
            std::cout << a[i];
}