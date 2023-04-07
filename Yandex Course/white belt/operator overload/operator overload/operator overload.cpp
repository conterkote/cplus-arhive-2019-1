#include <iostream>
#include <vector>

using namespace std;

class FunctionPart {
	public:
		FunctionPart(const char& new_sign, const double& new_value) {
			this->value = new_value;
			this->sign = new_sign;
		}
		double Apply(double source_value) {
			if (sign == '+') return source_value + value;
			else if (sign == '*') return source_value * value;
			else if (sign == '/') return source_value / value;
			else return source_value - value;
		}
		void Invert() {
			if (sign == '+') sign = '-';
			else sign = '+';
		}
	private:
		double value;
		char sign;
};

class Function {
	public:
		void AddPart(const char& new_sign, const double& new_value) {
			f.push_back({new_sign, new_value});
		}
		void ShowResult() const {
			cout << value << endl;
		}
		void Apply() {
			for (auto part : f)
			{
				value = part.Apply(value);
			}
		}
	private:
		vector<FunctionPart> f;
		double value = 0;
};

int main()
{
	setlocale(0, "");
	Function new_f;
	int count, x;
	char sign;
	cout << "Добро пожаловать в калькулятор!\nВведите количество операций: "; cin >> count;
	for (int i = 0; i < count; i++) {
		cout << "Введите знак " << i << "-ой операции: "; cin >> sign;
		cout << "Введите число " << i << "-ой операции: "; cin >> x;
		new_f.AddPart(sign, x);
	}
	new_f.Apply();
	new_f.ShowResult();

}