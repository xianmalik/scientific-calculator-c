#include <stdio.h>
#include <math.h>
#define PI 3.14159265

int main()
{
    float x, y, answer;
    int func;
    printf("Select a function to use: \n");
    printf(" 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n 5. X to the power Y\n");
    printf(" 6. Sine\n 7. Cosine\n 8. Tangent\n 9. Sineh\n 10. Cosineh\n 11. Tangenth\n");
    printf(" 12. Log10\n 13. SquareRoot\n 14. Exponent\n");
    printf("Function Number: ");

    scanf("%d",&func);

    printf("\n\n");
    if(func>0 && func<15){
        if(func<6){
            printf("Enter Number X: ");
            scanf("%f", &x);
            printf("Enter Number Y: ");
            scanf("%f", &y);
            switch(func){
                case 1: answer = x+y; break;
                case 2: answer = x-y; break;
                case 3: answer = x*y; break;
                case 4: answer = x/y; break;
                case 5: answer = pow(x,y); break;
            }
        }else{
            printf("Enter Number X: ");
            scanf("%f", &x);
            switch(func){
                case  6: answer = sin(x*PI/180); break;
                case  7: answer = cos(x*PI/180); break;
                case  8: answer = tan(x*PI/180); break;
                case  9: answer = sinh(x); break;
                case 10: answer = cosh(x); break;
                case 11: answer = tanh(x); break;
                case 12: answer = log10(x); break;
                case 13: answer = sqrt(x); break;
                case 14: answer = exp(x); break;
            }
        }
        printf("Answer is: %f", answer);
    }else{
        printf("Wrong Input.\n");
    }

    return 0;
}
