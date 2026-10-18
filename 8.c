// #include<stdio.h>
// int main(){
//     int arr[2][2] = {{1,2},{3,4}};
//     for(int i=0; i<2; i++){
//         for(int j = 0; j<2; j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
    // arr[0][0] = 1;
    // arr[0][1] = 2;
    // arr[1][0] = 3;
    // arr[1][1] = 4;

// #include<stdio.h>
// int main(){
//     int r, c;
//     printf("Enter the number of rows: ");
//     scanf("%d", &r);
//     printf("Enter the number of columns: ");
//     scanf("%d", &c);

//     int arr[r][c];
//     printf("Enter the elements:\n");

//     for(int i = 0; i < r; i++){
//         for(int j = 0; j < c; j++){
//             scanf("%d", &arr[i][j]);
//         }
        
//     }
//     printf("\n");

    
//     printf("The array is:\n");

//     for(int i = 0; i < r; i++){
//         for(int j = 0; j < c; j++){
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
    
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int arr[4][2] ={{1,78},{2,74},{3,56},{4,66}};
//     for(int i = 0; i<4;i++){
//         for(int j = 0;j<2;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
// }
// #include<stdio.h>
// int main(){
//     int roll;
    
//     printf("Enter the number of students: ");
//     scanf("%d",&roll);
//     printf("Enter the roll numbers and marks in P,C,M:\n");
    
//     int arr[roll][4];
//     for(int i = 0; i<roll;i++){
        
//         for(int j = 0; j<4;j++){
//             scanf("%d",&arr[i][j]);

//         }
//     }
//     printf("\n");
//     printf("The roll numbers and marks of the students are:\n");
//     for(int i = 0; i<roll;i++){
//         for(int j = 0; j<4;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     int roll;
    
//     printf("Enter the number of students: ");
//     if (scanf("%d", &roll) != 1 || roll <= 0) {
//         printf("Please enter a valid number greater than 0.\n");
//         return 1;
//     }
    
//     printf("Enter the roll numbers and marks in P, C, M:\n");
    
//     int arr[roll][4];
//     for (int i = 0; i < roll; i++) {
//         for (int j = 0; j < 4; j++) {
//             scanf("%d", &arr[i][j]);
//         }
//     }
    
//     printf("\nThe roll numbers and marks of the students are:\n");
//     printf("Roll\tP\tC\tM\n");
//     printf("---------------------------\n");
    
//     for (int i = 0; i < roll; i++) {
//         for (int j = 0; j < 4; j++) {
//             printf("%d\t", arr[i][j]);
//         }
//         printf("\n");
//     }
    
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int a[2][2] ={{1,2},{3,4}};
//     int b[2][2] ={{3,4},{6,7}};
//     int res[2][2];
//     printf("The sum of the array is:\n");
//     for(int i = 0;i<2;i++){
//         for(int j = 0;j<2;j++){
//             res[i][j] = a[i][j] + b[i][j];
//             printf("%d ",res[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;

// }
// #include<stdio.h>
// int main(){
//     int a[2][2] ={{2,3},{4,5}};
//     int b[2][2]={{4,7},{7,8}};
//     for(int i = 0; i<2; i++ ){
//         for(int j = 0; j<2; j++){
//             a[i][j] += b[i][j];
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
                
// }
// #include<stdio.h>
// int main(){
//     int a[2][2];
//     int sum = 0;
//     printf("Enter the array:\n");
//     for(int i = 0; i<2;i++){
//         for(int j = 0; j<2; j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("\n");
//     printf("User input array:\n");
//     for(int i = 0; i<2; i++){
//         for(int j = 0; j<2; j++){
//             printf("%d ",a[i][j]);
//             sum += a[i][j];
//         }
//         printf("\n");
//     }
//     printf("The sum of the elements of array is: %d",sum);
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     int n, m;
//     printf("Enter the number of rows(n): ");
//     scanf("%d",&n);
//     printf("Enter the number of colums(m):");
//     scanf("%d",&m);
//     int matrix[n][m];
//     int max_i = 0;
//     int max_j = 0;
//     for(int i = 0; i<n; i++){
//         for(int j = 0; j<m; j++){
//             scanf("%d",&matrix[i][j]);
//         }
//     }
//     int max = matrix[0][0];
//     int min = matrix[0][0];
//     for(int i = 0; i<n; i++){
//         for(int j = 0; j<m; j++){
//             if(matrix[i][j]>max){
//                 max = matrix[i][j];
//                 max_i = i;
//                 max_j = j;
//             }
//             if(matrix[i][j]<min){
//                 min = matrix[i][j];

//             }
//         }
//     }
//     printf("The maximum element is %d and its index is(%d,%d).\n",max,max_i,max_j);
//     printf("The minimum element is:%d",min);
// }
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number of rows(n):");
//     scanf("%d",&n);
//     int m;
//     printf("Enter the number of columns(m):");
//     scanf("%d",&m);
//     int a[n][m];
//     int rec_sum = 0;
//     int l1,r1,l2,r2;
//     printf("Enter the top left co-ordinates (l1 , r1):");
//     scanf("%d %d",&l1,&r1);
//     printf("Enter the bottom right co-ordinates (l2,r2): ");
//     scanf("%d %d",&l2,&r2);
//     printf("Enter the matrix:\n");
//     for(int i = 0;i<n;i++){
//         for(int j = 0; j<m;j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("\n");
//     for(int i = l1; i<=l2; i++){
//         for(int j = r1; j<=r2;j++){
//             rec_sum += a[i][j];

