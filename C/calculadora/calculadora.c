#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    double nums[2], x;
    char sign;

    while (sign != ""){

        printf("Insira operacao: \n");
        scanf("%lf %c %lf", &nums[0], &sign, &nums[1]);

        switch (sign){
            case '+':
            x = nums[0] + nums[1];
            printf("%.2lf %c %.2lf = %.2lf\n\n", nums[0], sign, nums[1], x);
            break;

            case '-':
            x = nums[0] - nums[1];
            printf("%.2lf %c %.2lf = %.2lf\n\n", nums[0], sign, nums[1], x);
            break;

            case 'x':
            x = nums[0] * nums[1];
            printf("%.2lf %c %.2lf = %.2lf\n\n", nums[0], sign, nums[1], x);
            break;

            case '/':
            if (nums[0] == 0 || nums[1] ==0){
                printf("INCALCULAVEL\n\n");
                break;
            }
            x = nums[0] / nums[1];
            printf("%.2lf %c %.2lf = %.2lf\n\n", nums[0], sign, nums[1], x);
            break;

            default:
            printf("ai nao po\n\n");
        }
    }
}
