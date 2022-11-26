#include <iostream>

using namespace std;

void swapp(int &x , int &y)
{
    int temp = 0;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    cin>>a>>b>>c;
    if(a > 0 && b > 0 && c > 0 && a < 101 && b < 101 && c < 101)
    {
        swapp(a , b);
        swapp(a , c);
        cout<<a<<" "<<b<<" "<<c;
    }
    return 0;
}
