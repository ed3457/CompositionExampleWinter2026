#pragma once
#include "Address.h"
class Department
{
private:
	Address deptAddress;
public:
	void setAddress(Address a);
	Address & getAddress();

};

