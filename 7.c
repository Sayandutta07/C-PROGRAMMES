// #include<stdio.h>
// int main(){
//     int arr[5] = {1,3,4,6,8};
//     for (int i= 0; i<=4;i++){
//         printf("%d ",arr[i]);
//     }
// }
// #include<stdio.h>
// int main(){
//     int arr[5];
//     for(int i = 0; i<=4; i++){
//         printf("Enter element number %d: ",i+1);
//         scanf("%d",&arr[i]);
//     }
//     for (int i = 0; i<5;i++){
//         printf("%d ",arr[i]);
//     }
// }
// int main(){
//     int arr[4];
//     for (int i = 0; i < 4; i++){
//         printf("Enter element number %d: ", i + 1);
//         scanf("%d", &arr[i]);
//     }
//     printf("The array is: ");
//     for(int i = 0; i < 4; i++){
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }
//REVERSE AN ARRAY
// #include<stdio.h>
// int main(){
//     int arr[4];
//     for (int i = 0; i < 4; i++){
//         printf("Enter element number %d: ", i + 1);
//         scanf("%d", &arr[i]);
//     }
//     printf("The reverse array is: ");
//     for(int i = 3; i >= 0; i--){
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }
//ROLL NUMBER
// int main(){
//     int marks[7]= {34,56,67,89,30,90,33};
//     for(int i=0;i<7;i++){
        
//         printf("%d ",i);
//     }
//     printf("\n");
//     for(int i =0;i<7;i++){
//         if(marks[i]<35){
//             printf("The index of student (marks<35):%d\n",i);
//     }}
//     return 0;
// }
// int main(){
//     int arr[4];
//     printf("%d",arr[1]);
//     return 0;
// }
// #include <stdio.h>

// int main(){
//     int i, a = 2, b = 3;
//     int arr[a+b]; 
//     for(i = 0; i< a+b; i++){
//         scanf("%d",&arr[i]);
//         printf("\n%d",arr[i]); // Fixed here
//     }
// }
// int main(){
//     int sum = 0;
//     int arr[5] = {5,7,8,3,4};
//     for(int i = 0; i< 5; i++){
//         sum = sum + arr[i];

//     }
//     printf("The sum is %d.",sum);
//     return 0;
// }
// int main(){
//     int n;
//     int sum = 0;
//     printf("Enter the array size: ");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i = 0; i< n; i++){
//         printf("Enter the element %d: ",i+1);
//         scanf("%d",&arr[i]);
//     }
//     printf("The array is: ");
//     for(int i = 0; i< n; i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
//     for(int i = 0; i< n; i++){
//         sum = sum + arr[i];
//     }
//     printf("The sum of the array is %d",sum);
//     return 0;

    

// }
//     int arr[5] ={1,2,3,4,5};
//     int prod = 1;
//     for(int i = 0; i<5; i++){
//         prod = prod * arr[i];
//     }
//     printf("The product is: %d",prod);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int arr[5]= {-3,-6,-7,-1,-9};
//     int max = arr[0];
//     for (int i = 0; i<5; i++){
//         if(max<arr[i]){
//             max = arr[i];
//         }
//     }
//     printf("The maximum value is: %d",max);
//     return 0;
// // }
// #include<stdio.h>
// int main(){
// //     int arr[5] = {3,5,6,4,-2};
// //     int min = arr[0];
// //     for(int i =0; i<5;i++){
// //         if(min>arr[i]){
// //             min = arr[i];
// //         }
        
// //     }
// //     printf("%d",min);
// // }
//        int arr[3] ={4,5,6,7};
// }
// #include<stdio.h>
// int main(){
//        int arr[8]={1,2,3,4,5,6,7,8};
//        for(int i = 0; i< 8; i++){
//               if(i%2 != 0){
//                      arr[i] = arr[i] * 2;
//               }
//               else{
//                      arr[i] = arr[i] + 10;
//               }
//               printf("%d ", arr[i]);


       
//        }

// }
// #include<stdio.h>
// int main(){
//        int arr[5] = {2,3,6,7,8};
//        int x=5;
//        int count = 0;
//        for(int i = 0; i<5;i++){
//               if(arr[i]>x){
//                      count ++;

