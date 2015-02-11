//
//  divider.c
//  task1
//
//  Created by YURII on 10.02.15.
//  Copyright (c) 2015 YURII. All rights reserved.
//

#include "divider.h"
#include "stdlib.h"

const char say_mama[] = "MAMA\n";
const char say_papa[] = "PAPA\n";
const char say_mama_papa[] = "MAMAPAPA\n";

int divide_by_something(int number){
    divide_by(number, 3, say_mama);
    divide_by(number, 5, say_papa);
    divide_by(number, 15, say_mama_papa);
    return 0;
}

int divide_by(int number, int divider, char message[]) {
    
    if (number % divider == 0) {
        printf("%s",message);
        return 0;
    } else {
        return 1;
    }
}

char * NewDivideBy(int number, int divider, char message[]) {
    
    int count = 9;
    char *values = calloc(count, sizeof(*values));
    
    int size = 4;
    if (message[4] == "P") {
        size = 8;
    }
    
    for (int index = 0; index < size; index++) {
        values[index] = message[index];
    }
    
    if (number % divider == 0) {
        printf("%s",values);
        return values;
    } else {
        return "NONE";
    }
}

int NEWDivideBySomething(int number){
    
    char *mes = NewDivideBy(number, 3, say_mama);
    free(mes);
    
    return 0;
}