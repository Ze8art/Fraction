#include <iostream>
#include "Fraction.h"
#include <fstream>
using namespace std;

int main() {
	int x = 10;
	int y = 20;
	int z = x + y;
	//cout << z << endl;

	Fraction a(5, 14);
	Fraction c(1, 4);
	Fraction d(1, 4);
	Fraction b(3, 35);
	Fraction e(1, 2);
	//(a + b).toString();
	//(c + d).toString();
	//(c - d).toString(); 
	//(a - b).toString();
	//(a * b).toString();
	//(5 + e).toString();
	cout << b << endl;
	ofstream fout("output.txt");
	fout << a << endl;
	Fraction f;
	//cin >> f;
	//cout << f << endl;
	ifstream fin("input.txt");
	Fraction g;
	fin >> g;
	cout << g << endl;
}