#include<stdio.h>

int add(int a, int b){
    return a+b;
}

int sub(int a, int b){
    return a-b;
}

int mul(int a, int b){
    return a*b;
}

int div(int a, int b){
    return a/b;
}

int mod(int a, int b){
    return a%b;
}

int main(){
    int choice;
    int result;
    int a,b;

    while (true){
        printf("Choose an operation:\n1 - add\n2 - sub\n3 - mul\n4 - div\n5 - mod\n");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                printf("1st number:\n");
                scanf("%d",&a);
                printf("2nd number:\n");
                scanf("%d",&b);

                result = add(a,b);
                printf("Result: %d\n",result);
                break;

            case 2:
                printf("Minuend:\n");
                scanf("%d",&a);
                printf("Subtrahend:\n");
                scanf("%d",&b);

                result = sub(a,b);
                printf("Result: %d\n",result);
                break;

            case 3:
                printf("1st number:\n");
                scanf("%d",&a);
                printf("2nd number:\n");
                scanf("%d",&b);

                result = mul(a,b);
                printf("Result: %d\n",result);
                break;

            case 4:
                printf("Divident:\n");
                scanf("%d",&a);
                printf("Divisor:\n");
                scanf("%d",&b);

                result = div(a,b);
                printf("Result: %d\n",result);
                break;

            case 5:
                printf("Divident:\n");
                scanf("%d",&a);
                printf("Divisor:\n");
                scanf("%d",&b);

                result = mod(a,b);
                printf("Result: %d\n",result);
                break;
            
        }
    }

    return 0;
}
