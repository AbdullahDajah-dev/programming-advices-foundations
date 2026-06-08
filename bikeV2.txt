#include <iostream>
#include <cmath>
#include <string>
using namespace std;


struct stAdress
{
	string Country;
	string City;
	string street;


};

struct stOwnerInfo
{
	string Firstname;
	string Lastname;
	string Age;
	string phone;
	string Email;
	stAdress Adress;

};

struct stBike
{
	string brand;
	string model;
	string year;
	string engine;
	stOwnerInfo ownerinfo;


};

void readinfo(stBike& bike, int id)
{
	cout << "-- Bike info " << id << "\n";
	cout << "Brand: ";
	cin >> bike.brand;
	cout << "Model: ";
	cin >> bike.model;
	cout << "Year: ";
	cin >> bike.year;
	cout << "Engine: ";
	cin >> bike.engine;

	cout << "\n\n-- Owner's info\n";
	cout << "First name: ";
	cin.ignore(256, '\n');
	getline(cin, bike.ownerinfo.Firstname);
	cout << "Last name: ";
	getline(cin, bike.ownerinfo.Lastname);
	cout << "Age: ";
	cin >> bike.ownerinfo.Age;
	cout << "Phone: ";
	cin >> bike.ownerinfo.phone;
	cout << "E-mail: ";
	cin >> bike.ownerinfo.Email;

	cout << "\n\n-- Owner's Adress\n";
	cout << "Country: ";
	cin.ignore(256, '\n');
	getline(cin, bike.ownerinfo.Adress.Country);
	cout << "City: ";
	getline(cin, bike.ownerinfo.Adress.City);
	cout << "Street: ";
	getline(cin, bike.ownerinfo.Adress.street);
	cout << endl << "**********************" << endl << endl;



}
void printinfo(stBike bike, int id)
{
	cout << "\n\n===============================\n\n";
	cout << "         Bike info " << id << "\n\n";
	cout << "===============================\n\n";
	cout << "Brand  : " << bike.brand << "\n";
	cout << "Model  : " << bike.model << "\n";
	cout << "Year   : " << bike.year << "\n";
	cout << "Engine : " << bike.engine << "\n";

	cout << "\n\n===============================\n\n";
	cout << "         Owner's info\n\n";
	cout << "===============================\n\n";
	cout << "First Name  : " << bike.ownerinfo.Firstname << "\n";
	cout << "Last Name   : " << bike.ownerinfo.Lastname << "\n";
	cout << "Age         : " << bike.ownerinfo.Age << "\n";
	cout << "Phone       : " << bike.ownerinfo.phone << "\n";
	cout << "E-mail      : " << bike.ownerinfo.Email << "\n";

	cout << "\n\n===============================\n\n";
	cout << "        Owner's Adress\n\n";
	cout << "===============================\n\n";
	cout << "Country  : " << bike.ownerinfo.Adress.Country << "\n";
	cout << "City     : " << bike.ownerinfo.Adress.City << "\n";
	cout << "Street   : " << bike.ownerinfo.Adress.street << "\n";
	cout << endl << endl;



}

void ReadBikes(stBike bikes[2])
{
	readinfo(bikes[0], 1);
	readinfo(bikes[1], 2);

}
void PrintBikes(stBike bikes[2])
{

	printinfo(bikes[0], 1);
	printinfo(bikes[1], 2);
}




int main() {

	stBike bikes[2];

	ReadBikes(bikes);
	PrintBikes(bikes);



	return 0;
}