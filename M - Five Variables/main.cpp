#include <iostream>

using namespace std;

int main()
{
    int arr[5];
    for(int i = 1 ; i <= 5 ; i++)
    {
        cin>>arr[i];
        if(arr[i] != i)
        {
            cout<<i;
            break;
        }
    }
    return 0;
}
