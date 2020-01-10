#include <iostream>
#include <cmath>
using namespace std;

double sumSqrt(double N){
    while(N>=0){
    1/sqrt(N);
    N++;
    return N;
    } 
  
        

    if(N<=0){
        return 0;
    }
    
}

int main()
{
    double a = sumSqrt(20);
    double b = sumSqrt(10);
    double c = sumSqrt(5);
    double d = sumSqrt(2);
    double e = sumSqrt(1);
    double f = sumSqrt(0);
    double g = sumSqrt(-1);
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n";

}
