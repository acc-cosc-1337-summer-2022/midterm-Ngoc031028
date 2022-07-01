#include <iostream>
#include <string>
#include "question4.h"

using namespace std;
int main()
{
    string cont = "Y";
    int wingets_sold;
    int earned_points;

    // loop until user opts out
    while(cont == "Y" || cont=="y")
    {
        cout<<"\nEnter the number of wingets sold: ";
        cin>>wingets_sold;

        //Validate for correct input
        while (wingets_sold <=0) 
        {

            cout<<"Invalid value! it must be a positive integer. Please re-enter: ";
            cin>> wingets_sold;
        }

        earned_points = get_earned_points(wingets_sold);

        cout<<"Point earned " <<earned_points<<"\n"; 
        cout<<"Continue? (y/n)";
        cin>>cont;
    }

    return 0;
}