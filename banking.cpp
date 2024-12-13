#include <iostream>
using namespace std;

float balance = 0;
void deposit(){
    float amount;
    cout<< "Enter the amount to deposit" << endl;
    cin>> amount;

    if(amount <= 0){
        cout<<"Your amount is too low for a deposit!!"<< endl;
    }else{
        cout<<"Your deposit of Ksh:"<< amount << " was successful"<< endl;
    }

    balance += amount;
}

void withdraw(){
    float withdraw;
    cout<< "Enter the amount to withdraw:" << endl;
    cin>> withdraw;
    if(withdraw >= balance){
        cout<< "Your balance is too low for a withdraw!!"<< endl;
    }else if(withdraw <= 10){
        cout<<"The amount is too low for a withdraw"<< endl;
    }else{
        cout<<"Your withdraw of Ksh:"<<withdraw<<" was successful."<< endl;
    }

    balance -= withdraw;
}

void check_balance(){
    cout<<"Your balance is Ksh:"<<balance<<"."<< endl;
}
int main(){
    int selection;
    int choice;

    cout<<"******WELCOME******"<< endl;
    cout<<"Enter 1 to proceed 2 to exit."<< endl;
    cin>> selection;
    if(selection == 1){
        do{
            cout<<"-------SERVICES------"<< endl;
            cout<<"1.DEPOSIT\n2.WITHDRAW\n3.CHECK BALANCE\n4.EXIT\n"<< endl;
            cout<<"Enter your choice"<< endl;
            cin>>choice;

            switch(choice){
                case 1:
                 deposit();
                 break;
                case 2:
                 withdraw();
                 break;
                case 3:
                 check_balance();
                 break;
                default:
                 cout<<"Thank you for choosing us"<< endl;
            }
        }while(choice != 4);
    }
    else{
       cout<<"Thank you for staying with us"<< endl;
    }
}