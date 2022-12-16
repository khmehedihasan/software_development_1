#include <iostream>
#include "../../../tabulate/table.hpp"
using namespace std;
using namespace tabulate;

    void viewProduct(){

        products *dataP = start;

        Table movies;
        movies.add_row({"Id", "Name", "Purchase Price", "Sale Price","In Stock", "Date"});

        for (size_t i = 0; i < 6; ++i) {
            movies[0][i].format()
                .font_color(Color::yellow)
                .font_align(FontAlign::center)
                .font_style({FontStyle::bold});

        }

        int n = 0;
        string total ;
        while(dataP != NULL){
            n++;
            movies.add_row({to_string(dataP->id), dataP->name, to_string(dataP->purchasePrice), to_string(dataP->salePrice),to_string(dataP->inStock), dataP->date});

            dataP = dataP->next;
        }

        std::cout << movies << std::endl;
        total = "Total products: " + to_string(n);
        successMessage(total);

    }
