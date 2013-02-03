#include <iostream>
#include "Parabola.h"


using namespace std;

int main()
{
    cout<<"Welcome to the World of Polynomials!!!\n"<<endl;
    cout<<">>>>>>>>>>>>>>>>>>>"<<endl;
    cout<<"PARABOLA AS OBJECT"<<endl;
    cout<<"<<<<<<<<<<<<<<<<<<<\n"<<endl;
    cout<<"Given the value of x: 1 \n\n";
    int a, b, c;
    int x=1;

    Parabola para;
    cout<<"Enter Coefficient A: ";
    cin>>a;
    cout<<"Enter Coefficient B: ";
    cin>>b;
    cout<<"Enter Coefficient C: ";
    cin>>c;

    para.inputValue (a, b, c);
    para.Quadratic (a, b, c, x);
    para.Roots(a, b, c);
    para.Extremum (a, b, c);


    return 0;

}
