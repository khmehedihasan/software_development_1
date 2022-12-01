


#include<iostream>
#include "../../../tabulate/table.hpp"

    using namespace std;
    using namespace tabulate;

        void deleteProduct(){

        viewProduct();
        int id;
        cout<< "Enter product id:";
        cin>>id;
        system ("CLS");

        products *dataFPDL = start;
        products *dataFPDL2;
        products *dataFPDL3;

        if(start->id == id && start->next == NULL){
            free(start);
            start = NULL;
            successMessage("Product delete successfully.");
        }else{
            if(start->id == id ){
                free(start);
                start = dataFPDL->next;
                successMessage("Product delete successfully.");
            }else{

                while(dataFPDL != NULL){
                    if(dataFPDL->next->id == id){
                        if(dataFPDL->next->next == NULL){
                            dataFPDL2 = dataFPDL->next->next;
                            free(dataFPDL2);
                            dataFPDL->next = NULL;
                            successMessage("Product delete successfully.");
                            break;
                        }else{
                            dataFPDL2 = dataFPDL->next->next;
                            dataFPDL3 = dataFPDL->next;
                            free(dataFPDL3);
                            dataFPDL->next = dataFPDL2;
                            successMessage("Product0 delete successfully.");
                            break;
                        }
                    }
                    dataFPDL = dataFPDL->next;

                }


            }

        }

    }
