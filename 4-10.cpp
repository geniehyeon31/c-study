#include <iostream>
using namespace std;

int main()
{
    int score[4]={0,};
    int i=0;

    for (i=0; i<3; i++)
    {
        cout << "����" << i+1 << " �Է�: ";
        cin >> score[i];
        score[3] = score[3]+score[i];
    }

    for(i=0;i<4;i++)
    cout << score[i] << "    ";

    cout << endl;
    return 0;
}