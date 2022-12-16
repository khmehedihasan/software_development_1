
#include<iostream>
#include <string>
#include<stdlib.h>

using namespace std;

    string name;

    struct Product{
        int id;
        int purchasePrice;
        int salePrice;
        int inStock;
        string date;
        string name;
        struct Product *next;
    };

    typedef struct Product products;

    products *start = NULL;

