

#include<iostream>
#include <stdlib.h>
#include "../../tabulate/table.hpp"
#include "../modules/customer/addCustomer.h"
//#include "../modules/customer/viewCustomer.h"

using namespace tabulate;
using namespace std;



    int customerMenu(){

        int option;

        Table universal_constants;

        universal_constants.add_row({"","Please select an option:"});
        universal_constants.add_row({"","Add Customer 1"});
        universal_constants.add_row({"","Edit Customer 2"});
        universal_constants.add_row({"","Delete Customer 3"});
        universal_constants.add_row({"","View Customer 4"});
        universal_constants.add_row({"","Customer Invoices 5"});
        universal_constants.add_row({"","BACK 0"});

        universal_constants.format()
            .font_style({FontStyle::bold})
            .border_top(" ")
            .border_bottom(" ")
            .border_left(" ")
            .border_right(" ")
            .corner(" ");

        universal_constants[0][0].format()
            .padding_top(1)
            .padding_bottom(1)
            .font_align(FontAlign::center)
            .font_style({FontStyle::bold})
            .width(30);
        universal_constants[0][1].format()
            .padding_top(1)
            .padding_bottom(1)
            .font_align(FontAlign::center)
            .font_style({FontStyle::bold})
            .width(60)
            .font_background_color(Color::magenta);

        universal_constants[1][0].format()
            .padding_top(1)
            .padding_bottom(1)
            .font_align(FontAlign::center)
            .font_style({FontStyle::bold})
            .width(30);
        universal_constants[1][1].format()
            .padding_top(1)
            .padding_bottom(1)
            .font_align(FontAlign::center)
            .font_style({FontStyle::bold})
            .font_background_color(Color::green);

        universal_constants[2][0].format()
            .padding_top(1)
            .padding_bottom(1)
            .font_align(FontAlign::center)
            .font_style({FontStyle::bold})
            .width(30);
        universal_constants[2][1].format()
            .padding_top(1)
            .padding_bottom(1)
            .font_align(FontAlign::center)
            .font_style({FontStyle::underline})
            .font_style({FontStyle::bold})
            .font_background_color(Color::cyan);

        universal_constants[3][0].format()
            .padding_top(1)
            .padding_bottom(1)
            .font_align(FontAlign::center)
            .font_style({FontStyle::bold})
            .width(30);
        universal_constants[3][1].format()
            .padding_top(1)
            .padding_bottom(1)
            .font_align(FontAlign::center)
            .font_style({FontStyle::bold})
            .width(60)
            .font_background_color(Color::blue);

        universal_constants[4][0].format()
            .padding_top(1)
            .padding_bottom(1)
            .font_align(FontAlign::center)
            .font_style({FontStyle::bold})
            .width(30);
        universal_constants[4][1].format()
            .padding_top(1)
            .padding_bottom(1)
            .font_align(FontAlign::center)
            .font_style({FontStyle::bold})
            .width(60)
            .font_background_color(Color::yellow);

        universal_constants[5][0].format()
            .padding_top(1)
            .padding_bottom(1)
            .font_align(FontAlign::center)
            .font_style({FontStyle::bold})
            .width(30);
        universal_constants[5][1].format()
            .padding_top(1)
            .padding_bottom(1)
            .font_align(FontAlign::center)
            .font_style({FontStyle::bold})
            .width(60)
            .font_background_color(Color::red);

        universal_constants[6][0].format()
            .padding_top(1)
            .padding_bottom(1)
            .font_align(FontAlign::center)
            .font_style({FontStyle::bold})
            .width(30);
        universal_constants[6][1].format()
            .padding_top(1)
            .padding_bottom(1)
            .font_align(FontAlign::center)
            .font_style({FontStyle::bold})
            .width(60)
            .font_background_color(Color::cyan);




        std::cout << universal_constants << std::endl;

        cout<<"\t\t\t\t\t\t\t";

        cin>>option;

        system ("CLS");

        switch(option){
            case 1:
                addCustomer();
                break;
            case 2:
                cout<<"2 selected";
                 break;
            case 3:
                cout<<"3 selected";
                 break;
            case 4:
                viewCustomer();
                break;
            case 5:
                cout<<"5 selected";
                 break;
            case 0:
                  return 10000000;
                break;

            default:
                cout<<"selected";
        }


        return option;
    }


