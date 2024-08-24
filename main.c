#include <stdio.h>
#include <limits.h>

    double simpcalc(double num1,double num2 ,char op){
    int result;
    if(op=='+')
    {
        result=num1+num2;
    }
    else if(op=='-'){
        result=num1-num2;
    }
    else if(op=='*'){
        result=num1*num2;
    }
   else  if(op=='/'){
        if(num2 !=0)
        {
            result=num1/num2;
        }
        else
        {
            printf("Error!\n");
            return INT_MIN;
        }
    }
    else
    {
        printf ("Operation Not Found ERROR!\n");
        return INT_MIN;
    }
    return result;
}
int main()
{
    char op;
    printf("Enter the operator(+,-,*,/):\n");
    scanf("%c",&op);
    double num1,num2;
    printf("Enter 2 Numbers:\n");
    scanf("%lf%lf",&num1,&num2);
    double result;
    result=simpcalc(num1,num2,op);
    printf("Result:%.2lf",result);
    return 0;
}
