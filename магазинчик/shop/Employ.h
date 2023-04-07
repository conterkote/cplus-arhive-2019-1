#pragma once
#include <iostream>
#include <string>
using namespace std;
class Employ
{
public:
	void setEmploymentsDetails(string name, string last_name, string post);
private:
	string post;
	string name;
	int employments;
};

