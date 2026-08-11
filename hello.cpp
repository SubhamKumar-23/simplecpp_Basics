#include <simplecpp>

//square inside square && Dashed lines
/*main_program{
    //square inside square
    int len,len1;
    cout << "Enter your length";
    if(cin>>len);else{cout<<"Invalid length!";return(0);}
    len1 = sqrt(2) * (len/2) ;
    turtleSim();
    for(int i=1;i<=4;i++){
        forward(len);
        wait(0.5);
        right(90);
        wait(0.5);
    }
    forward(len/2);
    wait(0.5);
    right(45);
    for(int i=1;i<=4;i++){
        forward(len1);
        wait(0.5);
        right(90);
        wait(0.5);
    }
    penUp(); forward(1000);
    wait(2);

    // dashed lines
    turtleSim();
    for(int i=1;i<=10;i++){
        wait(1);
        penDown();
        forward(10);
        penUp();
        forward(10);
    }
    forward(1000);
    wait(2);
    
}*/

// n-sided stars
/*main_program{
        int side,angle,i;
    cout << "Enter a side: \n";
    cin >> side ;
    angle = 720/side;
    turtleSim();
    for(i=1;i<=side;i++){
        right(angle);
        forward(100);
    }
    getClick();
}*/

// circle-pattern 
/*main_program{
    int i;
    turtleSim();
    getClick();
    //main circles
    for(i=1;i<=360;i++){
        right(1);
        forward(1);
    }
    
        for(i=1;i<=360;i++){
            left(1);
            forward(1);
        }
        for(int i=1;i<=60;i++){
            left(1);
            forward(1);
        }
        for(i=1;i<=360;i++){
            right(1);
            forward(1);
        }
        for(i=1;i<=240;i++){
            right(1);
            forward(1);
        }
        for(i=1;i<=360;i++){
            left(1);
            forward(1);
        }
        for(i=1;i<=120;i++){
            left(1);
            forward(1);
        }
         for(i=1;i<=360;i++){
            right(1);
            forward(1);
        }
         for(i=1;i<=240;i++){
            right(1);
            forward(1);
        }
        for(i=1;i<=360;i++){
            left(1);
            forward(1);
        }
        for(i=1;i<=120;i++){
            left(1);
            forward(1);
        }
         for(i=1;i<=360;i++){
            right(1);
            forward(1);
        }
    
    wait(2);
}*/

// array n x n
/*main_program{
    int n,i;
    cout<<"Enter a number: \n";
    cin>>n;
    turtleSim();
    for(int j=1;j<=n;j++){
        for(i=1;i<=n;i++){
            penDown();
            for(int j=1;j<=4;j++){
                forward(50);
                right(90);
            }
            penUp();
            forward(50);
            penUp();
            forward(5);
        }
        forward(-(n*55));
        right(90);
        forward(55);
        left(90);
    }
    getClick();
    penUp();
    forward(1000);
    getClick();
}*/

//simple grid
/*main_program{
    turtleSim();
    for(int i=1;i<=2;i++){
        penDown();
        forward(150);
        right(90);
        penUp();
        forward(50);
        right(90);
    }
    penDown();
    forward(50);
    left(90);
    forward(50);
    forward(-150);
    right(90);
    penUp();
    forward(50);
    left(90);
    penDown();
    forward(150);
    penUp();
    forward(1000);
    wait(4);
}*/

//plate design
/*main_program{
    turtleSim();
    getClick();
    int i,j;
    penUp();
    left(90);
    forward(200);
    right(90);
    for(i=0;i<=45;i++){
        right(1);
        forward(0.3);
    }

    penDown();

    for(j=1;j<37;j++){
        right(10);
        penDown();
        for(i=0;i<=270;i++){
            right(1);
            forward(0.1);
        }
        forward(30);
        for(i=0;i<=270;i++){
            left(1);
            forward(0.1);
        }
        forward(25);
    }
    penUp();
    forward(1000);
    wait(3);
}*/

//number rectangle
/*main_program{
    int l,b,i,j;
    cin >> l >> b;
    for(i=1;i<=l;i++){
        for(j=1;j<=b;j++)(i==1 || j==1 || j==b || i==l)?cout<<"1":cout<<"0";
        cout<<"\n";
    }
}*/