//               }
//        }
//        printf("%d",count);
//        return 0;
// }
//DIFF OF INDICES
// #include<stdio.h>
// int main(){
//        int sumeven = 0;
//        int sumodd = 0;
//        int arr[5] = {2,5,9,2,4};
//        for(int i = 0; i<5; i++){
//               if(i%2 == 0){
//                      sumeven += arr[i];
//               }
//               else{
//                      sumodd += arr[i];
//               }
//        }
//        if(sumeven>sumodd){
//               int diff1 = sumeven - sumodd;
//               printf("The difference is:%d",diff1);
//        }
//        else{
//               int diff2 = sumodd - sumeven;
//               printf("The difference is:%d", diff2);
//        }
//        return 0;
// }
// PAIR ISSUE
// #include<stdio.h>
// int main(){
//        int pair = 0;
//        int x = 5;
//        int arr[7] ={1,2,3,4,5,6,7};
//        for(int i = 0; i<7; i++){
//               for (int j = i+1; j<7;j++){
//                      if(arr[i] + arr[j] == x){
//                             pair ++;
//                      }
//               }
//        }
//        printf("%d",pair);
//        return 0;
// }  
// #include<stdio.h>
// int main(){
//        int pair = 0;
//        int x = 10;
//        int arr[7] ={1,2,3,4,5,6,7};
//        for(int i = 0; i<7; i++){
//               for (int j = i+1; j<7;j++){
//                 for(int k = j+1; k<7;k++){
//                      if(arr[i] + arr[j] + arr[k] == x){
//                             pair ++;
//                      }
//               }}
//        }
//        printf("%d",pair);
//        return 0;
// }  
// #include<stdio.h>
// #include<limits.h>

// int main(){
//        int arr[7] = {2,4,7,2,4,8};
//        int smax = INT_MIN;
//        int max = INT_MIN;

//        for(int i = 0; i<7; i++){
//               if(max<arr[i]){
//                      smax = max;
//                      max = arr[i];
//               }
//               else if(smax<arr[i] && max != arr[i]){
//                      smax = arr[i];
//               }

//        }
//        printf("%d",smax);
//        return 0;

// }
// #include<stdio.h>
// #include<limits.h>
// int main(){
//        int arr[7] ={1,3,4,8,5,9,7};
//        int smax = INT_MIN;
//        int max = INT_MIN; 
//        for(int i = 0; i<7; i++){
//               if(max < arr[i]){
//                      smax = max;
//                      max = arr[i];
//               }
//               else if(smax<arr[i]&& max != arr[i]){
//                      smax = arr[i];
//               }
//        }
//        printf("%d",smax);
//        return 0;
// }
// #include<stdio.h>
// int main(){
//        int arr[5]={2,3,4,5,6};
//        int brr[5];
//        for(int i = 0;i<5;i++){
//               brr[i] = arr[4-i];
//               printf("%d ",brr[i]);
//        }
//        return 0;
// }
// #include<stdio.h>
// int main(){
//        int brr[4];
//        int arr[4] = {1,2,3,4};
//        for( int i = 0; i<4;i++){
//               brr[i] = arr[3-i];
//               printf("%d ",brr[i]);
//        }
// }
// #include<stdio.h>
// void reverse();
// int main(){
//        int arr[6] = {1,2,3,4,5,6};
//        reverse(arr);
       
//        for(int i = 0; i<6;i++){
//               printf("%d ",arr[i]);
//        }
//        return 0;
// }
// void reverse(int arr[]){
//        int i = 0;
//        int j=5;
//        while(i<j){
//               int temp = arr[i];
//               arr[i] = arr[j];
//               arr[j] = temp;
//               i++;
//               j--;
//        }
//        return;
// }
// #include<stdio.h>

// int main(){
//        int arr[8] = {1,2,3,4,4,3,2,1};
//        int i = 0;
//        int j = 7;
//        int Palindrome = 1;

//        while(i<=j){
//               if(arr[i] == arr[j]){
//                      i++;
//                      j--;
//               }
//               else{
//                      Palindrome = 0;
//                      break;
//               }
//        }

//        if(Palindrome){
//               printf("PALINDROME");
//        } 
//        else {
//               printf("NOT PALINDROME");
//        }

//        return 0;
// }
// #include<stdio.h>
// int main(){
//        int arr[7] = {1,2,3,4,3,2,1};
//        int palindrome = 1;
//        int i = 0;int j =6;
//        for (int i = 0; i<7;i++){
              
//               if(arr[i]==arr[j]){
//                      i++;
//                      j--;

//               }

              
       
//               else{
//                      palindrome = 0;
//                      break;
//               }
//        }
//        if(palindrome){
//               printf("PALINDROME");
//        }
//        else{
//               printf("NOT PALINDROME");
//        }
//        return 0;
// #include<stdio.h>
// void reverse(int arr[], int si,int ei){
//        for(int i = si, j = ei; i < j; i++, j--){
//               int temp = arr[i];
//               arr[i] = arr[j];
//               arr[j] = temp;
//        }
// }
// int main(){
//        int arr[7] = {1,2,3,4,5,6,7};
//        int n = 7;
//        int k = 3;
//        k = k % n;
//        reverse(arr,0,n-1);
//        reverse(arr,0,k-1);
//        reverse(arr,k,n-1);
//        for(int i = 0; i<n;i++){
//               printf("%d ",arr[i]);
//        }
//        return 0;

// }
// #include<stdio.h>
// void reverse(int arr[], int si,int ei){
//        for(int i = si, j = ei;i<j;i++,j--){
//               int temp = arr[i];
//               arr[i] = arr[j];
//               arr[j] = temp;
//        }
//        return;
// }
// int main(){
//        int n;
       
