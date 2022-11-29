#include <iostream>
#include "../../../tabulate/table.hpp"
using namespace std;
using namespace tabulate;

    void viewSale(){

        saleProducts *dataPS1 = startPS;

        Table movies;
        movies.add_row({"Id", "PId", "PName", "CId", "CName", "Sale Price", "Quantity", "Total Price", "Date"});

        for (size_t i = 0; i < 7; ++i) {
            movies[0][i].format()
                .font_color(Color::yellow)
                .font_align(FontAlign::center)
                .font_style({FontStyle::bold});
        }

        int nn = 0;
       string total ;
        while(dataPS1 != NULL){
            nn++;
            movies.add_row({to_string(dataPS1->id), to_string(dataPS1->productId), dataPS1->productName, to_string(dataPS1->customerId), dataPS1->customerName, to_string(dataPS1->salePrice), to_string(dataPS1->quantity), to_string(dataPS1->totalPrice), dataPS1->date});
            //cout<<dataPS1->customerName <<"--";
            dataPS1 = dataPS1->next;
        }

        std::cout << movies << std::endl;
        total = "Total invoices: " + to_string(nn);
        successMessage(total);

    }

