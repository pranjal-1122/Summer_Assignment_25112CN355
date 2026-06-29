#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int choice;
    printf("Enter a string: ");
    gets(str);

    do {
        printf("\n1.Length 2.Reverse 3.Uppercase 4.Exit\nChoice: ");
        scanf("%d",&choice);
        if(choice==1) printf("Length=%d\n",(int)strlen(str));
        else if(choice==2) {
            for(int i=strlen(str)-1;i>=0;i--) printf("%c",str[i]);
            printf("\n");
        } else if(choice==3) {
            for(int i=0;str[i]!='\0';i++) {
                if(str[i]>='a'&&str[i]<='z') str[i]-=32;
            }
            printf("Uppercase=%s\n",str);
        }
    } while(choice!=4);
    return 0;
}
