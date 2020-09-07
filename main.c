
#include <stdio.h>
#include <string.h>
#include "add.h"
#include "sub.h"

int main()
{
    int x ,y;
    int zz, *z;
    x = 0;
    y = 1;
    zz = 2;
    z = &zz;
    Add_func(x,y,z);
    printf("Add value from main = %d\n",*z);
    Sub_fun(x,y,z);
    printf("Sub value from main = %d\n\n",*z);

return 0;
}




