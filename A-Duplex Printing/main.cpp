#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cin>>n;
    int no_page = n/2;
    no_page += n%2;
    cout<<no_page;

    return 0;
}
