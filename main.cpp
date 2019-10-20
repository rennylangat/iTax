#include<iostream>
#include<math.h>
#include <string>

using namespace std;

int main() {
repeatme:
char grade;
double hours;
int id;
double pay;
double tax;
double net_pay;

cout << "Welcome to iTax Calculate!" << endl <<endl;
cout << "Please input your ID :" << endl;
cin >> id;
cout << "Please input your Pay Grade:" << endl;
cin >> grade;

cout << "Please enter the Number of hours worked:" << endl;
cin >> hours;


switch (grade)
{
case 'a' :
	pay = hours * 500;
	if (pay<10000 )
	{
	    tax=pay*0.1;
	    net_pay=pay-tax;
		cout << "GRADE: " << grade << " \nHours: "<<hours <<"\nid:  "<<id <<"\nPay_Less Tax: " <<net_pay;

	}
	if (pay==10000)
	{
		tax = 10000 * 0.10;
		net_pay = pay - tax;
		cout << "GRADE: " << grade << " \nHours: " << hours << "\nid:  " << id << "\nPay_Less Tax: " << net_pay;
	}
	if (pay == 20000) {
		tax = (10000 * 0.10) + (10000 * 0.15);
		net_pay = pay - tax;
		cout << "GRADE: " << grade << " \nHours: " << hours << "\nid:  " << id << "\nPay_Less Tax: " << net_pay;
	}
	if (pay == 30000) {
		tax = (10000 * 0.10) + (10000 * 0.15) + (10000 * 0.20);
		net_pay = pay - tax;
		cout << "GRADE: " << grade << " \nHours: " << hours << "\nid:  " << id << "\nPay_Less Tax: " << net_pay;

	}
	if((pay-30000)>1){
		tax = pay * 0.30;
		net_pay = pay - tax;
		cout << "GRADE: " << grade << " \nHours: " << hours << "\nid:  " << id << "\nPay_Less Tax: " << net_pay;

	 }
	if (pay<30000 && pay < 20000&&pay > 10000 && (20000 - pay) < 10000 && pay !=20000) {
		tax = (10000*0.10)+((20000-pay)*0.15);
		net_pay = (pay - tax);
		cout << "GRADE: " << grade << " \nHours: " << hours << "\nid:  " << id << "\nPay_Less Tax: " << net_pay;

	}

    if (pay<30000&&pay > 20000 && (30000 - pay) < 10000 && pay !=30000) {
		tax = (10000 * 0.10)+(10000 * 0.15)+((pay-20000)*0.20);
		net_pay = pay - tax;
		cout << "GRADE: " << grade << " \nHours: " << hours << "\nid:  " << id << "\nPay_Less Tax: " << net_pay;

	}

	break;
case 'b':
	pay = hours * 1000;
		if (pay<10000 )
	{
	    tax=pay*0.1;
	    net_pay=pay-tax;
		cout << "GRADE: " << grade << " \nHours: "<<hours <<"\nid:  "<<id <<"\nPay_Less Tax: " <<net_pay;

	}
	if (pay==10000)
	{
		tax = 10000 * 0.10;
		net_pay = pay - tax;
		cout << "GRADE: " << grade << " \nHours: " << hours << "\nid:  " << id << "\nPay_Less Tax: " << net_pay;
	}
	if (pay == 20000) {
		tax = (10000 * 0.10) + (10000 * 0.15);
		net_pay = pay - tax;
		cout << "GRADE: " << grade << " \nHours: " << hours << "\nid:  " << id << "\nPay_Less Tax: " << net_pay;
	}
	if (pay == 30000) {
		tax = (10000 * 0.10) + (10000 * 0.15) + (10000 * 0.20);
		net_pay = pay - tax;
		cout << "GRADE: " << grade << " \nHours: " << hours << "\nid:  " << id << "\nPay_Less Tax: " << net_pay;

	}
	if((pay-30000)>1){
		tax = pay * 0.30;
		net_pay = pay - tax;
		cout << "GRADE: " << grade << " \nHours: " << hours << "\nid:  " << id << "\nPay_Less Tax: " << net_pay;

	 }
	if (pay<30000 && pay < 20000&&pay > 10000 && (20000 - pay) < 10000 && pay !=20000) {
		tax = (10000*0.10)+((20000-pay)*0.15);
		net_pay = (pay - tax);
		cout << "GRADE: " << grade << " \nHours: " << hours << "\nid:  " << id << "\nPay_Less Tax: " << net_pay;

	}

    if (pay<30000&&pay > 20000 && (30000 - pay) < 10000 && pay !=30000) {
		tax = (10000 * 0.10)+(10000 * 0.15)+((pay-20000)*0.20);
		net_pay = pay - tax;
		cout << "GRADE: " << grade << " \nHours: " << hours << "\nid:  " << id << "\nPay_Less Tax: " << net_pay;

	}

	break;
default:
	pay = hours * 1500;
	if (pay<10000 )
	{
	    tax=pay*0.1;
	    net_pay=pay-tax;
		cout << "GRADE: " << grade << " \nHours: "<<hours <<"\nid:  "<<id <<"\nPay_Less Tax: " <<net_pay;

	}
	if (pay==10000)
	{
		tax = 10000 * 0.10;
		net_pay = pay - tax;
		cout << "GRADE: " << grade << " \nHours: " << hours << "\nid:  " << id << "\nPay_Less Tax: " << net_pay;
	}
	if (pay == 20000) {
		tax = (10000 * 0.10) + (10000 * 0.15);
		net_pay = pay - tax;
		cout << "GRADE: " << grade << " \nHours: " << hours << "\nid:  " << id << "\nPay_Less Tax: " << net_pay;
	}
	if (pay == 30000) {
		tax = (10000 * 0.10) + (10000 * 0.15) + (10000 * 0.20);
		net_pay = pay - tax;
		cout << "GRADE: " << grade << " \nHours: " << hours << "\nid:  " << id << "\nPay_Less Tax: " << net_pay;

	}
	if((pay-30000)>1){
		tax = pay * 0.30;
		net_pay = pay - tax;
		cout << "GRADE: " << grade << " \nHours: " << hours << "\nid:  " << id << "\nPay_Less Tax: " << net_pay;

	 }
	if (pay<30000 && pay < 20000&&pay > 10000 && (20000 - pay) < 10000 && pay !=20000) {
		tax = (10000*0.10)+((20000-pay)*0.15);
		net_pay = (pay - tax);
		cout << "GRADE: " << grade << " \nHours: " << hours << "\nid:  " << id << "\nPay_Less Tax: " << net_pay;

	}

    if (pay<30000&&pay > 20000 && (30000 - pay) < 10000 && pay !=30000) {
		tax = (10000 * 0.10)+(10000 * 0.15)+((pay-20000)*0.20);
		net_pay = pay - tax;
		cout << "GRADE: " << grade << " \nHours: " << hours << "\nid:  " << id << "\nPay_Less Tax: " << net_pay;

	}

	break;
}
return 0;
cin.ignore();


}

