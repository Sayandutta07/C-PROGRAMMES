// #include<stdio.h>
// int main(){
//     int arr[6]={3,2,1,4,5,3};
//     int count = 0;
//     for(int i = 0; i<7;i++){
//         for(int j = i+1; j<7;j++){
//             if(arr[i] == arr[j]){
//                 printf("The duplicate element is %d present in indexes %d and %d",arr[i],i,j);
//                 count = 1;
//                 return 0;
//             }
//         }
//     }
//     if(count == 0){
//         printf("No duplicate element was found");
//     }

// }
// BEST CASE SCENARIO
// #include<stdio.h>
// int main(){
//     int arr[11] = {2,3,1,4,5,3,6,8,7,9,10};
//     int sum = 0;
//     int sumofn = (10*11)/2;
//     for(int i = 0; i< 11; i++){
//         sum = sum + arr[i];
//     }
//     int missingnum = sum - sumofn;
//     printf("duplicate number is %d", missingnum);
//     return 0;
// }
//TWO POINTER ALGORITHM
// #include<stdio.h>
// int main(){
//     int target = 14;
//     int arr[8] = {1,2,3,5,6,9,10,11};
//     int i = 0, j = 7;

//     while (i < j) {
//         if (arr[i] + arr[j] == target) {
//             printf("found!\nindex %d and %d add upto the target.", i, j);
//             return 0;
//         } else if (arr[i] + arr[j] > target) {
//             j--;
//         } else {
//             i++;
//         }
//     }

//     printf("No pair found.");
//     return 0;
// }
//BUBBLE SORT
#include<stdio.h>
#include<stdbool.h>
int main(){
    int n= 5;
    int arr[5] ={4,2,7,5,3};
    for(int i = 0; i<n-1;i++){
        bool flag = true;
        for(int j = 0; j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = false;
            }
        }
        if(flag == true) break;
    }
    printf("\n");
    for(int i = 0; i<5; i++){
        printf("%d ",arr[i]);
    }
}