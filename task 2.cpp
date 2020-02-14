#include<iostream>
using namespace std;
int main()
{
	float interest_due;
	float total_amount_due;
	float min_payment;
	float account_balance;
	cout<<"enter account balance"<<endl;
	cin>>account_balance;
	if (account_balance<=1000)
	{
		total_amount_due=account_balance*0.015;
		cout<<"total_amount_due is"<<total_amount_due;
		
	}
	else
	{
		total_amount_due=account_balance*0.01;
			cout<<"total_amount_due is  "<<total_amount_due;
	}
	if (total_amount_due<=10)
	{
		cout<<"it is the minimum payment";
	}
	else 
	{
       cout<<"it will be the 10% of total amount owed whichever is larger";
	}
}