//         }
//     }
//     printf("The sum of the rectangle from co-ordinates(%d,%d) to (%d,%d) is %d",l1,r1,l2,r2,rec_sum) ;
//     return 0;
// }
// #include<stdio.h>
// #include<limits.h>
// int main(){
//     int rows;
//     printf("Enter the rows:");
//     scanf("%d",&rows);
//     int cols;
//     printf("Enter the columns:");
//     scanf("%d",&cols);
//     int arr[rows][cols];
//     int max_sum = INT_MIN;
//     int max_row = 0;
//     for(int i = 0; i<rows;i++){
        
//         for(int j = 0; j<cols; j++){
//             scanf("%d",&arr[i][j]);                                 
//         }
//     }
//     printf("\n");
//     for(int i = 0; i<rows;i++){
//         for(int j = 0; j<cols;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n");
//     for(int i = 0; i<rows;i++){
//         int row_sum = 0;
//         for(int j = 0; j<cols;j++){
//             row_sum += arr[i][j];
//         }
//         if(row_sum>max_sum){
//             max_sum = row_sum;
//             max_row = i;
//         }
//     }
//     printf("The maximum sum in the matrix:%d\n",max_sum);
//     printf("The row index of maximum sum is %d",max_row);
//     return 0;
    
// }
// #include<stdio.h>
// int main(){
//     int arr[3][4]={{1,0,1,1},{0,1,0,1},{1,0,0,1}};
   
//     int max = -1;
//     for(int i = 0;i<3;i++){
//         for(int j = 0; j<4; j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     int row_max = 0;
//     printf("\n");
//     for(int i = 0; i<3; i++){
//         int row_sum = 0;
//         for(int j = 0; j<4;j++){
//             row_sum += arr[i][j];
//         }
//         if(row_sum > max){
//             max = row_sum;
//             row_max = i;
//         }
//     }
//     printf("The row which has the maximum number of 1 is %d.(sum = %d)",row_max,max);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int arr[3][3] ={{2,4,-1},{-10,5,11},{18,-7,6}};
//     for (int i = 0;i < 3; i++){
//         for(int j = 0; j<3;j++){
//             printf("%d\t",arr[j][i]);
//         } 
//         printf("\n");
//     }
//     return 0;
// }
// 
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number of rows and columns:");
//     scanf("%d",&n);
//     int arr[n][n];
//     for(int i = 0; i<n;i++){
//         for(int j =0; j<n;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     //transpose
//     printf("The transpose of the matrix is:\n");
//     for(int i = 0; i<n;i++){
//         for(int j = 0; j<n;j++){
//             int temp = arr[i][j];
//             arr[i][j] = arr[j][i];
//             arr[j][i] = temp;
//         }
//     }
//     for(int i = 0; i<n;i++){
//         for(int j = 0; j<n;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }

//     //Rotate
//     printf("The rotated matrix is:\n");
//     for(int i = 0; i<n; i++){
//         int j = 0;
//         int k = n-1;
//         while(j<k){
//             int tempo = arr[i][j];
//             arr[i][j] = arr[j][k];
//             arr[j][k] = tempo;
//             j++;
//             k--;        }
//     }
//     for(int i = 0; i<n;i++){
//         for(int j = 0; j<n;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter the size of the square matrix (n x n): ");
//     scanf("%d", &n);

//     int arr[n][n];
//     printf("Enter the elements of the matrix:\n");
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     for(int i = 0; i<n; i++){
//         for(int j = i; j<n;j++){
//             int temp = arr[i][j];
//             arr[i][j] = arr[j][i];
//             arr[j][i] = temp;
//         }
//     }
//     printf("\n");
//     for(int i = 0;i<n;i++){
//         int j = 0;
//         int k = n-1;
//         while(j<k){
//             int temp = arr[i][j];
//             arr[i][j] = arr[i][k];
//             arr[i][k] = temp;
//             j++;
//             k--;

//         }
//     }
//     printf("The rotated matrix:\n");
//     for(int i = 0; i<n;i++){
//         for(int j=0;j<n;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }


//MULTIPLICATION OF 2D ARRAY
#include<stdio.h>
int main(){
    //ARRAY 1(m x n)
    int m;
    int n;
    printf("Enter the number of rows and columns of 1st matrix:\n");
    scanf("%d %d",&m,&n);
    //ARRAY 2(p x q)
    int p;
    int q;
    printf("Enter the number of rows and columns of 2nd matrix:\n");
    scanf("%d %d",&p,&q);
    int a[m][n]; 
    int b[p][q];
    int c[m][q];
    if(n != p){
        printf("The matrices can't be multiplied!");
        return 0;
    }
    //ARRAY 1 INPUT
    printf("Enter the elements of 1st array:\n");
    for(int i=0;i<m;i++){
        for(int j = 0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    //ARRAY 2 INPUT
    printf("Enter the elements of 2nd array:\n");
    for(int i=0;i<p;i++){
        for(int j = 0; j<q;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n");
    //MULTIPLICATION
    for(int i = 0; i<m;i++){
        for(int j = 0; j<q;j++){
            c[i][j] = 0;
            for(int k = 0; k<n;k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("The product of the two matrices is:\n");
    for(int i = 0; i<m;i++){
        for(int j = 0; j<q;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;

}