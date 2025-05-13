#include <stdio.h>
#include <stdlib.h>

void main()
{
    double nums[2], x;
    char sign;

    while (sign != ""){

        printf("Insira operacao: \n");
        scanf("%lf %c %lf", &nums[0], &sign, &nums[1]);

        switch (sign){
            //soma
            case '+':
            x = nums[0] + nums[1];
            printf("%.2lf %c %.2lf = %.2lf\n\n", nums[0], sign, nums[1], x);
            break;

            //subtracao
            case '-':
            x = nums[0] - nums[1];
            printf("%.2lf %c %.2lf = %.2lf\n\n", nums[0], sign, nums[1], x);
            break;

            //multiplicacao
            case 'x':
            x = nums[0] * nums[1];
            printf("%.2lf %c %.2lf = %.2lf\n\n", nums[0], sign, nums[1], x);
            break;

            //divisao
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
        } //switch case
    } //while true
} //main
