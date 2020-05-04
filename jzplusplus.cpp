#include <iostream>

using namespace std;

int main()
{
    //Hello, world!
    cout << "Hello, world!" << endl;

    //Example for making a shape in-line with printing in C++
    cout << "       /|" << endl;
    cout << "      / |" << endl;
    cout << "     /  |" << endl;
    cout << "    /   |" << endl;
    cout << "   /    |" << endl;
    cout << "  /     |" << endl;
    cout << " /      |" << endl;
    cout << "/_______|" << endl;

    //Testing out variables.
    string name, description;

    cout <<"Enter your name: " << endl;
    getline (cin, name);
    cout <<"What do you think of the above triangle? " << endl;
    getline (cin, description);

    cout << "This triangle was made by " << name << " and it is " << description << ", isn't that neat? " << endl;

    return 0;
}