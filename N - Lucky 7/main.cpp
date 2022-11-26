#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cin>>n;
    bool check = false;

    if( n >= 100 && n <= 999)
    {
        for(int i = 0 ; i < 3 ; i++)
        {
            if(n%10 == 7)
            {
                check = true;
            }
            n /= 10;
        }
        if(check == true)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<"No";
        }
    }
    return 0;
}
