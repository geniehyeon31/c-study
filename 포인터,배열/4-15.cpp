#include <iostream>
#include <string>
using namespace std;

int main()
{
    char ch='y', name[30]="KabDol";

    cout << hex << (int)&ch << endl;
    cout << hex << (int)name << endl;
    cout << hex << (int)&name[0] << endl;

    return 0;
}