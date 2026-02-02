#include <iostream>
using namespace std;

int EBank(){
    double Balance = 100.00;
    double deposit;
    double withdrawal; 
    int choice;
    do{
    cout <<"Welcome to Ebank"<<endl;
    cout <<"How may we serve you today?"<<endl;
    cout <<"1. Show Balance "<<endl;
    cout <<"2. Deposit money "<<endl;
    cout <<"3. Withdraw money"<<endl;
    cout <<"4. Exit"<<endl;
    cin >> choice;
    
    switch(choice){
        case 1: cout <<"Your balance is "<<Balance <<endl;
                break;
        case 2: cout << "How much do want to deposit "<<endl; cin>>deposit; cout<<"Your new balance is :"<< Balance + deposit <<endl;
                break;
        case 3: cout <<"How much would you like to withdraw "<<endl; cin >> withdrawal; cout <<"Your new balance is "<< Balance - withdrawal <<endl;
                break;
        case 4: cout<< "Thank you for visiting. "<<endl;
                break;
        }        
    }while(choice != 4);
}

int main(){
    EBank();
    return 0;
}