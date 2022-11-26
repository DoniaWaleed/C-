#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int sum = 0;

    cin>>a;
    if(a > 0 && a < 11)
    {
        sum = a + (a*a) + (a*a*a);
    }
    cout<<sum;
    return 0;
}
