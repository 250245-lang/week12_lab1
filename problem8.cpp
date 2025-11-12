#include <iostream>
using namespace std;

int cstrLength(char* c) {
 char* start = c;
 while (*(c++) != '\0') {}
 return c-start-1;
}

int main() {
 char text[1024];
 cin.getline(text, 1024);
 cout << cstrLength(text);
 return 0;
}