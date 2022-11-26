#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cin>>n;
    if(n > 0 && n < 1000)
    {
        int units_place = n%10;
        if(units_place == 2 || units_place == 4 || units_place == 5 || units_place == 7 || units_place == 9)
        {
            cout<<"hon";
        }
        else if(units_place == 0 || units_place == 1 || units_place == 6 || units_place == 8)
        {
            cout<<"pon";
        }
        else if(units_place == 3)
        {
            cout<<"bon";
        }
    }
    return 0;
}
