#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    string s1 = "0x10";
    sstream<string> <<s1;

    string s2 = "0x01";
    int sum;
    cout << s1 + s2<<endl;
}