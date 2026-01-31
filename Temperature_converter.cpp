#include<iostream>
using namespace std;

int main()
{
    cout << "*****Temperature Converter*****"<<endl;
    double Temperature;
    char unit;
    
    cout << "Which unit do you want to convert to: \n";
    cin >> unit; 
    
    if(unit == 'F' || unit == 'f' ){
        cout << "You converting from Celsius to Fahrenheit \n";
        cout << "Enter Celcius value: ";
        cin >> Temperature; 
        cout<< (1.8 * Temperature ) + 32 << endl;
    }
    else if(unit == 'C'|| unit ==  'c'){
        cout<<"You are converting from Fahrenheit to Celsius \n";
        cout<<"Enter your Fahrenheit value: ";
        cin >> Temperature; 
        cout<<((Temperature - 32) /1.8) <<endl;
        
    }
    
    return 0;
}