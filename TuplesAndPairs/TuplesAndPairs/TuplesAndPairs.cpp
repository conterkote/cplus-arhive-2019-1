#include <iostream>
#include <tuple>
#include <map>
#include <set>
using namespace std;

class Cities {
	public: 
		tuple<bool, string> FindCountry(const string& city) {
			if (city_to_country.count(city) == 1)
			{
				return { true, city_to_country[city] };
			}
			else if (ambiguious_cities.count(city) == 1){
				return { false, "Ambiguious city" };
			}
			else
				return { false, "Not exists" };
		}
	private:
		map<string, string> city_to_country{ {"Novosibirsk", "Russia"} };
		set<string> ambiguious_cities{"Syka"};
};

int main()
{
	Cities new_city;
	auto [success, message] = new_city.FindCountry("Syka");
	cout << success << " - " << message;
	return 0;
}