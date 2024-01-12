#include <iostream>
using namespace std;
void add(int a, int b)
{
    cout << a + b;
}
// void add(int x, int y)//it doesn't works
// {
//     cout << x + y;
// }
// void add(float x, float y)//it works add(4, 5);//add(4.5,5)
// {
//     cout << x + y;
// }
void add(int x, double y)//it works add(4, 5); add(4.6, 5.9);=9.9
{
    cout << x + y;
}

// void add(int x, int y)//it doesnt works
// {
//     cout << x + y;
// }
int main()
{
    add(4.6, 5.9);
    return 0;
}