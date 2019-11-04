#include <iostream>
#include <cmath>
using namespace std;

//////////////////////////////////////////////////
class Point{
    int x,y;

public:
    
    Point(int x, int y){
        this-> x = x;
        this-> y = y;
    }

    void distance(){
        float vec=0;
        vec = sqrt(x*x + y*y);
        cout << "vec = " << vec << endl;
    }
    void osX(){
        if(x == 0) cout << "Lies on the x axis" << endl; 
        else cout << "Is not on the x axis" << endl;
    }
    void osY(){
        if(y == 0) cout << "Lies on the y axis" << endl; 
        else cout << "Is not on the y axis" << endl;
    }
    int quarter(){
        if(x > 0 && y > 0) return 1;
        if(x > 0 && y < 0) return 2;
        if(x < 0 && y < 0) return 3;
        if(x < 0 && y > 0) return 4;
        else return 0; 
    }
};
//////////////////////////////////////////////////
int main()
{
    Point   p1(3,4),
            p2(4,5),
            p3(5,6),
            p4(6,7);
    cout << "Point 1:"<< endl;
    p1.distance();
    p1.osX();
    p1.osY();
    if(p1.quarter() != 0)
    {
        cout << p1.quarter() << endl;
    }
    cout << "Point 2:"<< endl;
    p2.distance();
    p2.osX();
    p2.osY();
    if(p2.quarter() != 0)
    {
        cout << p2.quarter() << endl;
    }
    cout << "Point 3:" << endl;
    p3.distance();
    p3.osX();
    p3.osY();
    if(p3.quarter() != 0)
    {
        cout << p3.quarter() << endl;
    }
    cout << "Point 4:" << endl;
    p4.distance();
    p4.osX();
    p4.osY();
    if(p4.quarter() != 0)
    {
        cout << p4.quarter() << endl;
    }

    return 0;
}