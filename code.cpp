#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;

    // Ask for the user's name
    cout << "Enter your name: ";
    getline(cin, name);

    // Greet the user
    cout << "Hello, " << name << "!" << endl;

    return 0;
}
