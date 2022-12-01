
#include<iostream>
#include "../../../tabulate/table.hpp"

    using namespace std;
    using namespace tabulate;

        void deleteCustomer(){

        viewCustomer();
        int id;
        cout<< "Enter customer id:";
        cin>>id;
        system ("CLS");

        customers *dataFCDL = startC;
        customers *dataFCDL2;
        customers *dataFCDL3;

        if(startC->id == id && startC->next == NULL){
            free(startC);
            startC = NULL;
            successMessage("Customer delete successfully.");
        }else{
            if(startC->id == id ){
                free(startC);
                startC = dataFCDL->next;
                successMessage("Customer delete successfully.");
            }else{

                while(dataFCDL != NULL){
                    if(dataFCDL->next->id == id){
                        if(dataFCDL->next->next == NULL){
                            dataFCDL2 = dataFCDL->next->next;
                            free(dataFCDL2);
                            dataFCDL->next = NULL;
                            successMessage("Customer delete successfully.");
                            break;
                        }else{
                            dataFCDL2 = dataFCDL->next->next;
                            dataFCDL3 = dataFCDL->next;
                            free(dataFCDL3);
                            dataFCDL->next = dataFCDL2;
                            successMessage("Customer delete successfully.");
                            break;
                        }
                    }
                    dataFCDL = dataFCDL->next;

                }


            }

        }

    }
