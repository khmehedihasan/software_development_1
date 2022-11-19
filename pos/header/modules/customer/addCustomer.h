#include<iostream>
#include <stdlib.h>
#include <string>
#include <ctime>
#include "../../store.h"
#include "customerClass.h"
#include "../../../tabulate/table.hpp"

    int currentCustomerId = 1;

    using namespace std;
    using namespace tabulate;


        customers *getCNode(){
            customers* newNode;

            newNode = (customers*) malloc(sizeof(customers));

            string nam;
            cout<<"Enter customer name:";
            getline(cin, nam);
            getline(cin, nam);
            newNode->name = nam;
            system ("CLS");


            cout<<"Enter customer email:";
            string email;
            getline(cin, email);
            newNode->email = email;
            system ("CLS");

            cout<<"Enter customer phone:";
            string phone;
            getline(cin, phone);
            newNode->phone = phone;
            system ("CLS");

            cout<<"Enter customer address:";
            string address;
            getline(cin, address);
            newNode->address = address;
            system ("CLS");

            time_t now = time(0);
            char* dt = ctime(&now);
            newNode->date = dt;
            newNode->id = currentCustomerId;


            newNode->next = NULL;

            return newNode;

        }

    void addCustomer(){


        customers *newNode;
        customers *temp;
        newNode = getCNode();
        currentCustomerId++;

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

            startC = newNode;
            std::cout << movies << std::endl;
            successMessage("Customer added successfully.");

        }else{

            temp = startC;
            while(temp->next != NULL){
                temp = temp->next;
            }

            temp->next = newNode;
            std::cout << movies << std::endl;
            successMessage("Customer added successfully.");
        }


    }
