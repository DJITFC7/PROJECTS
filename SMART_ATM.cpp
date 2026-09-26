#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){

    cout<<"================================================="<<endl<<endl;
    cout<<"                 SMART ATM                       "<<endl;
    cout<<"================================================="<<endl<<endl;
//INPUTS
	string name;
	cout<< "Enter your name"<<endl;
	cin>>name;
	
	int Acc_num;
	cout<< "Enter your account number"<<endl;
	cin>>Acc_num;
	
	double acc_bal;
	cout<< "Enter your account balance"<<endl;
	cin>>acc_bal;
	
	int PIN;
	cout<< "Enter your PIN"<<endl;
	cin>>PIN;
	
	if (PIN == 2026){
		cout<<"Succesful Login"<<endl;
   	}else{
	    cout<< "INCORRECT PIN!!!!"<< endl;
	    exit(1);
	   }
	
	int Withdrawal_amount;
	cout<< "Enter Amount you want to withdraw"<<endl;
	cin>>Withdrawal_amount;
	int WA = Withdrawal_amount;
	

	srand(time(0));
	int transaction_ID = rand() %(101 - 11) + 10;
    int TID = transaction_ID;


// CALCULATIONS
	float Bank_charge = WA * (1/100);
	float BC = Bank_charge;
	
	float Total_debit = WA + BC;
	float TD = Total_debit;
	
	float New_balance = acc_bal - TD;
	float NB = New_balance;
    if (WA >= 50000){
    	cout<< "NOTICE: You are making a large withdrawal"<<endl;
   	}
       
	if (WA >= 100000 ){
		cout<< "Max withdrawal amount reached,Enter another amount"<<endl;
		exit(1);
	}
	if (NB <= 5000){
		cout<< "Withdrawal can't be made not enough finds remaining in account"<<endl;
		exit(1);
	}
    
	cout<<"================================================="<<endl<<endl;
    cout<<"               TRANSACTION APPROVED              "<<endl;
    cout<<"================================================="<<endl<<endl;
    cout<<"Transaction ID             "<<TID<<endl;
	cout<<"CUSTOMER NAME:             "<<name<<endl;
    cout<<"ACCOUNT NUMBER:            "<<Acc_num<<endl;
    cout<<"PREVIOUS BALANCE:          "<<acc_bal<<endl;
    cout<<"WITHDRAWAL AMOUNT:         "<<WA<<endl;
    cout<<"BANK CHARGE (1%):          "<<BC<<endl;
    cout<<"TOTAL DEBIT:               "<<TD<<endl;
    cout<<"NEW BALANCE:               "<<NB<<endl;
    cout<<"================================================="<<endl<<endl;
}