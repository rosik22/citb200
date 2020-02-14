#ifndef LAB1_PRODUCT_H
#define LAB1_PRODUCT_H

#include <string>

using std::string;

class Product {
    string name;
    double price;
public:
    Product(const string &name, double price);
    Product(const Product &other);
    const string &getName() const;
    double getPrice() const;
};


#endif //LAB1_PRODUCT_H
