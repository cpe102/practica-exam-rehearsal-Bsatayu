#include <iostream>
#include <string>
using namespace std;

string compress(string a){
   
   int L = a.size();
   
   int i=0;
   string y ="";
   while(i<L){
       y=y+a[i];
       i=i+3;
   }
    return y;
   }
   
    
int main()
{
    string a = compress("CPECMU");
    string b = compress("x");
    string c = compress("HelloWorld");
    string d = compress("BNK48");
    string e = compress("COMPROG261102");
    string f = compress("A");
    string g = compress("AB");
    string h = compress("ABC");
    string i = compress("ABCD");
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n" << h << "\n" << i << "\n";

}
