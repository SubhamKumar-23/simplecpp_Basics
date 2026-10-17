#include <iostream>
/*int main(){
    char buffer[80];
    std::cin.getline(buffer,80);
    std::cout << buffer;
}*/
void bubble_sort(char arr[] , int size){
    int i,j,temp;
    for(i=0;i<size;i++)
        for(j=0;j<size-i-1;j++){
            if(arr[j] < arr[j+1]){
                temp = arr[j];
                arr [j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
}
int main(){
    char s1[100];
    char s0[100];
    int i;
    bool gs=0;
    for(i=0;i<100;i++){
        s1[i]='\0';
        s0[i]='\0';
    }
    std::cin.getline(s1,100);
    std::cin.getline(s0,100);
    for(i=0;i<100;i++){
        if(s1[i] == '\0' ||s0[i]=='\0')
            break;
        if(s1[i]>s0[i]){
            gs=1;
            break;
        }
    }
    gs?std::cout << s1 : std::cout <<s0;
}