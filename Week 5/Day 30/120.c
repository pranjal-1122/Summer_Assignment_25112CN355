#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    int marks;
};

void addStudent(struct Student s[], int *n) {
    printf("Enter roll, name, marks: ");
    scanf("%d %s %d", &s[*n].roll, s[*n].name, &s[*n].marks);
    (*n)++;
}

void displayStudents(struct Student s[], int n) {
    printf("\nStudent Records:\n");
    for(int i=0;i<n;i++) {
        printf("%d %s %d\n", s[i].roll, s[i].name, s[i].marks);
    }
}

void searchStudent(struct Student s[], int n, int roll) {
    for(int i=0;i<n;i++) {
        if(s[i].roll==roll) {
            printf("Found: %d %s %d\n", s[i].roll, s[i].name, s[i].marks);
            return;
        }
    }
    printf("Not found\n");
}

int main() {
    struct Student s[50];
    int n=0, choice, roll;

    do {
        printf("\n1.Add Student\n2.Display Students\n3.Search by Roll\n4.Exit\nChoice: ");
        scanf("%d",&choice);
        switch(choice) {
            case 1: addStudent(s,&n); break;
            case 2: displayStudents(s,n); break;
            case 3: printf("Enter roll: "); scanf("%d",&roll); searchStudent(s,n,roll); break;
        }
    } while(choice!=4);

    return 0;
}
