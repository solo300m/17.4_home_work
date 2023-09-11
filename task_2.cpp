#include <iostream>
using namespace std;
void reverceArr(int *ptr)
{
    int tmp[10];
    for (int i = 0; i < 10; i++)
    {
        if (i == 0)
        {
            tmp[9] = *ptr;
        }
        else
        {
            tmp[9 - i] = *(ptr + i);
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (i == 0)
        {
            *ptr = tmp[i];
        }
        else
        {
            *(ptr + i) = tmp[i];
        }
    }
}
void displyArr(int *ptr)
{
    for (int i = 0; i < 10; i++)
    {
        if (i == 0)
        {
            cout << *ptr << "\t";
        }
        else
        {
            cout << *(ptr + i) << "\t";
        }
    }
    cout << endl;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    displyArr(arr);
    reverceArr(arr);
    displyArr(arr);
}