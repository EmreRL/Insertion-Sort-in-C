#include <stdio.h>

void insertion_sort(int temp[], int n){
    int j, copy;
    for(int k = 1; k < n; k++) {
        j = k-1;
        copy = temp[k];
        while(j >= 0 && temp[j] > copy) {
            temp[j+1] = temp[j];
            j--;
        }
        temp[j+1] = copy;
    }
}

void show_array(int temp[], int n){
    for(int i = 0; i < n ; i++){
        printf("\n(%d) Value: %d", i+1, temp[i]);
    }
}

int main(int argc, char *argv[]) {
    int num, option, control = 0;
    printf("Please enter the total count of how many numbers you will put in: ");
    scanf(" %d", &num);
    int values[num];
    while(1) {
        printf("\n(1) Create Array\n(2) Sort Array \n(3) Show Array\n(4) Exit");
        scanf(" %d", &option);
        if(option == 1) {
            for(int i = 0; i < num; i++){
                printf("\n(%d) Value: ", i+1);
                scanf(" %d", &values[i]);
            }
            control = 1;
        }
        if(option == 2) {
            if(control == 1) {
                insertion_sort(values, num);
                printf("\n***Sorting is Done !***");
            }else {
                printf("\n(!) Please create the array first !");
            }
        }
        if(option == 3) {
            if(control == 1) {
                show_array(values, num);
                printf("\n***Showing is Done***");
            }else {
                printf("\n(!) Please create the array first !");
            }
        }
        if(option == 4) {
            break;
        }
    }
}