#include <iostream>

float length(float x1, float y1,float x2, float y2){
    return sqrt(pow((x2-x1),2)+pow((y2-y1),2));
}

bool right(float x1, float y1,float x2, float y2,float x3, float y3){
    if( ((x1-x2)*(x3-x2)+(y3-y1)*(y1-y2)) == 0 )
        return true;
    return false;
}

int main(){
    float x1,y1,x2,y2,x3,y3,x4,y4;
    float a1,b1,a2,b2,a3,b3,a4,b4;

    std::cout << "Enter all the cordinates of 1st polygon";
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    std::cout << "Enter all the cordinates of 2nd polygon";
    std::cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3 >> a4 >> b4;
    
    if(length(x1,y1,x2,y2)==length(x3,y3,x4,y4) && length(x3,y3,x1,y1)==length(x2,y2,x4,y4) && right(x1,y1,x2,y2,x3,y3) && right(x4,y4,x3,y3,x2,y2))
        std::cout<<"First is a rectangle \n";
    else
        std::cout<<"First is not a rectangle \n";

    if(length(a1,b1,a2,b2)==length(a3,b3,a4,b4) && length(a3,b3,a1,b1)==length(a2,b2,a4,b4) && right(a1,b1,a2,b2,a3,b3) && right(a4,b4,a3,b3,a2,b2))
        std::cout<<"Second is a rectangle \n";
    else
        std::cout<<"Second is not a rectangle \n";


}