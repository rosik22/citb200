#ifndef LAB1_ITEM_H
#define LAB1_ITEM_H


#include "product.h"

class Item {
    const Product *product;
    int quantity;
public:
    Item(const Product *product, int quantity);
    Item(const Item &item);
    const Product &getProduct() const;
    int getQuantity() const;
    double total() const;
    void add (int qty);
};


#endif //LAB1_ITEM_H
