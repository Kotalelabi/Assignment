#include <iostream>
using namespace std;
// Kota Lelabi-10985440
int main()
{
    int sum;
    int evenCount = 0;
    for (int a = 0; a < 10000; a += 2)
    {
        sum += a;
        evenCount++;
    }
    cout << "The average is " << sum / evenCount;
    return 0;
}