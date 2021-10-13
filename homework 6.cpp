#include <iostream>
#include<math.h>
using namespace std;

int main()
{
	//how many coins in the machine
	int Rs_1coin=100 , Rs_2coin=100, Rs_5coin=100, Rs_10coin=100;
	
	//how many coins in the overFlow bin
	int Rs_1coinBin=0, Rs_2coinBin=0, Rs_5coinBin=0, Rs_10coinBin=0;  
	
	
	
//	//balance
//	int Rs_1coinBalance=0, Rs_2coinBalance=0, Rs_5coinBalance=0, Rs_10coinBalance=0;
//	
	
	int password;
//	String owerPassword = "12345";
	
	int proA=15, proB=56, proC=34, proD=72;
	

do{
	bool x=true;
	
	int payment,newPayment,balance,price=0;
	//user input
	int Rs_1coinUser=0, Rs_2coinUser=0 ,Rs_5coinUser=0 ,Rs_10coinUser=0;
	
	//gives the change
	int Rs_1coinOut=0, Rs_2coinOut=0 ,Rs_5coinOut=0 ,Rs_10coinOut=0;
	
	cout<<"Welcome, How may I help you!!!!! "<<endl;
	cout<<endl;
	cout<<"Product A : enter 1"<<endl;
	cout<<"Product B : enter 2"<<endl;
	cout<<"Product C : enter 3"<<endl;
	cout<<"Product D : enter 4"<<endl;
	
	cout<<endl;
	
	int choice;
	cout<<"Enter your desired product number: ";
	while(x){
	cin>>choice;
	
	cout<<endl;
	
	switch(choice){
		case 1:
			cout<<"The price of the product is Rs:"<<proA<<endl;
			price=15;
			x=false;
			break;
		case 2:	
			cout<<"The price of the product is Rs:"<<proB <<endl;
			price=56;
			x=false;
			break;
		case 3:
			cout<<"The price of the product is Rs:"<<proC<<endl;
			price=34;
			x=false;
			break;
		case 4:
			cout<<"The price of the product is Rs:"<<proD<<endl;
			price=72;
			x=false;
			break;
		default:
			cout<<"Please enter the correct product number!! : ";
			x=true;
		
	} 

}
	cout<<endl;
	
	cout<<"Please enter the payment through the slot(Rs:1,2,5,10  are only accepted)"<<endl;
	cout<<"Number of Rs. 1 coins: ";
	cin>>Rs_1coinUser;
	Rs_1coin+=Rs_1coinUser;
	cout<<"Number of Rs. 2 coins: ";
	cin>>Rs_2coinUser;
	Rs_2coin+=Rs_2coinUser;
	cout<<"Number of Rs. 5 coins: ";
	cin>>Rs_5coinUser;
	Rs_5coin+=Rs_5coinUser;
	cout<<"Number of Rs. 10 coins: ";
	cin>>Rs_10coinUser;
	Rs_10coin+=Rs_10coinUser;
	
	cout<<endl;
	
	payment=Rs_1coinUser*1+Rs_2coinUser*2+Rs_5coinUser*5+Rs_10coinUser*10;
	if(payment==price){
		balance=0;
	}
	else if(payment>price){
		balance=payment-price;
	}
	else if(payment<price){
		int lack=price-payment;//5
		balance=payment-price;
		balance=abs(balance);
		newPayment=0;
		while (newPayment<lack){//0   5
			cout<<"Rs. "<<payment<<" is insufficient, please insert remaining amount...."<<endl;
			cout<<"Number of Rs. 1 coins: ";
			cin>>Rs_1coinUser;
			cout<<"Number of Rs. 2 coins: ";
			cin>>Rs_2coinUser;
			cout<<"Number of Rs. 5 coins: ";
			cin>>Rs_5coinUser;
			cout<<"Number of Rs. 10 coins: ";
			cin>>Rs_10coinUser;
			newPayment=Rs_1coinUser*1+Rs_2coinUser*2+Rs_5coinUser*5+Rs_10coinUser*10;
			payment+=newPayment;
			balance=payment-price;
		}
	}
	
	cout<<"Rs. "<<balance<<" get your balance through the coin slot!!!!!"<<endl;
	
cout<<endl;
	
//Returns the number of RS:10 bills
	
cout << "Number of RS:10 coins:  " << balance / 10  << endl;  
Rs_10coinOut=balance / 10;  

//Returns the number of RS:2000 bills

cout << "Number of RS:5 coins:  " << (balance % 10) / 5 << endl;
Rs_5coinOut=(balance % 10) / 5;

//Returns the number of RS:1000 bills

cout << "Number of RS:2 coins:  " << ((balance % 10) % 5) / 2 << endl;
Rs_2coinOut=((balance % 10) % 5) / 2 ;

//Returns the number of RS:500 bills

cout << "Number of RS:1 coins :  " << (((balance % 10) % 5) % 2) / 1 << endl;
Rs_1coinOut=(((balance % 10) % 5) % 2) / 1;

cout<<endl;

cout<<"Thank you!!!"<<endl;
	
	Rs_1coin-=Rs_1coinOut;
	Rs_2coin-=Rs_2coinOut;
	Rs_5coin-=Rs_5coinOut;
	Rs_10coin-=Rs_10coinOut;
	
	if(Rs_1coin>120)
	{
		Rs_1coinBin=Rs_1coin-120;
	}
	if(Rs_2coin>120)
	{
		Rs_2coinBin=Rs_1coin-120;
	}
	if(Rs_5coin>120)
	{
		Rs_5coinBin=Rs_1coin-120;
	}
	if(Rs_10coin>120)
	{
		Rs_10coinBin=Rs_1coin-120;
	}
	
	cout<<"Enter passwort to terminate(Authorized people only)"<<endl;
	cout<<"If you are a consumer enter 0 for password to continue: ";
	cin>>password;
}


	while(password==0);
	if (password==12345){
		cout<<"Program terminate by the owner!!"<<endl;
		cout<<"Coins in each denominations reserve "<<endl;
		cout<<"......................................"<<endl;
		cout<<endl;
		cout << "Number of RS:1 coins reserve:  " <<Rs_1coin<<endl;
		cout << "Number of RS:2 coins reserve:  " <<Rs_2coin<<endl;
		cout << "Number of RS:5 coins reserve:  " <<Rs_5coin<<endl;
		cout << "Number of RS:10 coins reserve:  " <<Rs_10coin<<endl;
		cout<<endl;
		cout<<"Coins in each overFlow Bin "<<endl;
		cout<<"......................................"<<endl;
		cout<<endl;
		cout << "Number of RS:1 coins overFlow Bin:  " <<Rs_1coinBin<<endl;
		cout << "Number of RS:2 coins overFlow Bin:  " <<Rs_2coinBin<<endl;
		cout << "Number of RS:5 coins overFlow Bin:  " <<Rs_5coinBin<<endl;
		cout << "Number of RS:10 coins overFlow Bin:  " <<Rs_10coinBin<<endl;
		cout<<endl;
		
		cout<<"Good Job!!!!"<<endl;
		
		
	}
	else{
		cout<<"Try again!!"<<endl;
	}
	
	return 0;
}
