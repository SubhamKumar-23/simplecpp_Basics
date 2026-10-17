#include<simplecpp>
main_program{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        int state=0,max=0,maxindex;
        for(int j=0;j<n-i;j++){
            if(a[j]>max){max=a[j];maxindex=j;state=1;}
        }
        
        if(state){a[maxindex]=a[n-i-1];a[n-i-1]=max;}
    }
    for(int i=0;i<n;i++){
        if(a[i]!=i+1){cout<<i+1;break;}
        if(i==n-1)cout<<i+2;
    }
}