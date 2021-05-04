/********************************************************************
 * Simple panic file                                                *
 * (c) Copyleft 2021 DamieFC                                        *
 ********************************************************************/
#include <stdio.h>
#include <stddef.h>

void panic(void){
    printf(">----- PANIC -----<\n");
    printf(":(");
    printf("Something happened. No idea what. Oh well. Everything has been lost that was unsaved. Unplug and replug the computer.\n");
}
