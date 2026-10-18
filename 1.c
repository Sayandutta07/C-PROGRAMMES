// #include <stdio.h>
// int main(){
    // float x1 = 98;
    // float x2=89;
    // float x3= 67;
    // float x4=90;
    // float x5=78.78;
    // float avg = (x1+x2+x3+x4+x5)/5;
    // printf("The total percetange is:%f %",avg);

// #include<stdio.h>
// int main(){
//     float p,r,T;
//     printf("Enter the principle amount:");
//     scanf("%f",&p);
//     printf("Enter the rate of interest:");
//     scanf("%f",&r);
//     printf("Enter the time:");
//     scanf("%f", &T);
//     float simple_interest = (p*r*T)/100;
//     printf("The simple interest is  %f", simple_interest);
// }
// #include <stdio.h>
// int main(){
//     int radius;
//     printf("Enter your radius:");
//     scanf("%d",&radius);
//     float area = 3.14*(radius)*(radius);
//     printf("The area of the circle is:%f", area);
// }
// #include <stdio.h>
// int main(){
//     int p,q;
//     printf("Enter the values of p and q:");
//     scanf("%d %d",&p,&q);
//     printf("p = %d q = %d",p,q);
//     return 0;

// }

//TWO INTEGERS AND REMAINDER PROBELM
// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("Enter a:");
//     scanf("%d",&a);
//     printf("Enter b:");
//     scanf("%d",&b);
//     int q;
//     q = a/b;
//     int r;
//     r = a - (b*q);
//     printf("The remainder is %d when %d is divided by %d.",r,a,b);
// }


//FIND THE FRACTIONAL PART
// #include<stdio.h>
// int main(){
//     float x;
//     printf("Enter the decimal number:");
//     scanf("%f",&x);
//     int y =x;
//     float fractional_part = x-y;
//     printf("The fractional part of the number: %f", fractional_part);
//     return 0;
// }

// #include <limits.h>   // this header defines INT_MIN
// #include <stdio.h>

// int main() {
//     int x = INT_MIN;
//     printf("%d\n", x);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number of elements in the array: ");
//     scanf("%d",&n);
//     int arr[n] ;
//     int search;
//     int count = 0;
    
//     printf("Enter the array: ");
//     for(int i = 0; i<n; i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("\n");
//     printf("The array is: ");
    
//     for(int i = 0; i< n; i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
//     printf("Enter the element you want to find: ");
//     scanf("%d",&search);
//     for(int i = 0; i< n;i++){
//         if(arr[i] == search){
//             printf("The element %d is present in index %d.\n",arr[i],i);
//             count++;
//         }
//     }
//     printf("\n");
//     if(count>0){
//         printf("The element %d has appeared %d times in the array.",search,count);
//     }
//     else{
//         printf("The element %d is not found in the array.",search);
//     }
// }
// #include<stdio.h>
// int main(){
//     int r1,c1,r2,c2;
//     printf("Enter the rows and columns of matrix 1:");
//     scanf("%d %d",&r1,&c1);
//     printf("Enter the rows and columns of matrix 2:");
//     scanf("%d %d",&r2,&c2);
//     int arr[r1][c1];
//     int brr[r2][c2];
//     printf("Enter the first matrix:\n");
//     for(int i = 0; i<r1;i++){
//         for(int j = 0; j<c1;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     printf("Enter the second matrix:\n");
//     for(int i = 0; i<r2;i++){
//         for(int j = 0; j<c2;j++){
//             scanf("%d",&brr[i][j]);
//         }
//     }
//     if(c1 == r2){
//         printf("The matrix is multiplicable.\n");
//     }
//     else{
//         printf("The matrix is not multiplicable.\n");
//         return 0;
//     }
    
//     int result[r1][c2];
//     for(int i = 0; i<r1; i++){
//         for(int j = 0; j<c2;j++){
//             result[i][j] = 0;
//             for(int k = 0; k<c1;k++){
//                 result[i][j] += arr[i][k]*brr[k][j];
//             }
//         }
//     }
//     printf("The product of the matrix is:\n");
//     for(int i = 0; i<r1;i++){
//         for(int j = 0; j<c2;j++){
//             printf("%d ",result[i][j]);
//         }
//         printf("\n");
//     }
//     int num_of_prod = r1*c1*c2;
//     printf("The number of multiplications:%d",num_of_prod);
//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    int values[] = {10, 20, 30, 50,60};
    int n = sizeof(values) / sizeof(values[0]);

    struct Node* head = NULL;
    struct Node* tail = NULL;

    for (int i = 0; i < n; i++) {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = values[i];
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    struct Node* slow = head;
    struct Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    if (slow != NULL) {
        printf("%d\n", slow->data);
    }

    return 0;
}