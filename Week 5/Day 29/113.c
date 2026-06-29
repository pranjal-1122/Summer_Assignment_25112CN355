#include <stdio.h>

int main(){
    int choice; float a,b;
    do {
        printf("\n1.Add 2.Subtract 3.Multiply 4.Divide 5.Exit\nChoice: ");
        scanf("%d",&choice);
        if(choice>=1 && choice<=4) {
            printf("Enter two numbers: ");
            scanf("%f %f",&a,&b);
        }
        switch(choice) {
            case 1: printf("Sum=%.2f\n",a+b); break;
            case 2: printf("Diff=%.2f\n",a-b); break;
            case 3: printf("Product=%.2f\n",a*b); break;
            case 4: if(b!=0) printf("Quotient=%.2f\n",a/b); else printf("Divide by zero!\n"); break;
        }
    } while(choice!=5);
    return 0;
}
