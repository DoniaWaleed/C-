#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    int m = 0;
    int even_counter = 0;
    int odd_counter = 0;
    cin>>n>>m;

    char arr[n+m];
    for(int i = 0 ; i < n+m ; i++)
    {
        if(i < n)
        {
            arr[i] = 'e';
        }
        else
        {
            arr[i] = 'o';
        }
    }

    for(int i = 0 ; i< n+m ; i++)
    {
        for(int j = i+1 ; j < n+m ; j++)
        {
            if((arr[i] == 'e' && arr[j] == 'e') || (arr[i] == 'o' && arr[j] == 'o'))
            {
                even_counter++;
            }
            else if((arr[i] == 'e' && arr[j] == 'o') || (arr[i] == 'o' && arr[j] == 'e'))
            {
                odd_counter++;
            }
        }
    }
    cout<<"even_counter: "<<even_counter<<endl;
    cout<<"odd_counter: "<<odd_counter<<endl;
    return 0;
}
