#include <iostream>
using namespace std;

class Complex
{
private:

    double real;
    double imag;
public:
    Complex(double real=0,double imag=0):real(real),imag(imag)
    {}
    
    string toString0(double real, double imag)
    {
        string toReturn="";
        if(real>0 or real<0)
        {
            toReturn +=to_string(real)+" + ";
        }

        if(imag>0 or imag<0)
        {
            if(imag==1)
            {
                toReturn +="i";
            }
            else if(imag==-1)
            {
                toReturn +="-i";
            }
            else
            {
                toReturn += to_string(imag);
            }

        }
        return toReturn;
    }

    string toString1(int real, int imag)
    {
        string toReturn="";
        if(real>0 or real<0)
        {
            toReturn +=to_string(real)+" + ";
        }

        if(imag>0 or imag<0)
        {
            if(imag==1)
            {
                toReturn +="i";
            }
            else if(imag==-1)
            {
                toReturn +="-i";
            }
            else
            {
                toReturn += to_string(imag);
            }

        }
        return toReturn;
    }
    

    string toString()
    {
    
        int real_int = real;
        int imagin_int =imag;

        if(real ==0 and imag==0)
        {
            return "0";            
        }
        else if(real_int == real and imagin_int == imag)
        {
            return toString1(real_int,imagin_int);
        }
        else
        {
            return toString0(real,imag);
        }
        
    }

    Complex operator+(Complex const& obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }

    friend std::ostream& operator<<(ostream& output , Complex &act)
    {
        
    }   

};









int main()
{
    Complex z1 = Complex(1, 1);
    Complex z2 = Complex(-3.5, 6.6);
    //cout << z2.toString();
    cout << Complex().toString() << endl;
    cout << Complex(-4) << endl;
    cout << Complex(0, -6) << endl;
}