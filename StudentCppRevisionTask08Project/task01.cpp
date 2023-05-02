﻿#include "tasks.h"

/*	Task 01. The same Numbers [совпадающие числа]
 *
 *	Даны четыре целых числа. Определите, сколько из них совпадающих.
 *	Если числа не совпадают, то необходимо возвратить ноль.  
 * 
 *	Формат входных данных [input]
 *	На вход даётся четыре целых числа в диапазоне типа int.
 *
 *	Формат выходных данных [output]
 *	Возвратите количество совпадающих чисел или ноль, если таких чисел нет.
 *
 *	[ input 1]: 7 7 7 7
 *	[output 1]: 4
 *
 *	[ input 2]: 7 7 7 8
 *	[output 2]: 3
 *
 *	[ input 3]: 7 7 8 9
 *	[output 3]: 2
 *
 *	[ input 4]: 6 7 8 9
 *	[output 4]: 0
 */

int task01(int a, int b, int c, int d) {
    int result = 0;
    if (a == b && a == c && a == d) {
        result = 4;
    }
    else if ((a == b && a == c) || (a == c && c == d) || (b == d && b == c) || (a == d && a == c) || (a == d && a == b)) {

        result = 3;
    }
    else if (a == b || a == c || b == c || a == d || b == d || d == c) {
        result = 2;
    }


    return result;
}