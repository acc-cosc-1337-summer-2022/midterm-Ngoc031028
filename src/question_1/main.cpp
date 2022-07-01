#include <iostream>
#include<stdio.h> 
#include <time.h>
#include "question1.h"

using namespace std;

int main()
{
    srand(time(NULL));   
    Die die;
    string cont = "Y";

    while(cont == "Y" || cont == "y"){
       cout<<"\n" <<die.roll()<<"\n";
       cout<<"Continue? (y/n) ";
       cin>>cont;
    }
    
    return 0;
}