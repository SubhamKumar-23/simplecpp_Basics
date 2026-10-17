#include <iostream>
//PGRM 1
/*void bubbleSort(char c[],int n){
    for(int i=0;i<n;i++)
        for(int j=0;j<n-i-1;j++)
            if(c[j]>c[j+1]){
                c[j]=c[j]+c[j+1];
                c[j+1] = c[j]-c[j+1];
                c[j] = c[j]-c[j+1];
            }
}

int main(){
    int n,i;
    char a;
    std::cin >> n;
    char c[n];
    for(i=0;i<n;i++)
        std::cin >> c[i];
    bubbleSort(c,n);
    std::cin >> a;
    for(i=0;i<n;i++)
        if(c[i]==a){
            std::cout << (i+1);
            break;
        }
}*/

//PGRM 2
/*void reverse(char *c,int s,int e){
    int i,j,a;
    for(a=0,i=s,j=e-1;a<((e-s)/2);i++,j--,a++){
        c[i] = c[i] + c[j];
        c[j] = c[i] - c[j];
        c[i] = c[i] - c[j];
    }
}

int main(){
    char s[1000];
    int i,start=0,end;
    for(i=0;i<1000;i++)
        s[i]='\0';
    std::cin >> std::ws;
    std::cin.getline(s,1000);
    for(i=0;i<1000;i++)
        if(s[i]==' '){
            reverse(s,start,i);
            start=i+1;
        }else if(s[i]=='\0'){
            reverse(s,start,i);
            end = i;
            break;
        }
    for(i=0;i<1000;i++)
        if(s[i]==32 && s[i+1]==32){
            for(start=i;start<end;start++)
                s[start]=s[start+1];
            i--;
        }
    std::cout << s;
}*/

//PGRM 3
void sortDigits(int *num, int n){
    int i,j;
    for(i=0;i<n;i++)
        for(j=0;j<n-1-i;j++)
            if(num[j]>num[j+1]){
                num[j] = num[j+1] + num[j];
                num[j+1] = num[j] - num[j+1];
                num[j] = num[j] - num[j+1];
            }
}
void kaprekarSteps(int *num){
    sortDigits(num,4);
    int g=0,s=0,ans=0,i;
    for(i=0;i<4;i++){
        s = s*10 + num[i];
        g = g*10 + num[3-i];
    }
    ans = g-s;
    for(i=0;i<4;i++,ans/=10)
        num[3-i] = ans%10;
}
int main(){
    int num[]={0,0,0,0};
    int i,count = 0,n;
    std::cin >> n;
    for(i=0;i<4;i++,n/=10)
        num[i] = n%10;
    for(i=0;i<2;i++){
        num[i] = num[3-i] + num[i];
        num[3-i] = num[i] - num[3-i];
        num[i] = num[i] - num[3-i];
    }
    while(!(num[0]==6 && num[1]==1 && num[2]==7 && num[3]==4)){
        kaprekarSteps(num);
        count++;
    }
    std::cout << count;
}