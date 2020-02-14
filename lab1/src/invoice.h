#ifndef LAB1_INVOICE_H
#define LAB1_INVOICE_H


#include <vector>
#include "product.h"
#include "item.h"

using std::vector;

class Invoice {
    vector<Item> items;
public:
    void add(const Product &product, int qty);
    int count() const;
    const Product &productAt(int idx) const;
    int quantityAt(int idx) const;
    double totalAt(int idx) const;
    double subtotal() const;
    double taxes() const;
    double total() const;
};


#endif //LAB1_INVOICE_H
