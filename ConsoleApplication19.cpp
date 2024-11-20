// Створити чергу цілих чисел.Обчислити кількість однозначних елементів черги
#include <iostream>
#include <windows.h>
#include <queue>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    queue<int> q;
    int n, x, count = 0;
    cout << "Введіть розмір черги: ";
    cin >> n;
    cout << "Введіть " << n << " цілих чисел: \n";
    for (int i = 0; i < n; i++) {
        cin >> x;
        q.push(x);
    }

    // Обчислення кількості однозначних елементів
    while (!q.empty()) {
        if (q.front() >= -9 && q.front() <= 9 && q.front() != 0) { // Перевірка на однозначне число
            count++;
        }
        q.pop();
    }

    cout << "Кількість однозначних елементів у черзі: " << count << endl;
    return 0;
}