//        printf("Enter the size of the array: ");
//        scanf("%d",&n);
//        int arr[n];
//        int k;
//        printf("Enter the steps to rotate the array: ");
//        scanf("%d",&k);
//        k = k%n;
//        for(int i = 0; i<n;i++){
//               printf("Enter the element %d: ",i+1);
//               scanf("%d",&arr[i]);
//        }
//        printf("The array is: ");
//        for(int i = 0; i<n;i++){
//               printf("%d ",arr[i]);      
//        }
//        printf("\n");
//        reverse(arr,0,n-1);
//        reverse(arr,0,k-1);
//        reverse(arr,k,n-1);
//        printf("The rotated array is: ");
//        for(int i = 0;i<n;i++){
//               printf("%d ",arr[i]);
//        }
//        return 0;

// }
// #include<stdio.h>
// int main(){
//        int arr[7] ={1,2,3,4,5,6,4};
//        int x = 4;
//        for(int i = 7; i>=0;i--){
//               if(arr[i] == 4){
//                      printf("%d is present in index %d\n", x, i);
//                      break ;
//               }
//        }
//        return 0;
// }
// #include<stdio.h>
// #include<stdbool.h>
// int main(){
//        int arr[5] = { 1,2,5,6,7};
//        int x = 6;
//        bool flag = false;
//        int idx = 0;
//        for(int i = 0; i<5; i++){
//               if(arr[i] == x){
//                      flag = true;
//                      idx = i;
//                      break;
//               }
//        }
//        if(flag == false){
//               printf("%d is not present in the array.", x);
//        }
//        else{
//               printf("%d is present in the array and the index number is %d.",x,idx);
//        }
//        return 0;


// }
// #include <stdio.h>

// int main() {
//     int arr[99];
//     int missing_target = 8; // Change this to test any missing number between 1 and 100

//     // 1. Automatically populate the 99-element array (skipping the missing_target)
//     int idx = 0;
//     for (int i = 1; i <= 100; i++) {
//         if (i != missing_target) {
//             arr[idx] = i;
//             idx++;
//         }
//     }

//     // 2. Expected sum of numbers from 1 to 100 using n * (n + 1) / 2
//     int expected_sum = (100 * 101) / 2; // Equals 5050

//     // 3. Calculate the actual sum of the 99 elements present in the array
//     int actual_sum = 0;
//     for (int i = 0; i < 99; i++) {
//         actual_sum += arr[i];
//     }

//     // 4. Find the missing element
//     int missing_element = expected_sum - actual_sum;

//     printf("The missing element is: %d\n", missing_element);

//     return 0;
// }

//DUPLICATE ELEMENT
// #include<stdio.h>
// int main(){
//        int arr[7] = {1, 2, 3, 5, 6, 7, 8};
//        for(int i = 0; i < 7; i++){
//               for(int j = i + 1; j < 7; j++){
//                      if(arr[i] == arr[j]){
//                             printf("%d has a duplicate in index %d.\n", arr[i], j);
//                             return 0;
//                      }
//               }
//        }
//        printf("No duplicates found.\n");
//        return 0;
// }
       
      
// #include<stdio.h>
// #include<stdbool.h>
// int main(){
//        int arr[7] = {1,2,3,4,3,2,1};
       
//        for(int i = 0; i<7; i++){
//               bool flag = false;
//               for(int j = i+1;j<7;j++){
//                      if(arr[i] == arr[j]){
//                             flag = true;
//                      }
//               }
//               if(flag == false){
//                      printf("The unique element is %d.",arr[i]);
//                      break;
//                      return 0;
//               }
              
//        }

// 
// #include<stdio.h>
// int main(){
//     int arr[12] ={2,3,2,3,2,4,5,6,2,2,2,8};
//     int count= 0;
//     int el;
//     for(int i = 0; i<12; i++){
//         for(int j = i+1; j<5;j++){
//             if(arr[i]==arr[j]){
//                 el = arr[i];
//                 count++;
//             }
//         }
        
//         }
//     if(count>=12/2){
//         printf("The element %d has appeared more than  6 times.",el);
//     }
//     else printf("No element such exists.");
//     }
#include<stdio.h>
int main(){
    int arr[5] ={2,4,1,9,7};
    int dlt_idx = 0;
    int search_element_idx;
    printf("Enter the index of element you want to remove: ");
    scanf("%d",&search_element_idx);
    for(int i = 0; i<5;i++){
        if(i==search_element_idx){
            printf("The element at index %d is found and value is %d",search_element_idx,arr[i]);
        }
    }
    dlt_idx = search_element_idx;
    for(int i =dlt_idx ; i< 4;i++){
        arr[i] = arr[i+1];
    }
    printf("\n");
    for(int i = 0; i < 4; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}