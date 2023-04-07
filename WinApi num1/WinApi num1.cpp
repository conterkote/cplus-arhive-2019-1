#include <Windows.h>
#include <string.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PWSTR pCmdLine, int nCmdShow)
	// Параметры:
	//hInstance- дескриптор экземпляра содержит метаданные для ОС
	//hPrevInstance - не используется, был в 16-ти битных системах
	//pCmdLine - аргументы командной строки
	//nCmdShow - кол-во аргументов. Минимум 1
{
	LPSTR string = "Hello!"; //то же что и char*
	LPWSTR wString = NULL; // то же что и wchar_t*
	LPTSTR tString = NULL; // Шаблонная строка, зависит от того как компилируется проект
	LPCWSTR WSTRING = L"Constant string";
	
	//Типы(самые частоиспользуемые)
	CHAR ch = 0; // == char
	WCHAR wch = 0; // == wchar_t
	TCHAR tch = 0;

	BOOL bResult = 0; // Нет _bool !!! нуден для получения кода ошибки, или 0 в случае успеха == int
	BOOLEAN bTrue = 0; // Более похож на _bool, имеет размер 1 байт

	BYTE iValSmall = 0; // == unsigned short
	WORD iVal = 0; // == unsigned short
	INT iInt = 0; // == int
	UINT uiInt = 0; // == unsigned int
	DWORD iValBig = 0; // == unsinged long

	FLOAT fVal = 0; // == float

	LPVOID p0 = NULL; // == void*
	PVOID p1 = NULL; // == LPVOID == void*

	HANDLE h = NULL; // Дескриптор. используется повсеместно в WINAPI == void

	//Примеры WINAPI функций. функции конвертации char* -> wchar_t* && wchar_t* -> char*
	//В ASCII. Работает тока на Windows!
	/*
	int WideCharToMultiByte(
			_In_	  UINT		CodePage,
			_In_	  DWORD		dwFlags,
			_In_	  LPCWSTR	lpWideCharStr,
			_In_	  int		cchWideChar,
			_Out_opt_ LPSTR		lpMultiByteStr,
			_In_	  int		cbMultiByte,
			_In_opt_  LPCSTR	lpDefaultChar,
			_Out_opt_ LPBOOL	lpUsedDefaultChar
			);
	*/
}