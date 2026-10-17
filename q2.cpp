#include<simplecpp>

void rotate(float& x, float& y, float angle){
    /* --- Start of student code, Don't Remove or edit these markers --- */
    float a = x;
    float b = y ;
    x = a*cosine(angle) - b*sine(angle);
    y = a*sine(angle) + b*cosine(angle);
    if(y<0.00001 && y>-0.00001) y=0;
    if(x<0.00001 & x>-0.00001) x=0;
    /* --- End of student code, Don't Remove or edit these markers --- */
}

main_program{
    int n;
    cin >> n;
    float x, y;
    cin >> x >> y;
    while(n--){
        float angle;
        cin >> angle;
        rotate(x,y,angle);
    }
    cout << x << ' ' << y <<'\n';
}
