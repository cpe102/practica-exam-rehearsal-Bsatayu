#include<iostream>
using namespace std;

int main(){
    string i;
    cout<<"What is your name? :";
    cin>> i; 

    double j;
    cout<<"What is your GPA? :";
    cin>> j ;

    if (j>=3.50){
        cout << i <<"Inw Jrim Jrim";
    }else{
        cout <<"Try harder,"<< i;
    }
    return 0;
}
