#include<iostream>
#include "../../../tabulate/table.hpp"

    using namespace std;
    using namespace tabulate;

        void deleteSupplier(){

        viewSupplier();
        int id;
        cout<< "Enter supplier id:";
        cin>>id;
        system ("CLS");

        suppliers *dataFSDL = startS;
        suppliers *dataFSDL2;
        suppliers *dataFSDL3;

        if(startS->id == id && startS->next == NULL){
            free(startS);
            startS = NULL;
            successMessage("Supplier delete successfully.");
        }else{
            if(startS->id == id ){
                free(startS);
                startS = dataFSDL->next;
                successMessage("Supplier delete successfully.");
            }else{

                while(dataFSDL != NULL){
                    if(dataFSDL->next->id == id){
                        if(dataFSDL->next->next == NULL){
                            dataFSDL2 = dataFSDL->next->next;
                            free(dataFSDL2);
                            dataFSDL->next = NULL;
                            successMessage("Supplier delete successfully.");
                            break;
                        }else{
                            dataFSDL2 = dataFSDL->next->next;
                            dataFSDL3 = dataFSDL->next;
                            free(dataFSDL3);
                            dataFSDL->next = dataFSDL2;
                            successMessage("Supplier delete successfully.");
                            break;
                        }
                    }
                    dataFSDL = dataFSDL->next;
                }

            }
        /*
            while(dataFSDL != NULL){
                if(dataFSDL->id == id){
                    return(dataFSDL);
                }
                dataFSDL = dataFSDL->next;
            }

            */
        }

    }
