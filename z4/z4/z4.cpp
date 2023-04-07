#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string input_string;
    getline(cin, input_string);
    string word;
    vector<string> words_to_check;
    string result;
    int i = 0;
    for (const auto symbol : input_string) {
        word += symbol;
        if (symbol == ' ' || i == input_string.length() - 1)
        {
            words_to_check.push_back(word);
            word = "";
        }
        i++;
    }
    for (const auto word_inisde : words_to_check)
    {
        if (!isdigit(word_inisde[0]) > 0)
        {
            result += word_inisde;
        }
    }
    cout << result;
}