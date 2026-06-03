#include <iostream>
#include <cmath>

using namespace std;

enum enColor { black = 1, red, blackAndred };

struct stContact
{
	string cell_number;
	string Email;



};

struct stOwnerInfo
{

	string fullname;
	string adress;
	stContact contact;


};

struct stBike
{

	string Brand;
	string Model;
	string year;
	string engine;
	stOwnerInfo owner;
	enColor color;



};


int main()
{

	stBike bike1, bike2;


	bike1.color = enColor::blackAndred;
	bike2.color = enColor::blackAndred;

	cout << "** Bike (1) **\n\n";
	cout << "Brand: ";
	cin >> bike1.Brand;
	cout << "Model: ";
	cin >> bike1.Model;
	cout << "Engine: ";
	cin >> bike1.engine;
	cout << "Year: ";
	cin >> bike1.year;
	cout << "\n\nOwner's information\n\n";
	cout << "Name: ";
	cin >> bike1.owner.fullname;
	cout << "Adress: ";
	cin >> bike1.owner.adress;
	cout << "Phone: ";
	cin >> bike1.owner.contact.cell_number;
	cout << "E-mail: ";
	cin >> bike1.owner.contact.Email;

	cout << endl << endl;


	cout << "** Bike (2) **\n\n";
	cout << "Brand: ";
	cin >> bike2.Brand;
	cout << "Model: ";
	cin >> bike2.Model;
	cout << "Engine: ";
	cin >> bike2.engine;
	cout << "Year: ";
	cin >> bike2.year;
	cout << "\n\nOwner's information\n\n";
	cout << "Name: ";
	cin >> bike2.owner.fullname;
	cout << "Adress: ";
	cin >> bike2.owner.adress;
	cout << "Phone: ";
	cin >> bike2.owner.contact.cell_number;
	cout << "E-mail: ";
	cin >> bike2.owner.contact.Email;

	cout << endl << endl;



	cout << "--Bike Information:\n\n";
	cout << "Brand: " << bike1.Brand << "  Model: " << bike1.Model << "  Engine: " << bike1.engine << "  cc " << "  Year: " << bike1.year << "  Color: " << bike1.color << "\n\n";
	cout << "--Owner Information:\n\n";
	cout << "Full Name: " << bike1.owner.fullname << " || Adress: " << bike1.owner.adress << " || Phone: " << bike1.owner.contact.cell_number << " || E-mail: " << bike1.owner.contact.Email << endl << endl;

	cout << "************************\n\n";

	cout << "--Bike Information:\n\n";
	cout << "Brand: " << bike2.Brand << "  Model: " << bike2.Model << "  Engine: " << bike2.engine << "  cc " << "  Year: " << bike2.year << "  Color: " << bike2.color << "\n\n";
	cout << "--Owner Information:\n\n";
	cout << "Full name: " << bike2.owner.fullname << " || Adress: " << bike2.owner.adress << " || Phone: " << bike2.owner.contact.cell_number << " || E-mail: " << bike2.owner.contact.Email << endl;












	return 0;
}