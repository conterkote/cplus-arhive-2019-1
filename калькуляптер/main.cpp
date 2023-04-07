#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

struct Lecture {
	std::string title;
	int duration;
	std::string author;
};

using namespace std;

void PrintLecture(const Lecture& lecture) {
	cout <<
		"Title : " << lecture.title << endl <<
		"Duration : " << lecture.duration << endl <<
		"Author : " << lecture.author << endl;
}

void PrintCourse(const vector<Lecture>& lectures)
{
	for (const Lecture& lecture : lectures)
	{
		PrintLecture(lecture);
	}
}

int main() {
	setlocale(0, "");
}
