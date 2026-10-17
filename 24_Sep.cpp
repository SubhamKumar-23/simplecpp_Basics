#include <iostream>
//PGRM1
/*int main(){
    //int* arr = NULL;
    int size,i,j,count=0,c;
    std::cin >> size;
    //arr = new int(size);
    int arr[size];
    for(i=0;i<size;i++)
        std::cin>>arr[i];
    c = size; 
    for(i=0;i<size;i++){
        count = 0;
        for(j=i+1;j<size;j++)
            if(arr[i]==arr[j]){
                count++;
                break;
            }
        c = c - count; 
    }
    std::cout << c;
}*/

/*int main(){
    int i,j,size,s=0,count=0,min_count,mi=0,sum;
    std::cin >> size;
    std::cin >> sum;
    int a[size];
    for(i=0;i<size;i++)
        std::cin>>a[i];
    min_count=size;
    for(i=0;i<size;i++){
        s=0;
        count=0;
        s+=a[i];
        for(j=i+1;;j++){
            if(s>=sum)
                break;
            s+=a[j];
            count++;
        }
        if(min_count>count){
            min_count = count;
            mi = i;
        }
    }
    for(i=mi;i<=(mi+min_count);i++)
        std::cout << a[i] << " ";
    std::cout << std::endl << (min_count+1);
}*/

int main(){
    int size,i,j,sum1=0,sum2=0;
    bool result=0;
    std::cin >> size;
    int arr[size];
    for(i=0;i<size;i++)
        std::cin>>arr[i];
    for(i=0;i<size;i++){
        sum1=0;sum2=0;
        for(j=0;j<i;j++)
            sum1+=arr[j];
        for(j=(i+1);j<size;j++)
            sum2+=arr[j];
        if(sum1==sum2){
            std::cout << i ;
            result = 1;
            break;
        }
    }
    if(!result)std::cout << -1;
}