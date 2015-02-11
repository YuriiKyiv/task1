//
//  test_divider.c
//  task1
//
//  Created by YURII on 10.02.15.
//  Copyright (c) 2015 YURII. All rights reserved.
//

#include "test_divider.h"
#include <assert.h>
#include "divider.h"

const char test_message[] = "test\n";

void test_divide_by() {
    assert(0 == divide_by(3, 3, test_message));
    assert(0 == divide_by(5, 5, test_message));
    assert(0 == divide_by(15, 15, test_message));
    
    assert(1 == divide_by(4, 3, test_message));
    assert(1 == divide_by(6, 5, test_message));
    assert(1 == divide_by(16, 15, test_message));
}

void test_divide_by_something(){
    assert(0 == divide_by_something(100));
}

void NEWTestDivideBySomething(){
    
    char *mes = NewDivideBy(3, 3, "MAMA");
    assert(mes[0] == "M");
    free(mes);
    
    char *mes = NewDivideBy(3, 5, "PAPA");
    assert(mes[0] == "P");
    free(mes);
    
    char *mes = NewDivideBy(15, 15, "MAMAPAPA");
    assert(mes[4] == "P");
    free(mes);
    
}