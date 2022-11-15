
#include<iostream>
#include<stdlib.h>
#include "../../tabulate/table.hpp"
#include "productMenu.h"
#include "customerMenu.h"
#include "supplierMenu.h"
using namespace tabulate;
using namespace std;



    int mainMenu(){

        int option;

        Table universal_constants;

        universal_constants.add_row({"","Please select an option:"});
        universal_constants.add_row({"","Product 1"});
        universal_constants.add_row({"","Customer 2"});
        universal_constants.add_row({"","Supplier 3"});
        universal_constants.add_row({"","Stock 4"});
        universal_constants.add_row({"","Invoices 5"});
        universal_constants.add_row({"","Profit 6"});
        universal_constants.add_row({"","EXIT 7"});

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

        universal_constants[7][0].format()
            .padding_top(1)
            .padding_bottom(1)
            .font_align(FontAlign::center)
            .font_style({FontStyle::bold})
            .width(30);
        universal_constants[7][1].format()
            .padding_top(1)
            .padding_bottom(1)
            .font_align(FontAlign::center)
            .font_style({FontStyle::bold})
            .width(60)
            .font_background_color(Color::red);



        std::cout << universal_constants << std::endl;

        cout<<"\t\t\t\t\t\t\t";

        cin>>option;

        system ("CLS");

        switch(option){
            int value;
            case 1:
                while(1){
                  value = porductMenu();
                  if(value == 0){
                    break;
                  }
                }
                break;
            case 2:
                while(1){
                  value = customerMenu();
                  if(value == 0){
                    break;
                  }
                }
                 break;
            case 3:
                while(1){
                  value = supplierMenu();
                  if(value == 0){
                    break;
                  }
                }
                 break;
            case 4:
                cout<<"4 selected";
                 break;
            case 5:
                cout<<"5 selected";
                 break;
            case 6:
                cout<<"6 selected";
                 break;
            case 7:
                return 0;
                 break;

            default:
                cout<<"selected";
        }


        return option;
    }


/*
  Table colors;

  colors.add_row({"Font Color is Red", "Font Color is Blue", "Font Color is Green"});
  colors.add_row({"Everything is Red", "Everything is Blue", "Everything is Green"});
  colors.add_row({"Font Background is Red", "Font Background is Blue", "Font Background is Green"});


  colors[2][0].format()
    .font_background_color(Color::red)
    .font_style({FontStyle::bold});
  colors[2][1].format()
    .font_background_color(Color::blue)
    .font_style({FontStyle::bold});
  colors[2][2].format()
    .font_background_color(Color::green)
    .font_style({FontStyle::bold});

  std::cout << colors << std::endl;

  */
