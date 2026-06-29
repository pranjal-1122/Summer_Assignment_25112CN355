#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    int marks;
};

int main() {
    struct Student s[5];
    int n,i;
    printf("Enter number of students: ");
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        printf("Enter roll, name, marks: ");
        scanf("%d %s %d",&s[i].roll,s[i].name,&s[i].marks);
    }
    printf("\nRecords:\n");
    for(i=0;i<n;i++) {
        printf("%d %s %d\n",s[i].roll,s[i].name,s[i].marks);
    }
    return 0;
}
