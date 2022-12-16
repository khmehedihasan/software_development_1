#include <iostream>
#include "../../../tabulate/table.hpp"
using namespace std;
using namespace tabulate;

    void viewCustomer(){

        customers *dataC = startC;

        Table movies;
        movies.add_row({"Id", "Name", "Email", "Phone","Address", "Date"});

        for (size_t i = 0; i < 6; ++i) {
            movies[0][i].format()
                .font_color(Color::yellow)
                .font_align(FontAlign::center)
                .font_style({FontStyle::bold});

        }

        int n = 0;
        string total ;
        while(dataC != NULL){
            n++;
            movies.add_row({to_string(dataC->id), dataC->name, dataC->email, dataC->phone, dataC->address, dataC->date});

            dataC = dataC->next;
        }

        std::cout << movies << std::endl;
        total = "Total customers: " + to_string(n);
        successMessage(total);

    }

