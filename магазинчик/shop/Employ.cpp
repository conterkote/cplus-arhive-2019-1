#include <string>
#include <iostream>
using namespace std;

class Employ {
public:
	void setEmploymentsDetails(string name, string last_name, string post) {
		name = name;
		last_name = last_name;
		post = post;
		cout << name << " " << last_name << " " << "has been added to employments list as a " << post;
	}
private:
	string name;
	string last_name;
	string post;
};