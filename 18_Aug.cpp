#include <simplecpp>

// Line pgrm1
/*main_program{
    float x1,y1,x2,y2,a,b;
    cin >> x1 >> y1 >> x2 >> y2 >> a >> b;
    if(((((y2-b)/(x2-a)) == ((y2-y1)/ (x2-x1))) && ((x2-a)>0 || (x1-a) > 0))|| (x2==x1 && x2==a)) cout << "True";
    else cout << "False";
}*/


//subseq pgrm2
/*main_program{
    int n,a,b,count1=0,count2=0;
    cin >> n;
    cin >> a;
    for(int i=1;i<=(n-1);i++){
        cin>>b;
        if(b>a)
            count1++;
        else{
            if(count1 > count2)
                count2 = count1;
            count1 = 0;
        }
        a=b;
    }
    if(count1 > count2)
        count2 = count1;
    cout << count2+1 << endl ;
}*/


//rectangle pgrm3
main_program{
    float x1,y1,x2,y2,x3,y3,x4,y4;
    float x5,y5,x6,y6,x7,y7,x8,y8;

    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4 >> x5 >> y5 >> x6 >> y6 >> x7 >> y7 >> x8 >> y8;

    ((x1!=x3 && (x1==x2 || x1==x4) && (x3==x2 || x3==x4) ) && (y1!=y3 && (y1==y2 || y1==y4) && (y3==y2 || y3==y4) )) ? cout << "True \n" : cout << "False \n";
    ((x5!=x7 && (x5==x6 || x5==x8) && (x7==x6 || x7==x8) ) && (y5!=y7 && (y5==y6 || y5==y8) && (y7==y6 || y7==y8) )) ? cout << "True \n" : cout << "False \n";

    if(((x5>=min(x1,x3) && x5 <= max(x1,x3) )|| (x7>=min(x1,x3) && x7 <=max(x1,x3))) && ((y5>=min(y1,y3) && y5 <= max(y1,y3) )|| (y7>=min(y1,y3) && y7 <= max(y1,y3))))
        cout << "True";
    else
        cout << "False";

}
