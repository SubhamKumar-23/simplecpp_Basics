#include <simplecpp>

//Program 1 (Temp)
/*main_program{
    int a,b;
    cin >> a >> b;
    if(a>=b)
        cout << "False" << endl;
    else 
        for(int i=a;i<=b;i++)
            cout << i << "  " << (float)9*i/5 + 32 << endl;
}*/

//Program 2 (palindrome)
/*main_program{
    int n,i,f,l,k,m=1;
    bool a=false;
    cin >> n;
    for(i=n;i>0;i/=10){
        l = i%10;
        for(f = i; f>=10;f/=10);
        for(m=1,k=i;;k/=10,m*=10)
            if(k==f) break;
        i%=m;
        if(l==f){a=true;continue;}
        else{cout <<"false";a=false;break;}
    }
    if(a)cout <<"true";
    // alternate way => just reverse the number and store
}*/


//program 3 (armstrong)
/*main_program{
    int n,sum=0,i,j,product=1;
    cin >> n;
    for(i=n;i>0;i/=10){
        product =1;
        for(j=n;j>0;j/=10)
            product*=(i%10);
        sum += product;
    }
    sum==n ? cout << "true" : cout << "false";
}*/

//program 4 (abracadabra)
main_program{
    char a,b;
    bool cond = false;
    cin >> a;
    for(int i=1;i<=99;i++){
        cin >> b;
        if(a=='a'){
            a=b;
            i++;
            cin >> b;
            if(a=='b'){
                a=b;
                i++;
                cin >> b;
                if(a=='r'){
                    a=b;
                    i++;
                    cin>>b;
                    if(a=='a'){
                        a=b;
                        i++;
                        cin>>b;
                        if(a=='c'){
                            a=b;
                            i++;
                            cin >>b;
                            if(a=='a'){
                                a=b;
                                i++;
                                cin >> b;
                                if(a=='d'){
                                    a=b;
                                    i++;
                                    cin >> b;
                                    if(a=='a'){
                                        a=b;
                                        i++;
                                        cin >> b;
                                        if(a=='b'){
                                            a=b;
                                            i++;
                                            cin >> b;
                                            if(a=='r'){
                                                a=b;
                                                i++;
                                                //cin >>b;
                                                if(a=='a'){
                                                    cout << "Pattern found at position " << i ;
                                                    cond = true;
                                                    i++;
                                                    break;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }        
        a=b;
    }
    if(!cond){cout<<"Pattern not found";}
}

