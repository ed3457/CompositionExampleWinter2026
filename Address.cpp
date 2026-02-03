#include "Address.h"
#include <iostream>
using namespace std;
void Address::setStreet(string str)
{
	street = str;
}

string Address::getStreet()
{
	return street;
}

void Address::setZipCode(string zc)
{
	zipCode = zc;
}

string Address::getZipCode()
{
	return zipCode;
}

void Address::setCity(string c)
{
	city = c;
}

string Address::getCity()
{
	return city;
}

Address::Address()
{
	setStreet("Not assigned yet");
	setCity("Not assigned yet");
	setZipCode("Not assigned yet");
}

Address::Address(string str, string zc, string c)
{
	setStreet(str);
	setCity(zc);
	setZipCode(c);
}

void Address::printAddress()
{
	cout << getStreet() << endl;
	cout << getZipCode() << endl;
	cout << getCity() << endl;
}
