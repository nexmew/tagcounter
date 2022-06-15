#include <iostream>
#include <string>

using namespace std;

int main() {

    string input;
    int counter = 0;

    cout << "Enter string: " << endl;
    getline(cin, input);

    for (int i = 0; i < input.length(); i++) {
        if (input[i] == ',') {
            counter++;
            continue;
        }
    }

    counter++;
    cout << endl;
    cout << counter << endl;
    cout << endl;


    return 0;
}