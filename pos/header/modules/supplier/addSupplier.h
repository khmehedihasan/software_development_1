
#include<iostream>
#include <stdlib.h>
#include <string>
#include <ctime>
#include "../../store.h"
#include "../../../tabulate/table.hpp"

    int currentSupplierId = 1;

    using namespace std;
    using namespace tabulate;


        suppliers *getSNode(){
            suppliers* newNode;

            newNode = (suppliers*) malloc(sizeof(suppliers));

            string nam;
            cout<<"Enter supplier name:";
            getline(cin, nam);
            getline(cin, nam);
            newNode->name = nam;
            system ("CLS");


            cout<<"Enter supplier email:";
            string email;
            getline(cin, email);
            newNode->email = email;
            system ("CLS");

            cout<<"Enter supplier phone:";
            string phone;
            getline(cin, phone);
            newNode->phone = phone;
            system ("CLS");

            cout<<"Enter supplier address:";
            string address;
            getline(cin, address);
            newNode->address = address;
            system ("CLS");

            time_t now = time(0);
            char* dt = ctime(&now);
            newNode->date = dt;
            newNode->id = currentSupplierId;


            newNode->next = NULL;

            return newNode;

        }

    void addSupplier(){


        suppliers *newNode;
        suppliers *temp;
        newNode = getSNode();
        currentSupplierId++;

        Table movies;
        movies.add_row({"Id", "Name", "Email", "phone","Address", "Date"});
        movies.add_row({to_string(newNode->id), newNode->name, newNode->email, newNode->phone, newNode->address, newNode->date});

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

            startS = newNode;
            std::cout << movies << std::endl;
            successMessage("Supplier added successfully.");

        }else{

            temp = startS;
            while(temp->next != NULL){
                temp = temp->next;
            }

            temp->next = newNode;
            std::cout << movies << std::endl;
            successMessage("Supplier added successfully.");
        }


    }
