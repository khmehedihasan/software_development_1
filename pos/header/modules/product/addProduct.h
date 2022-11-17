#include<iostream>
#include <stdlib.h>
#include <string>
#include <ctime>
#include <ctime>
#include "../../store.h"
#include "productClass.h"
#include "../../message/successMessage.h"
#include "../../../tabulate/table.hpp"

    int currentProductId = 1;

using namespace std;
using namespace tabulate;

    void addProduct(){

        int id = currentProductId;
        string name;
        int purchasePrice;
        int salePrice;


        cout<<"Enter product name:";
        getline(cin, name);
        cout<<name;
        system ("CLS");

        cout<<"Enter product name:";
        getline(cin, name);
        cout<<name;
        system ("CLS");

        cout<<"Enter product purchase price:";
        cin>>purchasePrice;
        system ("CLS");

        cout<<"Enter product sale price:";
        cin>>salePrice;
        system ("CLS");

        time_t now = time(0);
        char* dt = ctime(&now);

        Product p1(id, name, purchasePrice, salePrice, 0, dt);
        currentProductId++;

        Table movies;
        movies.add_row({"Id", "Name", "Purchase Price", "Sale Price","In Stock", "Date"});
        movies.add_row({to_string(p1.id), p1.name, to_string(p1.purchasePrice), to_string(p1.salePrice),to_string(p1.inStock), p1.date});


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

        std::cout << movies << std::endl;


        successMessage("Product added successfully.");


    }
