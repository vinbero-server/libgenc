#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>

#include <stdio.h>
#include "../src/genc_nStrToInt.h"
int main()
{
    printf("%d\n", genc_nStrToInt("1234", sizeof("1234") - 1));
    return 0;
}