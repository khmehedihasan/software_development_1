#include<iostream>
#include "../../../tabulate/table.hpp"

    using namespace std;
    using namespace tabulate;

    void editProduct(){
        int productId;

        viewProduct();

        cout<<"Enter a product id : ";
        cin>>productId;
        system ("CLS");

        products* EP = findProduct(productId);

        string name;
        cout<<"Current product name : ->[ " <<EP->name <<" ]" <<endl;
        cout<<"Enter product name:";
        getline(cin, name);
        getline(cin, name);
        EP->name = name;
        system ("CLS");

        cout<<"Current purchase price : ->[ " <<EP->purchasePrice <<" ]" <<endl;
        cout<<"Enter product purchase price:";
        int purchasePrice;
        cin>>purchasePrice;
        EP->purchasePrice = purchasePrice;
        system ("CLS");

        cout<<"Current sale price : ->[ " <<EP->salePrice <<" ]" <<endl;
        cout<<"Enter product sale price:";
        int salePrice;
        cin>>salePrice;
        EP->salePrice  = salePrice;
        system ("CLS");

        Table movies;
        movies.add_row({"Id", "Name", "Purchase Price", "Sale Price","In Stock", "Date"});
        movies.add_row({to_string(EP->id), EP->name, to_string(EP->purchasePrice), to_string(EP->salePrice),to_string(EP->inStock), EP->date});

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
        successMessage("Product update successfully.");

    }
