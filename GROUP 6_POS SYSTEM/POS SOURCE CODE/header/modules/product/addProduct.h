#include<iostream>
#include <stdlib.h>
#include <string>
#include <ctime>
#include "../../store.h"
#include "productClass.h"
#include "../../message/successMessage.h"
#include "../../../tabulate/table.hpp"

    int currentProductId = 1;

    using namespace std;
    using namespace tabulate;


        products *getNode(){
            products* newNode;

            newNode = (products*) malloc(sizeof(products));

            string name;
            cout<<"Enter product name:";
            getline(cin, name);
            getline(cin, name);
            newNode->name = name;
            system ("CLS");

            cout<<"Enter product purchase price:";
            int purchasePrice;
            cin>>purchasePrice;
            newNode->purchasePrice = purchasePrice;
            system ("CLS");

            cout<<"Enter product sale price:";
            int salePrice;
            cin>>salePrice;
            newNode->salePrice  = salePrice;
            system ("CLS");

            time_t now = time(0);
            char* dt = ctime(&now);
            newNode->date = dt;
            newNode->id = currentProductId;
            newNode->inStock = 0;


            newNode->next = NULL;

            return newNode;

        }

    void addProduct(){


        products *newNode;
        products *temp;
        newNode = getNode();
        currentProductId++;

        Table movies;
        movies.add_row({"Id", "Name", "Purchase Price", "Sale Price","In Stock", "Date"});
        movies.add_row({to_string(newNode->id), newNode->name, to_string(newNode->purchasePrice), to_string(newNode->salePrice),to_string(newNode->inStock), newNode->date});

        for (size_t i = 0; i < 6; ++i) {
            movies[0][i].format()
                .font_color(Color::yellow)
                .font_align(FontAlign::center)
                .font_style({FontStyle::bold});

                movies[1][i].format()
                .font_color(Color::cyan)
                .font_align(FontAlign::center)
                .font_style({FontStyle::bold});
        }


        if(start == NULL){

            start = newNode;
            std::cout << movies << std::endl;
            successMessage("Product added successfully.");

        }else{

            temp = start;
            while(temp->next != NULL){
                temp = temp->next;
            }

            temp->next = newNode;
            std::cout << movies << std::endl;
            successMessage("Product added successfully.");
        }


    }
