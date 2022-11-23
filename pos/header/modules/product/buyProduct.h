#include<iostream>
#include <stdlib.h>
#include "findProduct.h"
#include "../supplier/findSupplier.h"
#include "../supplier/viewSupplier.h"
#include "../../../tabulate/table.hpp"

using namespace std;
    using namespace tabulate;


    int currentBuyProductId = 1;

    struct buyProductList{
        int id;
        int productId;
        int supplierId;
        string productName;
        string supplierName;
        int purchasePrice;
        int totalPrice;
        int quantity;
        string date;
        struct buyProductList *next;
    };

    typedef struct buyProductList buyProducts;

    buyProducts *startB = NULL;


    buyProducts *getBNode(){

        buyProducts* newNode;
        newNode = (buyProducts*) malloc(sizeof(buyProducts));


        int productId;
        viewProduct();
        cout<<"Enter product id: ";
        cin>>productId;
        products* p = findProduct(productId);
        newNode->productId = p->id;
        newNode->productName = p->name;
        newNode->purchasePrice = p->purchasePrice;
        system ("CLS");



        int supplierId;
        viewSupplier();
        cout<<"Enter supplier id: ";
        cin>>supplierId;
        suppliers* s = findSupplier(1);
        newNode->supplierId = s->id;
        newNode->supplierName = s->name;
        system ("CLS");

        cout<<"Enter product quantity: ";
        int quantity;
        cin>>quantity;
        newNode->quantity  = quantity;
        p->inStock = p->inStock + quantity;
        system ("CLS");

        time_t now = time(0);
        char* dt = ctime(&now);
        newNode->date = dt;
        newNode->id = currentBuyProductId;
        newNode->totalPrice = quantity * p->purchasePrice;


        newNode->next = NULL;

        return newNode;

    }



    void buyProduct(){

        buyProducts *newNode;
        buyProducts *temp;
        newNode =  getBNode();
        currentBuyProductId++;

        Table movies;
        movies.add_row({"Id", "PId", "PName", "SId", "SName", "Purchase Price", "Quantity", "Total Price", "Date"});
        movies.add_row({to_string(newNode->id), to_string(newNode->productId), newNode->productName, to_string(newNode->supplierId), newNode->supplierName, to_string(newNode->purchasePrice), to_string(newNode->quantity), to_string(newNode->totalPrice), newNode->date});

        for (size_t i = 0; i < 7; ++i) {
            movies[0][i].format()
                .font_color(Color::yellow)
                .font_align(FontAlign::center)
                .font_style({FontStyle::bold});

                movies[1][i].format()
                .font_color(Color::cyan)
                .font_align(FontAlign::center)
                .font_style({FontStyle::bold});
        }


        if(startB == NULL){

            startB = newNode;
            std::cout << movies << std::endl;
            successMessage("Product buy successfully.");

        }else{

            temp = startB;
            while(temp->next != NULL){
                temp = temp->next;
            }

            temp->next = newNode;
            std::cout << movies << std::endl;
            successMessage("Product buy successfully.");
        }


    }
