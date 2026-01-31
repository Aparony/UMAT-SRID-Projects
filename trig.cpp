#include <iostream>
#include <cmath>
using namespace std;

int hypotenuse(void){
    cout << "You are now a pythagorean"<<endl;
    double a, b, c;
    cout <<"Enter length of first side: "<<endl;
    cin >> a ;
    cout<< "Enter length of second side"<<endl;
    cin >> b;
    c = sqrt(a*a + b*b);
    cout<< c;
}
int main(){
    hypotenuse();
    
    return 0;
}