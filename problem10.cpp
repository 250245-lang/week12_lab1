#include <iostream>
using namespace std;

char to_lower(const char s) {
    if (s >= 'A' && s <= 'Z') return s + ('a' - 'A');
    return s;
}
void countChar(const char* str, int& vowelCount, int& consonantCount) {
    vowelCount = 0;
    consonantCount = 0;
    for (int i = 0; *(str+i) != '\0'; i++) {
        char lower = to_lower(*(str+i));
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') vowelCount++;
        else if (lower != ' ') consonantCount++;
    }
}

int main() {
    char text[1024];
    cin.getline(text, 1024);
    int vowels, consonants;
    countChar(text, vowels, consonants);
    cout << "vowels: " << vowels << endl;
    cout << "consonants: " << consonants << endl;
    return 0;
}