#include <iostream>
using namespace std;

int main()
{
    int ArrayLong;
    int shift;

    cout << "Введите длину слова\n";
    cin >> ArrayLong;

    cout << "Введите сдвиг букв\n";
    cin >> shift;

    char Array[ArrayLong - 1];

    cout << "Введите слово\n";
    cin >> Array;

    for (int i = 0; i < ArrayLong; i++)
    {
        while (((Array[i] + shift) > 122) || (((Array[i] + shift) > 90) && ((Array[i] + shift) < 97)))
            shift -= 26;

        cout << char(Array[i] + shift);
    }
}
