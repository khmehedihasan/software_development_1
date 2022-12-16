
#include <iostream>
#include "../../../tabulate/table.hpp"
using namespace std;
using namespace tabulate;

    void viewSupplier(){

        suppliers *dataS = startS;

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
        while(dataS != NULL){
            n++;
            movies.add_row({to_string(dataS->id), dataS->name, dataS->email, dataS->phone, dataS->address, dataS->date});

            dataS = dataS->next;
        }

        std::cout << movies << std::endl;
        total = "Total suppliers: " + to_string(n);
        successMessage(total);

    }

