#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    const char *colour[] = { "Blue", "Red", "Orange", "Yellow" };
    double price[] = {100.00,29.00,11.89,19.99};
 
        cout<<"Enter item code: ";
        cin>>n;
        cout << "ITEM: "<< colour[n] << "\n";
        cout << "PRICE: RM" << price[n] << "\n";

    return 0;
}
