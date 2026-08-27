#include <simplecpp>
//program 1
/*main_program{
    int a,b,i;
    float ans;
    cin >> a >> b;
    if(a>=b)
        cout << "False" << endl;
    else 
        for(i=a;i<=b;i++){
            ans = 0.92*i-1.5;
            ans<0 ? cout << "false\n" : cout << i << " " << ans << endl;  
        }
}*/

//program 2
/*main_program{
    int i,j,k,n;
    cin >> n;
    for(i=1;i<=n;i++){
        for(k=1;k<i;k++)
            cout << "  ";
        for(j=i;j<=n;j++) 
            cout << "* ";
        cout << "\n";
    }
}*/

//program 3
/*main_program{
    int n,i,d,f,j,s=0;
    cin >> n;
    for(i=n;i>0;i/=10){
        d = i%10;
        f=1;
        for(j=1;j<=d;j++)
            f*=j;
        s+=f;
    }
    cout << (s==n ? "true" : "false");
}*/

//program 4
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

//program 5
/*main_program{
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
}*/
