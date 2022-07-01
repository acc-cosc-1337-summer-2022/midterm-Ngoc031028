#include "question2.h"


bool test_config()
{
    return true;
}

double get_sales_commission(double sales){
 
    if (sales<500)
    {
        return sales*5/100;
    }
    else if (sales>=500 && sales <1000)
    {
        return sales*6/100;
    }
    else if (sales>=1000 && sales <1500)
    {
        return sales*7/100;
    }
   else// sales >=1500
    {
        return sales*8/100;
    }
       
}