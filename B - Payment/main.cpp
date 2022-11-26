#include <iostream>

using namespace std;

int main()
{
    float n_yen_price = 0;
    float change = 0;
    cin>>n_yen_price;

    change = n_yen_price/1000;
    change = change - static_cast<int>(change);
   if(change ==0.0)
   {
       cout<<0;
   }
   else if(change > 0.0)
   {
        change = change*1000;
        cout<<1000-change;
   }

    return 0;
}
