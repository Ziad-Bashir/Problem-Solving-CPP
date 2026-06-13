#include <iostream>
#include <string>
using namespace std;

// Write Your Function Here

string greeting(string name, string Sex = "")
{
    string greeting;
    if(Sex == "Male")
    {
        greeting = "Hello Mr " + name;
    } else if(Sex == "Female")
    {
        greeting = "Hello Miss " + name;
    } else
    {
        greeting = "Hello " + name;
    }
    return greeting;
}


    int main()
    {
    cout << greeting("Osama", "Male") << "\n"; // Hello Mr Osama
    cout << greeting("Eman", "Female") << "\n"; // Hello Miss Eman
    cout << greeting("Sameh") << "\n"; // Hello Sameh
    return 0;
    }