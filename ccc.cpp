#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

typedef struct _point {
    double xPosition;
    double yPosition;
} point;

class Circle
{
private:
    point center;
    double radius;

public:
    Circle(point center , double radius):center(center),radius(radius){}

    double area()
    {
        return M_PI*radius*radius;
    }

    double distanceFromCenter(point pt)
    {
        double x = center.xPosition - pt.xPosition;
        double y = center.yPosition - pt.yPosition;
        double dif = sqrt(x*x+y*y);
        return dif;

    }

    int contains(point pt)
    {
        double dif  =distanceFromCenter(pt);

        if(dif>radius)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }

};


int main()
{
    point p1;
    cout << "Center of Circle: ";
    cin>> p1.xPosition>>p1.yPosition;

    double r1;
    cout <<"Radius of Circle: ";
    cin>> r1;

    point p2;
    cout << "Point to Check: ";
    cin >> p2.xPosition >> p2.yPosition;

    Circle b1(p1,r1);

    cout << "Area of Circle is " << b1.area()<<endl;

    cout << "Distance from Center to Point ("<<p2.xPosition<<", "<< p2.yPosition<<") is "<<b1.distanceFromCenter(p2)<<endl;

    if(b1.contains(p2))
    {
        cout<<"This circle contains this point.";
    }
    else
    {
        cout << "This point is not in this circle.";
    }
}