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
    std::cin >> n;
    char c[n];
    for(i=0;i<n;i++)
        std::cin >> c[i];
    bubbleSort(c,n);
    std::cin >> i;
    std::cout << c[i-1];
}*/

//PGRM 2
/*void reverseWords(char c[],int e,int start){
    int i,end=e+start+1;
    for(i=start+1;i<end/2;i++){
        c[i] = c[i] + c[end-i-1];
        c[end-i-1] = c[i] - c[end-i-1];
        c[i] = c[i] - c[end-i-1];
    }
}

void reverseLine(char c[],int end){
    int i;
    for(i=0;i<end/2;i++){
        c[i] = c[i]+c[end-i-1];
        c[end-i-1] = c[i] - c[end-i-1];
        c[i] = c[i] - c[end-i-1];
    }
}

int main(){
    char s[1005];
    int i,end=0,j=-1;
    bool words=false;
    for(i=0;i<1005;i++)
        s[i]='\0';
    std::cin >> std::ws;
    std::cin.getline(s,1005);
    for(i=0;i<1005;i++)
        if(s[i]=='\0'){
            end = i;
            break;
        }else if(s[i]==' ')
            words=true;
        else continue;
    if(words){
        reverseLine(s,end);
        for(i=0;i<=end;i++){
            if(s[i]==' '||i==end){
                reverseWords(s,i,j);
                j=i;
            }
        }
    }
    for(i=0;i<1005;i++)
        if(s[i]==32 && s[i+1]==32){
            for(j=i;j<end;j++)
                s[j]=s[j+1];
            i--;
        }
    std::cout << s;
}*/

//PGRM 3
bool isLeap(int y);
void addDays(int *d, int *m, int *y, int k);
int weekday(int d, int m, int y);

int main(){
    int d,m,y,add,day;
    bool leap;
    std::cin >> d;
    std::cin >> m;
    std::cin >> y;
    std::cin >> add;
    addDays(d,m,y,add);
    leap = isLeap(y);
    day=weekday(d,m,y);
    switch(day):
        case 0:
            std::cout << "Monday";
        case 1:
            std::cout <<"Tuesday";
        case 2:
            std::cout << "Wednesday";
        case 3:
            std::cout << "Thursday";
        case 4:
            std::cout << "Friday";
        case 5:
            std::cout << "Saturday";
        case 6:
            std::cout << "Sunday";

}

bool isLeap(int y){
    if(y%4==0)
        return true;
    return false;
}

void addDays(int *d, int *m, int *y, int k){

}

int weekday(int d, int m, int y){

}