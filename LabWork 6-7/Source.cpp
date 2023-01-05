#include<iostream>
#include<string>
#include <conio.h>
#define names aray[i].name
#define ages aray[i].age
#define heights aray[i].height
#define familys aray[i].family
using namespace std;
struct KI
{
	int number;
	char name[50];
	char family[50];
	int age;
	int height;
};
int main()
{
	const int n = 2;
	KI aray[n] = {};
	for (int i = 0; i < n; i++)
	{
		cout << "\n[" << i + 1 << "]" << endl;
		cout << "\nName\t";
		cin.getline(aray[i].name, 60);

		cout << "\nFamily\t";
		cin.getline(aray[i].family, 60);

		cout << "\nAge\t";
		cin >> ages;

		cout << "\nHeight \t";
		cin >> heights;
		cin.get();


	}

	for (int i = 0; i < n; i++)
	{
		cout << "\n[" << i + 1 << "]\t" << "\n[Name]\t" << names << "\n[Family]\t" << familys << "\n[Age]\t" << ages << "\n[Height]\t" << heights << endl;
	}
	cout << endl;






	system("pause");
	return 0;
}