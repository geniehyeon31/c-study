#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s_str[30]="", d_str[30]="";
    int i=0;
    cout << "주민등록번호 입력: ";
    cin >> s_str;

    strcpy(d_str, s_str);

    cout << s_str << endl;
    cout << d_str << endl;

    return 0;
}