#include <simplecpp>
main_program{
    int a,b,n=8,sum,s,s2=0;
    long x=1,y=1,z=1;
    cin >> a >> b;
    sum = a+b;
    s =sum;
    if(a>=0){
        for(n=7; n >=0 ; n--)
            if((int)(a/pow(2,n))==0){
                cout << "0";
                x= 10*x + 0;
            }else{
                cout << "1";
                a-=pow(2,n);
                x= 10*x + 1;
            }
    }else{
        a+=256;
        for(n=7; n >=0 ; n--)
            if((int)(a/pow(2,n))==0){
                cout << "0";
                x= 10*x + 0;
            }else{
                cout << "1";
                a-=pow(2,n);
                x= 10*x + 1;
            }
    }
    x-=100000000;
    cout << "\n";

    if(b>=0){
        for(n=7; n >=0 ; n--)
            if((int)(b/pow(2,n))==0){
                cout << "0";
                y=y*10+0;
            }else{
                cout << "1";
                b-=pow(2,n);
                y=y*10+1;
            }
    }else{
        b+=256;
        for(n=7; n >=0 ; n--)
            if((int)(b/pow(2,n))==0){
                cout << "0";
                y=y*10+0;
            }else{
                cout << "1";
                b-=pow(2,n);
                y=y*10+1;
            }
    }

    cout << "\n";
    y-=100000000;


   /* for(n=1;n<=8;n++){
        int car=0;
        if( ((x%(int)pow(10,n))/(int)pow(10,(n-1)) + (y%(int)pow(10,n))/(int)pow(10,(n-1)) + car ) == 2){
            car =1; z= 10*z;
        }else if( ((x%(int)pow(10,n))/(int)pow(10,(n-1)) + (y%(int)pow(10,n))/(int)pow(10,(n-1)) + car) == 3){
            car =1; z= 10*z +1;
        }else if( ((x%(int)pow(10,n))/(int)pow(10,(n-1)) + (y%(int)pow(10,n))/(int)pow(10,(n-1)) + car) == 1){
            car = 0 ; z = 10*z +1;
        }else{
            car= 0; z = 10*z;
        }
    }*/
    for(int i=1;i<=8;i++){
        int car =0;
        //cout <<endl<< z << endl;
        if((x%10 + y%10 + car )== 2){car =1; z= 10*z;}
        else if((x%10 + y%10 + car )== 3){car =1;z=10*z+1;}
        else if((x%10 + y%10 + car )== 1){car = 0; z=10*z+1;}
        else if((x%10 + y%10 + car )== 0 && x==0 && y==0){break;}
        else {car =0; z = 10*z;} 
        x/=10;y/=10;
    }

    long f = z;
    cout << "0";
    while(f/10 != 0){cout<<"0"; f/=10;}
    cout << z << endl;


    for(int i=0;i<=7;i++){
        if(z%10 == 1) s2 = s2 + pow(2,i);
        z/=10;
    }

    cout << endl << s2;
    /*if(s>=0){
        for(n=7; n >=0 ; n--)
            if((int)(s/pow(2,n))==0)
                cout << "0";
            else{
                cout << "1";
                s-=pow(2,n);
            }
    }else{
        s+=128;
        cout <<"1";
        for(n=6; n >=0 ; n--)
            if((int)(s/pow(2,n))==0)
                cout << "0";
            else{
                cout << "1";
                s-=pow(2,n);
            }
    }*/

    //cout << endl << sum << endl;
}