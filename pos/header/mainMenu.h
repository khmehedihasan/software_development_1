#include<iostream>
#include <stdlib.h>
#include "../tabulate/table.hpp"
using namespace tabulate;
using namespace std;



    int mainMenu(){

        int option;

        Table universal_constants;

        universal_constants.add_row({"Please select an option:"});
        universal_constants.add_row({"Product 1"});
        universal_constants.add_row({"Customer 2"});
        universal_constants.add_row({"Stock 3"});

        universal_constants.format()
            .font_style({FontStyle::bold})
            .border_top(" ")
            .border_bottom(" ")
            .border_left(" ")
            .border_right(" ")
            .corner(" ");

        universal_constants[0].format()
            .padding_top(1)
            .padding_bottom(1)
            .font_align(FontAlign::center)
            .font_style({FontStyle::bold})
            .width(60)
            .font_background_color(Color::magenta);



        universal_constants[1].format()
            .padding_top(1)
            .padding_bottom(1)
            .font_align(FontAlign::center)
            .font_style({FontStyle::bold})
            .font_background_color(Color::green);

        universal_constants[2].format()
            .padding_top(1)
            .padding_bottom(1)
            .font_align(FontAlign::center)
            .font_style({FontStyle::underline})
            .font_style({FontStyle::bold})
            .font_background_color(Color::cyan);

        universal_constants[3].format()
            .padding_top(1)
            .padding_bottom(1)
            .font_align(FontAlign::center)
            .font_style({FontStyle::bold})
            .width(60)
            .font_background_color(Color::blue);

        std::cout << universal_constants << std::endl;

        cout<<"\t\t\t\t";

        cin>>option;

        system ("CLS");

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
