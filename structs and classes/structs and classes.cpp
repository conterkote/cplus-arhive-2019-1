#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
struct Lecture {
	string title;
	int duration;
	string author;
};
struct LectureTitle {
	string specalization;
	string course;
	string week;
};
struct DetailedLecture {
	LectureTitle title;
	int duration;
};
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
void PrintDetailedCourse(const DetailedLecture& lect) {
	cout <<
		"Specializtion: " << lect.title.specalization << endl <<
		"Duration: " << lect.duration << endl;
}
Lecture GetCurrencyLecture() {
	return { "I suck dicks", 5400, "Slava" };
}

int main() {
	setlocale(0, "");
	Lecture lect1 = { "OPP", 3200, "Alesha" };
	PrintLecture({ "OOP", 5400, "Anton" });
	PrintLecture(lect1);
	PrintLecture(GetCurrencyLecture());
	Lecture current_lecture = GetCurrencyLecture();
	PrintLecture(current_lecture);
	LectureTitle title = { "IT", "C++", "First week" }; // создать переменную где используется вложенная структура
	DetailedLecture lect = { title, 7 }; // можно так
	
	DetailedLecture l1 = { { "IT", "C++", "First week" }, 7 }; // а можно так!
	PrintDetailedCourse(lect);
	PrintDetailedCourse(l1);
}
//#include <iostream>
//#include <string>
//
//using namespace std;
// 
//struct Route {
//	public:
//		string GetStart() { return start; }
//		string GetEnd() { return end; }
//		int GetLength() { return length; }
//	private:
//		string start;
//		string end;
//		int length;
//};
//
//int main() {
//	setlocale(0, "");
//	Route route = { "Novosibirsk", "Moscow", 5000 };
//}