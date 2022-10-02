

#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    float x , y , b;
    cin>> x;
    cin>> y;
    b=(fabs(x)-fabs(y))/(float)(1+fabs(x*y));
    
cout<<b;


}



