bool test_config();
const double tax_rate = .08;

//header guards
#ifndef RECIEPT_H
#define RECIEPT_H

class Receipt{
public:
    
    Receipt(double meal_price, double tip_rate) : price{meal_price}, gratuity{meal_price*tip_rate/100}, tax{meal_price*tax_rate} {};
    
    double calculate_tax();
    double calculate_gratuity();
    void display_receipt();

private:
    const double tax;
    double gratuity;
    double price;

};

#endif