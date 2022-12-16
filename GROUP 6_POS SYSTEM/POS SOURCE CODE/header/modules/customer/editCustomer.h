
#include<iostream>
#include "../../../tabulate/table.hpp"

    using namespace std;
    using namespace tabulate;

    void editCustomer(){
        int customerId;

        viewCustomer();

        cout<<"Enter a customer id : ";
        cin>>customerId;
        system ("CLS");

        customers* EC = findCustomer(customerId);

            cout<<"Current customer name : ->[ " <<EC->name <<" ]" <<endl;
            string nam;
            cout<<"Enter customer name:";
            getline(cin, nam);
            getline(cin, nam);
            EC->name = nam;
            system ("CLS");

            cout<<"Current customer email : ->[ " <<EC->email <<" ]" <<endl;
            cout<<"Enter customer email: ";
            string email;
            getline(cin, email);
            EC->email = email;
            system ("CLS");

            cout<<"Current customer phone : ->[ " <<EC->phone <<" ]" <<endl;
            cout<<"Enter customer phone: ";
            string phone;
            getline(cin, phone);
            EC->phone = phone;
            system ("CLS");

            cout<<"Current customer address : ->[ " <<EC->address <<" ]" <<endl;
            cout<<"Enter customer address: ";
            string address;
            getline(cin, address);
            EC->address = address;
            system ("CLS");

        Table movies;
        movies.add_row({"Id", "Name", "Email", "phone", "Address", "Date"});
        movies.add_row({to_string(EC->id), EC->name, EC->email, EC->phone, EC->address, EC->date});

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
        successMessage("Customer update successfully.");

    }
