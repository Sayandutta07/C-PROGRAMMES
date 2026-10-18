//IF-ELSE
// #include <stdio.h>
// int main(){
//     int x;
//     printf("Enter a number:");
//     scanf("%d", &x);
//     if(x%2==0){
//         printf("EVEN NUMBER");
//     }
//     if (x % 2 != 0){
//         printf("ODD");
//     }

// return 0;
// }
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number:");
//     scanf("%d",&n);
//     if (n %5 ==0){
//         printf("IT IS DIVISIBLE BY 5");

//     }
//     else{
//         printf("not divisivle by 5");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int x;
//     printf("Enter the number:");
//     scanf("%d", &x);
//     if (x < 0) {
//         x = -x;
//     }
   
//     printf("The absolute value of the integer: %d", x);
// }
// #include<stdio.h>
// int main(){
//     int cost_price;
//     int selling_price;
//     printf("Enter cost price and selling price: ");
//     scanf("%d %d", &cost_price, &selling_price);
//     if (selling_price > cost_price){
//         printf("He made profit of %d", selling_price - cost_price);
//     }
//     else if (cost_price > selling_price){
//         printf("He made loss of %d", cost_price - selling_price);
//     }
//     else{
//         printf("No profit, no loss");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int b ; int l;
//     printf("Enter the length and breadth of rectangle:");
//     scanf("%d %d", &b, &l);
//     int area = l*b;
//     int perimeter = 2*(l+b);

//     if (area > perimeter){
//         printf("Area is greater than perimeter");

//     }
//     else{
//         printf("Area is smaller than perimeter");
//     }
//     return 0;


// }


//THREE NUMBER
// #include<stdio.h>
// int main(){
//     int x ;
//     printf("Enter the number:");
//     scanf("%d", &x);
//     if (x>99 && x<1000){
//         printf("The number is a 3-digit number.");
//     }
//     else{
//         printf("The number is not 3-digit number.");
//     }
// }

//DIVISIBLE BY 5 AND 3

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number:");
//     scanf("%d", &n);
//     if(n%5==0 && n%3==0){
//         printf("divisble by 5 and 3");
//     }
//     else{
//         printf("NOT DIVISIBLE");
//     }
// }
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number:");
//     scanf("%d", &n);
//     if(n%5==0 || n%3==0){
//         printf("divisble by 5 or 3");
//     }
//     else{
//         printf("NOT DIVISIBLE");
//     }
// }

//3 NUMBERS AND FIND GREATEST
// #include <stdio.h>
// int main(){
//     int a; int b; int c;
//     printf("Enter a,b and c");
//     scanf("%d %d %d",&a,&b,&c);
//     if ( a>b && a>c){
//         printf("a is the greatest");

//     }
//     else if (b>a && b>c){
//         printf("b is the greatest ");
    
//     }
//     else if(c>a && c>b){
//         printf("c is the greatest");
//     }
//     else{
//         printf("All are same");
//     }

// }

//VALID TRIANGLE
// #include <stdio.h>
// int main(){
//     int a; int b; int c;
//     printf("Enter the 1st side:");
//     scanf("%d", &a);
//     printf("Enter the 2nd side:");
//     scanf("%d",&b);
//     printf("Enter the 3rd side:");
//     scanf("%d",&c);
//     if ((a+b)>c && (b+c)>a && (a+c)>b){
//         printf("Valid triangle");
//     }
//     else{
//         printf("NOT VALID");
//     }

// }
// #include <stdio.h>
// int main(){
//     int a;int b; int c;
//     printf("Enter the age of Ram:");
//     scanf("%d",&a);
//     printf("Enter the age of Shyam:");
//     scanf("%d",&b);
//     printf("Enter the age of Ajay:");
//     scanf("%d", &c);
//     if(a<b && a<c){
//         printf("Ram is the youngest");
//     }
//     else if(b<a && b<c){
//         printf("Shyam is the youngest");
//     }
//     else{
//         printf("Ajay is the youngest");
//     }
// }
// STRAIGHT LINE
// #include <stdio.h>
// int main(){
//     int x1,x2,x3;
//     int y1,y2,y3;
//     printf("Enter point x1 and y1:");
//     scanf("%d %d", &x1,&y1);
//     printf("Enter point x2 and y2:");
//     scanf("%d %d", &x2,&y2);
//     printf("Enter point x3 and y3:");
//     scanf("%d %d", &x3,&y3);

//     int m1 = (y2-y1)/(x2-x1);
//     int m2 = (y3-y2)/(x3-x2);
   
//     if(m1==m2){
//         printf("ALL POINTS FALL ON THE STRAIGHT LINE");

//     }
//     else{
//         printf("Not fall on one staright line");
//     }
    


// }
// #include<stdio.h>
// int main(){
//     int x1,y1;
//     printf("Enter x1 and y1:");
//     scanf("%d %d", &x1,&y1);
//     if (x1 == 0 && y1 == 0) {
//         printf("LIES AT ORIGIN\n");
//     } else if (x1 == 0) {
//         printf("POINT LIES ON Y AXIS\n");
//     } else if (y1 == 0) {
//         printf("POINT LIES ON X AXIS\n");
//     } else {
//         printf("POINT DOES NOT LIE ON AXES\n");
//     }
//

// int main(){
//     int arr[5];

//     for(int i = 0; i < 5; i++){
//         printf("Enter marks of student %d: ", i + 1);
//         scanf("%d", &arr[i]);
//     }

//     printf("Students who scored less than 35:\n");
//     for(int i = 0; i < 5; i++){
//         if(arr[i] < 35)
//             printf("Student index (marks < 35): %d \n",i);
//     }

//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int r1,r2,c1,c2;
//     printf("Enter the number of rows and columns of matrix 1: ");
//     scanf("%d %d",&r1,&c1);
//     int arr[r1][c1];
//     printf("Enter the number of rows and columns of matrix 2: ");
//     scanf("%d %d",&r2,&c2);
//     if(c1 == r2){

//         printf("The matrix is multpicable\n");
//     }
//     else{
//         printf("Matrix is not multiplicable");
//         return 0;
//     }
//     int brr[r2][c2];
//     printf("Enter the first matrix:\n");
//     for(int i = 0 ; i<r1; i++){
//         for(int j = 0; j<c1;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     printf("\n");
//     printf("Enter the second matrix:\n");
//     for(int i = 0; i<r2; i++){
//         for(int j = 0; j<c2;j++){
//             scanf("%d",&brr[i][j]);
//         }
//     }
//     int crr[r1][c2];
//     for(int i =0 ; i<r1;i++){
//         for(int j = 0;j<c2;j++){
//             crr[i][j] = 0;
        
        
//         for(int k= 0; k<c1;k++){
//             crr[i][j] += arr[i][k]*brr[k][j];
//         }
//     }}
//     printf("The product of the matrix is:\n");
//     for(int i =0 ; i<r1;i++){
//         for(int j = 0;j<c2;j++){
//             printf("%d ",crr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*next;
};
int main(){
    struct Node*head ;
    struct Node*second;
    struct Node*third;
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    head -> data = 7;
    head -> next = second;
    second->data = 8;
    second->next = third;
    third -> data = 9;
    third -> next = NULL;
    return 0;
}