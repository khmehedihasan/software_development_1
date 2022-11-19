
#include<iostream>
#include <string>
#include<stdlib.h>

using namespace std;

    string name;

    struct Product{
        int id;
        string name;
        int purchasePrice;
        int salePrice;
        int inStock;
        string date;
        struct Product *next;
    };

    typedef struct Product products;

    products *start = NULL;



/*
    class Product{
        public:
            int id;
            string name;
            int purchasePrice;
            int salePrice;
            int inStock;
            string date;

            Product(int id1, string name1, int purchasePrice1, int salePrice1, int inStock1, string date1){
                id = id1;
                name = name1;
                purchasePrice = purchasePrice1;
                salePrice = salePrice1;
                inStock = inStock1;
                date = date1;
            }

    };

    */
