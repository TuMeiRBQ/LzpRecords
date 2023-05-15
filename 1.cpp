#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    long long a = 0x4142434445464748;
    char *p = (char*)&a;
    
    cout << hex<<(int *)p<<" "<<(int *)p+1<<endl;
    cout << *p<<*(p+1);
}