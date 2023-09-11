#include <iostream>
using namespace std;
bool substr(const char *a, const char *b)
{
    bool flag = false;
    int count = 0;
    while (*(a + count) != '\0')
    {
        if (*(a + count) == *b)
        {
            if (*(a + count) == *(a + (count + 1)) && *b != *(b + 1))
            {
                count++;
            }
            break;
        }
        else
        {
            count++;
        }
    }
    int sCount = 0;
    while ((*(b + sCount) != 0))
    {
        char q = *(a + count);
        char p = *(b + sCount);
        if (*(a + count) == *(b + sCount))
        {
            flag = true;
        }
        else
        {
            flag = false;
            break;
        }
        count++;
        sCount++;
    }
    return flag;
}
int main()
{
    const char *a = "Hello world";
    const char *b = "lo";
    const char *c = "banana";
    cout << substr(a, b) << substr(a, c);
}