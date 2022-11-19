#include <iostream>
#include "../../../tabulate/table.hpp"
using namespace std;
using namespace tabulate;

    void viewProduct(){

        products *data = start;

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
        while(data != NULL){
            n++;
            movies.add_row({to_string(data->id), data->name, to_string(data->purchasePrice), to_string(data->salePrice),to_string(data->inStock), data->date});

            data = data->next;
        }

        std::cout << movies << std::endl;
        total = "Total products: " + to_string(n);
        successMessage(total);

    }
