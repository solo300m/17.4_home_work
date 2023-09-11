#include <iostream>
using namespace std;
void swapPtr(int *ptrA, int *ptrB)
{
    int tmp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = tmp;
}
void displyPtr(int *ptrA, int *ptrB)
{
    cout << "Вывод данных:" << endl;
    cout << "Значение А = " << *ptrA << " Значение В = " << *ptrB << endl;
}
int main()
{
    int a = 3;
    int b = 5;
    int *ptrA = &a;
    int *ptrB = &b;
    displyPtr(ptrA, ptrB);
    swapPtr(ptrA, ptrB);
    displyPtr(ptrA, ptrB);
}