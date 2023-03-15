#include <stdio.h>
#include "cal.h"

enum{Add=1,Minus=2,Multi=3,Divide=4,Exit=5};

int main(void)
{
    double val1, val2;
    int select;
    double result;

    while(1)
    {
        printf("Enter val1 and val2: ");
        scanf("%lf %lf", &val1, &val2);
        printf("Enter calculate mode(1:Add, 2:Minus, 3:Multi, 4:Divide, 5:Exit): ");
        scanf("%d", &select);

        switch(select)
        {
            case Add:
                result = Addfunc(val1, val2);
                break;

            case Minus:
                result = Minusfunc(val1, val2);
                break;

            case Multi:
                result = Multifunc(val1, val2);
                break;

            case Divide:
                result = Dividefunc(val1, val2);
                break;

            case Exit:
                return 0;

            default:
                printf("Wrong Mode\n");
                break;
        }
        printf("Result value : %lf\n", result);
    }
    return 0;
}

