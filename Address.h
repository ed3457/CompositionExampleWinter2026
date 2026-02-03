#pragma once
#include <string>

using namespace std;
class Address
{
private:
	string street;
	string zipCode;
	string city; 

public:
	void setStreet(string str);
	string getStreet();

	void setZipCode(string zc);
	string getZipCode();

	void setCity(string c);
	string getCity(); 

	Address();
	Address(string str, string zc, string c);

	void printAddress();

};

