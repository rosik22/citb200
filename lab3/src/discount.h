//
// Created by Kiril Vuchkov on 3/13/17.
//

#ifndef LAB3_DISCOUNT_H
#define LAB3_DISCOUNT_H


class Discount {
    double percentage;
public:
    Discount(double percentage);
    double apply(double amount);
};


#endif //LAB3_DISCOUNT_H
