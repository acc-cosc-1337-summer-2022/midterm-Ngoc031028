#include <iostream>
#include <string>
#include "question2.h"

using namespace std;
int main()
{
    string cont = "Y";
    double sales;
    double sales_commission;

    //loop until user opts out
    while(cont == "Y" ||cont == "y")
    {
        cout<<"\nEnter a sales: ";
        cin>>sales;

        //Validate for correct input.
        while (sales <0)
        {
            cout<<"Invalid value! it must be equal or greater than zero. Please re-enter: ";
            cin>>sales;
        }

        sales_commission = get_sales_commission(sales);
        cout<<"Sales of "<< sales<< " yields a commission of: " <<sales_commission <<"\n\n";
        cout<<"Continue? (y/n) ";
        cin>>cont;   
    }

    return 0;
}