//Corner Pattern
/*main_program{
    int n;
    cout<<"Enter a number";
    cin>>n;
    turtleSim();
    repeat(n){
        repeat(5){
            forward(5);
            penUp();
            forward(5);
            penDown();
        }
        repeat(n){
            forward(50);
            left(360/n);
        }
        left(360/n);
    }
    getClick();
}*/

//circle of box
/*main_program{
    int n;
    cout<<"enter a number \n";
    cin >> n;
    turtleSim();
    repeat(n){
        repeat(4){
            forward(100);
            right(90);
        }
         right(360/n);
    }
    wait(2);
}*/

//pattern of 8's
/*main_program{
    int m,n;
    cin >> n >> m ;
    repeat(n/2){
        repeat(m){
            repeat(n/2){
                repeat(m) cout<<"8";
                repeat(m) cout<<" ";
            }
            cout<<"\n";
        }
        repeat(m){
            repeat(n/2){
                repeat(m) cout << " ";
                repeat(m) cout<<"8";
            }
            cout<<"\n";
        }
    }
}*/

//phantom circles
/*main_program{
    double a,b,c;
    cout << "Enter the value of a = "; cin >> a;
    cout << "Enter the value of b = "; cin >> b;
    c = 200/ (3*b+2);
    //cout << c;
    turtleSim();
    repeat(a){
        repeat(b){
            forward(c);
            penUp();
            forward(c/2);
            penDown();
        }
        forward(c);
        penUp();
        forward(-100);
        penDown();
        right(180.0/a);
        repeat(b){
            forward(c/2);
            penUp();
            forward(c);
            penDown();
        }
        forward(c/2);
        penUp();
        forward(c/2);
        forward(-100);
        penDown();
        right(180.0/a);
    }
    getClick();
}*/

//multiplication of 2x2 matrix
/*main_program{
    int a,b,c,d; //matrix 1
    int a1,b1,c1,d1; //matrix 2
    cin >> a >> b >> c >> d >> a1>> b1>> c1>> d1 ;
    cout << a*a1 + b*c1 << "  " << a*b1 + b*d1 << "\n";
    cout << c*a1 + d*c1 << "  " << c*b1 + d*d1 ;
}*/

//Wallis Product
/*main_program{
    double n,m=1.0;
    cin >> n;
    repeat(int(n)%2==0){
        repeat(n/2){
            m*=(n/(n+1));
            m=m*(n/(n-1));
            n-=2;
        }
        cout << m*2 ;
        return(0);
    }
    cout << "Invalid input! Please enter even number";
}*/

//PnC
/*main_program{
    int n,r,n1=1,m1=1,m,r1=1;
    cin >> n >> r;
    m=n-r;
    repeat(n){
        n1*=n;
        n--;
    }
    repeat(m){
        m1*= m;
        m--;
    }
    repeat(r){
        r1*= r;
        r--;
    }
    cout << n1/m1 << "  " << n1/(r1*m1) ;
}*/

//binary pgrm using bitset
/*main_program{
    int a,b;
    cin >> a >> b;
    cout << bitset<8>(a) << "\n";
    cout << bitset<8>(b) << "\n";
    cout << bitset<8>(a+b) << "\n";
    cout << a+b << "\n";
}*/

//binary pgrm without using bitset
void binary(int a){
    int n=7;
    for(int i =1;i <=8 ;i++ , n--)
        if((int)(a/pow(2,n))==0)
            cout <<"0";
        else{
            cout << "1";
            a-=pow(2,n);
        }
}
void n_binary(int a){
    int n=7;
    a= abs(a);
    for(int i =1;i <=8 ;i++ , n--)
        if((int)(a/pow(2,n))==0)
            cout <<"1";
        else{
            cout << "0";
            a-=pow(2,n);
        }
}
/*main_program{
    int a,b,sum;
    cin >> a >> b;
    sum = a+b;

    //binary for a
    if(a>=0)
        binary(a);
    else
        n_binary(a);
    
    cout << "\n";

    //binary for b
    if(b>=0)
        binary(b);
    else
        n_binary(b);
    
    cout << "\n";

    //binary for sum
    if(sum>=0)
        binary(sum);
    else
        n_binary(sum);
    
}*/

