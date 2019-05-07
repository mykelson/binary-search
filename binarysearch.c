// Binary search through an array of strings

#include <stdio.h>
#include <string.h>

char * binary_search(char* array[], char* keyword, int size);

int main(void)
{
    int store_quantity = 10;
    char* order;
    char *store[10] = {"Bigi", "coke", "fanta", "limca", "maltina", "nutri milk", "sprite", "team", "pepsi", "viju milk"};
    printf("What is order please?");
    scanf("%s", order);
    binary_search(store, order, store_quantity);
}

// The function that implements the binary search.
char * binary_search(char* array[], char* keyword, int size)
{
    int start, middle, end;
    start = 0;
    end = size - 1;
    middle = (start + end)/2;

    while(start <= end){
        if(strcmp(array[middle], keyword) == 0)    
            return (char *)printf("Here is your %s", array[middle]);
        else if (array[middle][0] < keyword[0])        
            start = middle + 1;        
        else         
            end = middle - 1;
        middle = (start + end)/2;
    }
    if (start > end)
        return (char*)printf("Not available at the moment, check back later for your %s", keyword);
}