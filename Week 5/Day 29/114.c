#include <stdio.h>

int main() {
    int arr[10],n,i,choice;
    printf("Enter size: "); scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++) scanf("%d",&arr[i]);

    do {
        printf("\n1.Display 2.Sort 3.Search 4.Exit\nChoice: ");
        scanf("%d",&choice);
        if(choice==1) {
            for(i=0;i<n;i++) printf("%d ",arr[i]);
        } else if(choice==2) {
            for(i=0;i<n-1;i++) for(int j=i+1;j<n;j++) if(arr[i]>arr[j]) {
                int t=arr[i]; arr[i]=arr[j]; arr[j]=t;
            }
            printf("Sorted!\n");
        } else if(choice==3) {
            int key,found=0; printf("Enter element: "); scanf("%d",&key);
            for(i=0;i<n;i++) if(arr[i]==key) {found=1; break;}
            if(found) printf("Found at index %d\n",i); else printf("Not found\n");
        }
    } while(choice!=4);
    
    return 0;

}
