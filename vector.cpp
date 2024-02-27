#include <bits/stdc++.h>
using namespace std;


class Vector
{
private:
    double start_x,start_y;
    double end_x,end_y;

public:
    Vector():start_x(0),start_y(0),end_x(0),end_y(0)
    {}
    Vector(double sx,double sy,double ex,double ey)
    :start_x(sx),start_y(sy),end_x(ex),end_y(ey)
    {}

    Vector Add(Vector v2)
    {
        Vector v3;
        v3.start_x = this->start_x + v2.start_x;
        v3.start_y = this->start_y + v2.start_y;
        v3.end_x = this->end_x + v2.end_x;
        v3.start_y = this->end_y + v2.end_y;
        

    }


    friend ostream &operator<<(ostream &output , Vector &v)
    {
        output << "(" <<v.start_x << ", " <<v.start_y <<")"
               << "-->"
               << "(" <<v.end_x << ", " <<v.end_y <<")" <<endl;
        return output;
    }



};


int main()
{

}