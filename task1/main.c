//
//  main.c
//  task1
//
//  Created by YURII on 10.02.15.
//  Copyright (c) 2015 YURII. All rights reserved.
//

#include "test_divider.h"
#include "divider.h"
#include "stdlib.h"

int main(int argc, const char * argv[]) {

    printf("Hello, World!\n");
    divide_by_something(100);
    
    for (int i = 0; i < 1000; i++){
        printf("Iteration %d \t",i);
        divide_by_something(i);
        printf("\n");
    }
    
    test_divide_by();
    test_divide_by_something();
    return 0;
}

