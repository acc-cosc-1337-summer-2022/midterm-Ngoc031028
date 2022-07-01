#include <iostream>
#include "question3.h"

using namespace std;
int main()
{
    double meal_price;
    double tip_rate;
    string cont = "Y";

    while(cont=="Y" || cont=="y"){
        cout<<"\nMeal amount: ";
        cin >> meal_price;

       //validate input Meal amount
        while(meal_price<=0){
            cout<<"In valid value! Meal amount must be a positive number. Please re-enter: ";
            cin>>meal_price;
        }

        cout<<"Tip rate(%): ";
        cin >> tip_rate;

        //validate input Tip rate
        while(tip_rate<0){
            cout<<"In valid value! Tip rate  must not less than zero. Please re-enter: ";
            cin>>tip_rate;
        }

        Receipt receipt(meal_price, tip_rate);
        
        receipt.display_receipt();
        cout<<"\nContinue? (y/n) ";
        cin>>cont;
    }

}