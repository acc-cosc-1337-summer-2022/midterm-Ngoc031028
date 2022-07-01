#include "question1.h"
#include <cstdlib>

bool test_config()
{
    return true;
}

int Die::roll() 
{   
    return  rand()%6 +1;
}