
#include<iostream>
using namespace std;

    products* findProduct(int id){
        products *data = start;

        while(data != NULL){
            if(data->id == id){
                return(data);
            }
            data = data->next;
        }

    }
