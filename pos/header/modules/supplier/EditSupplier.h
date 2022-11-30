
#include<iostream>
#include "../../../tabulate/table.hpp"

    using namespace std;
    using namespace tabulate;

    void editSupplier(){
        int supplierId;

        viewSupplier();

        cout<<"Enter a supplier id : ";
        cin>>supplierId;
        system ("CLS");

        suppliers* ES = findSupplier(supplierId);

            cout<<"Current supplier name : ->[ " <<ES->name <<" ]" <<endl;
            string nam;
            cout<<"Enter supplier name:";
            getline(cin, nam);
            getline(cin, nam);
            ES->name = nam;
            system ("CLS");

            cout<<"Current supplier email : ->[ " <<ES->email <<" ]" <<endl;
            cout<<"Enter supplier email:";
            string email;
            getline(cin, email);
            ES->email = email;
            system ("CLS");

            cout<<"Current supplier phone : ->[ " <<ES->phone <<" ]" <<endl;
            cout<<"Enter supplier phone:";
            string phone;
            getline(cin, phone);
            ES->phone = phone;
            system ("CLS");

            cout<<"Current supplier address : ->[ " <<ES->address <<" ]" <<endl;
            cout<<"Enter supplier address:";
            string address;
            getline(cin, address);
            ES->address = address;
            system ("CLS");

        Table movies;
        movies.add_row({"Id", "Name", "Email", "phone", "Address", "Date"});
        movies.add_row({to_string(ES->id), ES->name, ES->email, ES->phone, ES->address, ES->date});

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
        successMessage("Supplier update successfully.");

    }
