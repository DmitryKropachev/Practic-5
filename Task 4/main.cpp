#include <iostream>
#include <string>
#include "book.h"
#include "book.cpp"
using namespace std;

int main() {
	TBook book;

	cout << "Before:" << endl;
	cout << "Name: " << book.Name << endl;
	cout << "Author: " << book.Author << endl;
	cout << "Count: " << book.Count << endl;

	book.Name = "Cats";
	book.Author = "Kropachev Dmitry Alexandrovich";
	book.Count = 12;

	cout << "After:" << endl;
	cout << "Name: " << book.Name << endl;
	cout << "Author: " << book.Author << endl;
	cout << "Count: " << book.Count << endl;


	return 0;
}
