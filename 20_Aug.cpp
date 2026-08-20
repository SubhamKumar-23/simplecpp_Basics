#include <simplecpp>

//pgrm1 isoceleus triangle
/*main_program{
    float x1,y1,x2,y2,x3,y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 ;
    float a = sqrt(pow((x1-x2) , 2) + pow((y1-y2),2));
    float b = sqrt(pow((x1-x3) , 2) + pow((y1-y3),2));
    float c = sqrt(pow((x3-x2) , 2) + pow((y3-y2),2));
    if( (a==b) || (b==c) || (c==a) && (a+b > c && b+c > a && a+c > b))
        cout << "True";
    else 
        cout << "False";
}*/

//pgrm2 runtime seq
/*main_program{
    int n,i,count=0;
    cin >> n;
    char c,ch;
    cin >> c;
    for(i=1;i<=n-1;i++){
        cin >> ch;
        if(c==ch)
            count++;
        else{
            cout << count+1 << c;
            count = 0;
        }
        c=ch;
        if(i==(n-1))
            cout << count+1 << c;
    }
    if(n==1)
        cout << count+1 << c;
}*/

//pgrm3 triangle
main_program{
    float x1,y1,x2,y2,x3,y3,x4,y4;
    float x5,y5,x6,y6,x7,y7,x8,y8;

    int a=0,b=0;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4 >> x5 >> y5 >> x6 >> y6 >> x7 >> y7 >> x8 >> y8;

    if((x1!=x3 && (x1==x2 || x1==x4) && (x3==x2 || x3==x4) ) && (y1!=y3 && (y1==y2 || y1==y4) && (y3==y2 || y3==y4) )){
        cout << "True \n"; 
        a=1;
    }else cout << "False \n";
    
    if((x5!=x7 && (x5==x6 || x5==x8) && (x7==x6 || x7==x8) ) && (y5!=y7 && (y5==y6 || y5==y8) && (y7==y6 || y7==y8) )){
        cout << "True \n";  
        a+=1;
    }else cout << "False \n";

    float X1,X3,X5,X7;
    if(x1>x3){X1=x3;X3=x1;}else{X1=x1;X3=x3;}
    if(x5>x7){X5=x7;X5=x7;}else{X5=x5;X7=x7;}

    float Y1,Y3,Y5,Y7;
    if(y1>y3){Y1=y3;Y3=y1;}else{Y1=y1;Y3=y3;}
    if(y5>y7){Y5=y7;Y7=y5;}else{Y5=y5;Y7=y7;}


    if(((x5>=X1 && x5 <= X3 )|| (x7>=X1 && x7 <=X3)) && ((y5>=Y1 && y5 <= Y3 )|| (y7>=Y1 && y7 <= Y3)) && a==2){
        cout << "True" << endl;
        b=1;
    }else
        cout << "False" << endl << "False";

    float max_x, min_x,max_y,min_y;
    if(x1>=x3 && x1 >= x5 && x1 >=x7)  max_x = x1;
    if(x3>=x1 && x3 >= x5 && x3 >=x7)  max_x = x3;
    if(x5>=x3 && x5 >= x1 && x5 >=x7)  max_x = x5;
    if(x7>=x3 && x7 >= x5 && x7 >=x1)  max_x = x7;

    if(x1<=x3 && x1 <= x5 && x1 <=x7)  min_x = x1;
    if(x3<=x1 && x3 <= x5 && x3 <=x7)  min_x = x3;
    if(x5<=x3 && x5 <= x1 && x5 <=x7)  min_x = x5;
    if(x7<=x3 && x7 <= x5 && x7 <=x1)  min_x = x7;

    if(y1>=y3 && y1 >= y5 && y1 >=y7)  max_y = y1;
    if(y3>=y1 && y3 >= y5 && y3 >=y7)  max_y = y3;
    if(y5>=y3 && y5 >= y1 && y5 >=y7)  max_y = y5;
    if(y7>=y3 && y7 >= y5 && y7 >=y1)  max_y = y7;

    if(y1<=y3 && y1 <= y5 && y1 <=y7)  min_y = y1;
    if(y3<=y1 && y3 <= y5 && y3 <=y7)  min_y = y3;
    if(y5<=y3 && y5 <= y1 && y5 <=y7)  min_y = y5;
    if(y7<=y3 && y7 <= y5 && y7 <=y1)  min_y = y7;

    float area = 0;
    if(b==1){
        area = ((X3-X1) + (X7-X5) - (max_x - min_x))*((Y3-Y1) + (Y7-Y5) - (max_y - min_y));
        cout << area;
    }

}

