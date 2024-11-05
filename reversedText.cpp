#include <iostream>
#include <string>

using namespace std;

int main() {
    string text;

    //string from the user
    cout << "Enter the text you want to reverse: ";
    getline(cin, text);

    //reversing
    string reversedText = string(text.rbegin(), text.rend());

    cout << "Reversed text: " << reversedText << endl;

    system("pause");

    return 0;
}
