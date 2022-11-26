#include <iostream>

using namespace std;

int main()
{
    int a , b = 0;
    cin>>a>>b;
    if(a > 0 && b > 0 && a < 101 && b < 101)
    {
        cout<<a*b;
    }
    return 0;
}
