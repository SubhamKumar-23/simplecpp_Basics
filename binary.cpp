#include <simplecpp>
main_program{
    int a,b,n=8,sum,s;
    cin >> a >> b;
    sum = a+b;
    s =sum;
    if(a>=0){
        for(n=7; n >=0 ; n--)
            if((int)(a/pow(2,n))==0)
                cout << "0";
            else{
                cout << "1";
                a-=pow(2,n);
            }
    }else{
        a+=128;
        cout <<"1";
        for(n=6; n >=0 ; n--)
            if((int)(a/pow(2,n))==0)
                cout << "0";
            else{
                cout << "1";
                a-=pow(2,n);
            }
    }
    cout << "\n";
    if(b>=0){
        for(n=7; n >=0 ; n--)
            if((int)(b/pow(2,n))==0)
                cout << "0";
            else{
                cout << "1";
                b-=pow(2,n);
            }
    }else{
        b+=128;
        cout <<"1";
        for(n=6; n >=0 ; n--)
            if((int)(b/pow(2,n))==0)
                cout << "0";
            else{
                cout << "1";
                b-=pow(2,n);
            }
    }
    cout << "\n";
    if(s>=0){
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
    }
    cout << endl << sum << endl;
}