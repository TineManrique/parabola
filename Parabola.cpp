#include <math.h>
#include <iostream>
#include "Parabola.h"

using namespace std;

Parabola::Parabola()
{
    //ctor
}

Parabola::~Parabola()
{
    //dtor
}

void Parabola:: inputValue (int a, int b, int c)
{
   A=a;
   B=b;
   C=c;
}

int Parabola::Quadratic (int A, int B, int C, int x)
{
    int Y=0;
    Y=((A*(x*x)) + (B*x) + C );
    cout<<"Y is equal to "<<Y<<endl;
}


int Parabola::Roots (int A ,int B, int C)
{
    float R, R1, R2, D;
    D = (B*B) - (4*A*C);
    R = (-B / 2*A);
    R1 = (-B + pow(D, 1/2))/ 2*A;
    R2 = (-B - pow(D,1/2))/ 2*A;
    cout<<"The Discriminant is: "<<D<<endl;

    if (D < 0)
    {
        cout << "There is no root"<< endl;
    }
    else if (D=0)
    {
        cout << "There is one root which is: ";
        cout << R << endl;
    }
    else
    {
        cout << "There are two roots which are: ";
        cout << R1 << " and " << R2 <<endl;
    }
}

int Parabola:: Extremum (int A, int B, int C )
{
    int extremum=0, extremumY=0;
    extremum =(-B / 2*A);
    extremumY = ((A* pow(extremum,2)) + B*extremum + C);

    if (A=0)
    {
        cout << "There is no extremum" <<endl;
    }
    else if (A<0)
    {
        cout << "The extremum is maximum. " <<endl;
        cout << "The extremum for x = " <<extremum <<endl;
        cout << "The extremum for y = " << extremumY <<endl;
    }
    else
    {
        cout << "The extremum is minimum. " <<endl;
        cout << "The extremum for x = " <<extremum<<endl;
        cout << "The extremum for y = " << extremumY <<endl;
    }
}

