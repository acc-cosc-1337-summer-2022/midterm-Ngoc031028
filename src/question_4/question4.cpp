//
bool test_config()
{
    return true;
}

int get_earned_points(int widgets_sold){

    if (widgets_sold>=1 && widgets_sold<=5){
        return widgets_sold;
    }
    else if (widgets_sold>=6 && widgets_sold<=10){
        return 5*widgets_sold;
    }
    else if (widgets_sold>=11 && widgets_sold<=15)
    {
        return 10*widgets_sold;
    }
    else //widgets_sold >= 16
    {
        return 15*widgets_sold;

    }
}