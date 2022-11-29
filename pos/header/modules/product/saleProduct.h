
#include<iostream>
#include <stdlib.h>
//#include "findProduct.h"
#include "../customer/findCustomer.h"
#include "../customer/viewCustomer.h"
#include "../../../tabulate/table.hpp"

using namespace std;
    using namespace tabulate;


    int currentSaleProductId = 1;

    struct saleProductList{
        int id;
        int productId;
        int customerId;
        int salePrice;
        int totalPrice;
        int quantity;
        string date;
        string customerName;
        string productName;
        struct saleProductList *next;
    };

    typedef struct saleProductList saleProducts;

    saleProducts *startPS = NULL;


    saleProducts *getPSNode(){

        saleProducts* newNode;
        newNode = (saleProducts*) malloc(sizeof(saleProducts));


        int productId;
        viewProduct();
        cout<<"Enter product id: ";
        cin>>productId;
        products* p2 = findProduct(productId);
        newNode->productId = p2->id;
        newNode->productName = p2->name;
        newNode->salePrice = p2->salePrice;
        system ("CLS");



        int customerId;
        viewCustomer();
        cout<<"Enter customer id: ";
        cin>>customerId;
        customers* pc = findCustomer(customerId);
        newNode->customerId = pc->id;
        newNode->customerName = pc->name;
        system ("CLS");

        cout<<"Enter product quantity: ";
        int quantity;
        cin>>quantity;
        newNode->quantity  = quantity;
        p2->inStock = p2->inStock - quantity;
        system ("CLS");

        time_t now = time(0);
        char* dt = ctime(&now);
        newNode->date = dt;
        newNode->id = currentSaleProductId;
        newNode->totalPrice = quantity * p2->salePrice;


        newNode->next = NULL;

        return newNode;

    }



    void saleProduct(){

        saleProducts *newNode;
        saleProducts *temp;
        newNode =  getPSNode();
        currentSaleProductId++;

        Table movies;
        movies.add_row({"Id", "PId", "PName", "CId", "CName", "Sale Price", "Quantity", "Total Price", "Date"});
        movies.add_row({to_string(newNode->id), to_string(newNode->productId), newNode->productName, to_string(newNode->customerId), newNode->customerName, to_string(newNode->salePrice), to_string(newNode->quantity), to_string(newNode->totalPrice), newNode->date});

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


        if(startPS == NULL){

            startPS = newNode;
            std::cout << movies << std::endl;
            successMessage("Product sale successfully.");

        }else{

            temp = startPS;
            while(temp->next != NULL){
                temp = temp->next;
            }

            temp->next = newNode;
            std::cout << movies << std::endl;
            successMessage("Product sale successfully.");
        }


    }
