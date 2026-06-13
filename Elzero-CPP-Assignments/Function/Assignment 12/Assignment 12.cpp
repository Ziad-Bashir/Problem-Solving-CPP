#include <iostream>
#include <string>

using namespace std;

// Write Your Function Here
string createurl(string Protocol, string NameofWebSite, string Domain, bool WWW = true)
{
string url;
    if(WWW)  //  instead of WWW == true
    {
        url = Protocol + "://www." + NameofWebSite + "." + Domain;;
    } else  //  instead of else if(WWW == false)
    {
        url = Protocol + "://" + NameofWebSite + "." + Domain;;
    }
    return url;
}

int main()
{
    cout << createurl("https", "elzero", "org") << "\n"; // https://www.elzero.org
    cout << createurl("https", "google", "com", false) << "\n"; // https://google.com
    cout << createurl("http", "learn", "net") << "\n"; // http://www.learn.net
    return 0;
    }