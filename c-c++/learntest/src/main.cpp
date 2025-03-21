#include <iostream>
using namespace std;

int main()
{
    int* ni = new int(12);
    cout << *ni << endl;
    delete ni;
    return 0;
}
