#include <iostream>
#include "question3.h"

using namespace std;

bool test_config()
{
    return true;
}

double Receipt::calculate_tax()
{
      return tax;
}
double Receipt::calculate_gratuity()
{  
   return gratuity;
}

void Receipt::display_receipt() 
{    
    double total_amount = price + calculate_tax() + calculate_gratuity();
    
    cout<<"\nRECEIPT\n";
    cout<<"Meal amount: " << price <<"\n";
    cout<<"Tax: " << calculate_tax() <<"\n";
    cout<<"Gratuity: " << calculate_gratuity() <<"\n";
    cout<<"Total: " << total_amount << "\n";    
}
