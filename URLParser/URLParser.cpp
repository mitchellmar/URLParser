

#include <iostream>
#include <string>
using namespace std;


int main()
{
    cout << "Please enter a valid URL:\n";
    string url;
    cin >> url;

    int scheme_index = url.find(":") + 1;
    int authority_start = url.find("//");
    int path_start = url.find("/", scheme_index+2);

    cout << "Scheme: " << url.substr(0, scheme_index) << "\n";
    cout << "Authority: " << url.substr(authority_start, path_start-authority_start) << "\n";
    cout << "Path: " << url.substr(path_start)<< "\n";
}


