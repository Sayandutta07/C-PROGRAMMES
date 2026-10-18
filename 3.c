// #include<stdio.h>
// int main(){
//     for (int i = 1; i<=10 ; i++){
//         printf("%d\n",i);
//     }
//     return 0;
// }
//WHILE LOOP
// #include<stdio.h>
// int main(){
//     int i = 0;
//     while(i<=4){
//         printf("%d \n",i);
//         i++;
//     }
//     return 0;
// }
//DO-WHILE LOOPS

// #include<stdio.h>
// int main(){
//     int i=1;
//     do{
//         printf("%d\n",i);
//         i++;
//     }while(i<9);
// }
//SUM OF FIRST 'N' NATURAL NUMBERS
// #include<stdio.h>
// int main(){
//     int n;
//     int sum = 0;
//     printf("Enter the natural number:");
//     scanf("%d",&n);
//     for(int i=0;i<=n;i++){
//         int sum = sum + i;
//     }
//     printf("The sum is : %d",sum);
//     return 0;

// }
// #include<stdio.h>
// int main(){
//     printf("hello world \n");
//     printf("Answer %d \n",47);
//     printf("Name %s \n", "S");
// //     printf("x %.1lf i %d \n",3.5,100);
// // }
// #include<stdio.h>
// int main(){
//     for (int i = 1; i<=7;i++){
//         printf("Hello world !\n");
//     }
// }
// #include<stdio.h>
// int main(){
//     printf("All odd numbers from 1-100 \n");
//     for (int i = 1; i <= 100; i++){
//         if(i % 2 != 0){
//             printf("%d ", i);
//         }
//     }
//     return 0;
// // }
// //TABLE OF 19
// #include<stdio.h>
// int main(){
//     for (int i = 1; i<=190; i++){
//         if(i%19==0){
//             printf("%d ",i);
//         }
//     }
//     return 0;
// }
//PRINT THE TABLE OF N
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number 'n' whose table is to be found:");
//     scanf("%d",&n);
//     for (int i =1; i<=n*10; i++){
//         if(i % n == 0){
//             printf("%d \n",i);
//         }
//     }

// }
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the terms 'n':");
//     scanf("%d",&n);
//     for (int i=1 ; i<=n; i= i+2){
//         printf("%d \n",i);
//     }
// }
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the term:");
//     scanf("%d", &n);
//     for (int i = 100 ; i<=n; i=i-3){
//         if (i<0){
//             printf("NEGETIVE-INVALID");
        
//         break;
//         }
//         else if(i>0){
//             printf("%d \n",i);
//         }
//         else{
//             printf("INVLAID INPUT");
//         }
    
//     }
// }
// #include<stdio.h>
// int main(){
//     int x = 8939;
    

    
// }
// #include <stdio.h>
// #include <math.h>

// int main(){
//     int n;
//     int is_prime = 1; /* assume prime */
//     printf("Enter the number: ");
//     if (scanf("%d", &n) != 1) return 1;

//     if (n <= 1) is_prime = 0;
//     else {
//         int limit = (int)sqrt((double)n);
//         for (int i = 2; i <= limit; i++){
//             if (n % i == 0){
//                 is_prime = 0;
//                 break;
//             }
//         }
//     }

//     if (is_prime) printf("PRIME\n");
//     else printf("NOT PRIME\n");

//     return 0;
// }
           
//PRIME NUMBER
// #include <stdio.h>
// int main() {
//     int n;
//     int a = 0;
//     printf("Enter the number: ");
//     scanf("%d", &n);          // Bug 1 fixed: removed \n from format string

    

//     for (int i = 2; i <= n - 1; i++) {
//         if (n % i == 0) {
//             a = 1;
//             break;
//         }
//     }

//     if (a == 0) {
//         printf("The given number is prime");
//     } else {
//         printf("The given number is composite");
//     }

//     return 0;
// }
    
// #include<stdio.h>
// int main(){
//     int n; int a = 0;
//     printf("Enter the number:");
//     scanf("%d", &n);
    

//     if (n<0){
//         printf("Negetive numbers cannot be prime or composite");
//         return 0;
//     }
//     else if(n == 0){
//         printf("0 is neither prime nor composite ");
//         return 0;
//     }
//     else if (n == 1){
//         printf(" 1 can neither be prime nor composite");
//         return 0;
//     }

//     for (int i = 2; i<= n-1;i++){
//         if (n % i == 0){
//             a = 1;
//             break;
//         }
//     }
//     if ( a ==0){
//         printf("The given number is prime");
//     } else{
//         printf("The given number is composite");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int n; int a = 0;
//     printf("Enter the number:");
//     scanf("%d", &n);
    
//     if (n<0){
//         printf("Negetive numbers are neither prime nor composite");
//         return 0;
//     }
//     else if(n == 0){
//         printf("0 is neither prime nor composite");
//         return 0;
//     }
//     else if (n == 1){
//         printf("1 can neither be prime nor composite ");
//     }

//     for (int i = 2; i<=n-1; i++){
//         if (n % i == 0){
//             a = 1;
//             break;
//         }
//     }
    
//     if (a == 0){
//         printf("The number is prime");
//     }
//     else{
//         printf("The number is composite");

//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number:");
//     scanf("%d", &n);
//     int count = 0;
//     while(n != 0){
//         n = n/10;
//         count++;
//     }
//     printf("The number of digits: %d",count);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number:");
//     scanf("%d", &n);

//     int sum = 0;
//     while(n != 0){
//        int  digit = n%10;
//         sum = sum + digit;
//         n = n/10;
//     }
//     printf("The sum of the numbers is: %d", sum);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int n;
//     int sum_even=0;
//     printf("Enter the number:");
//     scanf("%d", &n);
//     int sum_even= 0;
//     while(n != 0){
//         int digit = n%10;
//         if(digit % 2 ==0){
//             sum_even = sum_even + digit;
//         }
// #include<stdio.h>
// int main(){
//     int n ;
//     int count;
//     int sum = 0;
//     printf("Enter the number:");
//     scanf("%d", &n);
//     while(n !=0){
//         int digit = n%10;
//         sum = sum+digit;
//         count ++;
//     }
// }
        
// #include<stdio.h>
// int main()
// {
//     int n;
//     int a = 0;
//     printf("Enter the number:");
//     scanf("%d", &n);
//     if (n == 0){
//         printf("0 is neither prime nor composite");
//         return 0;
//     }
//     else if(n == 1){
//         printf("1 is neither prime nor composite");
//         return 0;
//     }
//     else if(n<0){
//         printf("Negetive numbers are neither prime nor composite");
//         return 0;
//     }
    
//     for (int i = 2; i<= n-1; i++){
//         if(n%i == 0){
//             a = 1;
//             break;
//         }
        
//     }
//     if( a == 0){
//         printf("The number is prime");
//     }
//     else {
//         printf("The number is composite");
//     }
// 
// #include <stdio.h>
// int main() {
//     int n;
//     int a = 0;
//     printf("Enter the number: ");
//     scanf("%d", &n);

//     if (n == 0) {
//         printf("0 is neither prime nor composite");
//         return 0;
//     } else if (n == 1) {
//         printf("1 is neither prime nor composite");
//         return 0;
//     } else if (n < 0) {
//         printf("Negative numbers are neither prime nor composite");
//         return 0;
//     }

//     for (int i = 2; i <= n - 1; i++) {
//         if (n % i == 0) {
//             a = 1;
//             break;          // Bug fixed: moved inside the if block
//         }
//     }

//     if (a == 0) {
//         printf("The number is prime");
//     } else {
//         printf("The number is composite");
//     }

//     return 0;
// // }
// #include <stdio.h>
// int main() {
//     int n;
//     int a = 0;
//     printf("Enter the number: ");
//     scanf("%d", &n);

//     if (n == 0) {
//         printf("0 is neither prime nor composite");
//         return 0;
//     } else if (n == 1) {
//         printf("1 is neither prime nor composite");
//         return 0;
//     } else if (n < 0) {
//         printf("Negative numbers are neither prime nor composite");
//         return 0;
//     }

//     for (int i = 2; i <= n - 1; i++) {
//         if (n % i == 0) {
//             a = 1;
//             break;          // Bug fixed: moved inside the if block
//         }
//     }

//     if (a == 0) {
//         printf("The number is prime");
//     } else {
//         printf("The number is composite");
//     }

//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number:");
//     scanf("%d", &n);
//     int count = 0;
//     while( n != 0){
//         n = n/10;
//         count++;
//     }
//     printf("The number of digits: %d", count);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     long long n;
//     long long sum = 0;
//     printf("Enter the number:");
//     scanf("%lld", &n);
//     while(n != 0){
//         int digit = n % 10;
//         sum = sum +digit;
//         n = n/10;
//     }
//     printf("The sum of digits of the number: %lld", sum);
//     return 0;
// }
// 
// #include<stdio.h>
// int main(){
//     int n ;
//     printf("Enter the number:");
//     scanf("%d", &n);
    
//     int sum = 0;
//     while (n != 0){
//         int digit = n % 10;
//         sum = sum + digit;
//         n = n/10;

//     }
//     printf("The sum of the digits : %d", sum);
//     return 0;
// }
// 
// #include<stdio.h>
// int main(){
//     int n;
//     int sum =0;
//     int digit;
//     int count = 0;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     while(n != 0){
//         digit = n%10;
//         if(digit % 2 != 0){

//             sum = sum + digit;
//             count++;
//         }
//         n = n/10;
//     }
//     if(count == 0){
//         printf("There is no odd number in the digit.");
//     }
//     else{
//         printf("The sum of the odd digits is: %d", sum);
//     }
//     return 0;

// }
// REVERSE A NUMBER
// #include<stdio.h>
// int main(){
//     int n;
//     int r = 0;
//     int digit;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     while(n>0){//12//1
//         digit = n%10;//2//1
        
//         r = r*10;
//         r = r+ digit;//1
//         n = n/10;
//     }
//     printf("The reverse of the number is: %d", r);
//     return 0;
// }
// 
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     int fact = 1;
//     for(int i = 1; i<= n; i++){
//         fact = fact * i;
//     }
//     printf("The factorial of %d is: %d", n, fact);
//     return 0;
// // }
// #include<stdio.h>
// int main(){
//     int n;
//     int a = 1;
//     int b= 1;
//     int sum = 0;
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);
    
//     printf("The 1 term of fibonacci series is: 1\n");
//     printf("The 2 term of fibonnaci series is: 1\n");

//     for(int i = 3; i<= n; i++){
//         sum = a+ b;
//         a = b;
//         b = sum;
//         printf("The %d term of fibonacci series is: %d\n", i, sum);
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int n;
//     int r = 0;
//     int digit ;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     for(int i = 1; i<= n; i++){
//         digit = n%10;
//         r = r*10 ;
//         r = r + digit;
//         n = n/10;
//     }
//     printf("The reverse of the number is:%d", r);
//     return 0;
// #include<stdio.h>
// int main(){
//     int n;
//     int a = 1;
//     int b = 1;
//     int sum = 0;
//     printf("Enter the number of terms of fibonacci series: ");
//     scanf("%d", &n);

//     printf("The 1 term of fibonacci series is: 1\n");
//     printf("The 2 term of fibonacci series is: 1\n");

//     for(int i = 3; i <= n; i++){
//         sum = a+b;
//         a = b;
//         b = sum;
//         printf("The %d term of fibonacci series is: %d\n", i, sum);
//     }
//     return 0;
// }

// 
// 
// #include<stdio.h>
// int main(){
//     int base;
//     int exp;
//     int power = 1;
//     printf("Enter the base: ");
//     printf("Enter the exponent: ");
//     scanf("%d %d", &base,&exp);
//     for(int i = 1; i <= exp;i++){
//         power = power * base;
//     }
//     printf("The value is:%d", power);
//     return 0;
// }

//ARMSTRONG NUMBER;
// #include<stdio.h>
// #include<math.h>

// int main(){
//     int n, num, count, digit;
//     double power_sum;

//     printf("Enter the range of the number: ");
//     scanf("%d", &n);

//     for(int i = 1; i <= n; i++){

//         // Reset for every number
//         count = 0;
//         power_sum = 0;

//         // Step 1: Count digits
//         num = i;
//         while(num != 0){
//             count++;
//             num = num / 10;
//         }

//         // Step 2: Extract each digit and raise to power
//         num = i;
//         while(num != 0){              // ← while loop you were missing
//             digit = num % 10;
//             power_sum = power_sum + pow(digit, count);
//             num = num / 10;
//         }

//         // Step 3: Check Armstrong
//         if((int)power_sum == i){
//             printf("%d\n", i);
//         }
//     }

//     return 0;
// }
// #include<stdio.h>
// #include<math.h>
// int main(){
// int n;int num;int count;;double power_sum;int digit;
// printf("Enter the range: ");
// scanf("%d", &n);
// printf("The armstrong number from range 1 to %d are:\n",n);

// for(int i=1;i<= n; i++){
//     count = 0;
//     power_sum = 0;
//     num = i;
//     while(num != 0){

//         count++;
//         num = num/10;
//     }

//     num = i;
//     while(num != 0){
//         digit = num%10;
//         power_sum = power_sum + pow(digit,count);
//         num = num/10;}

//         if((int)power_sum == i){
//             printf("%d\n", i);
//         }

    
    

// }

// }

// #include<stdio.h>
// #include<math.h>
// int main(){
// int n;int count;int digit;int num;double power_sum=0;
// printf("Enter the number: ");
// scanf("%d", &n);

//     count = 0;
//     num = n;
//     while(num != 0){
//         count++;
//         num = num/10;

//     }
//     num = n;
//     while(num != 0){
//         digit = num%10;
//         power_sum = power_sum + pow(digit,count);
//         num = num/10;
//     }
//     if(power_sum == n){
//         printf("%d is an Armstrong number.",n);
//     }
//     else{
//         printf("%d is not an armstrong number.",n);
//     }
// }

// #include<stdio.h>
// #include<math.h>
// int main(){
//     int n;
//     int count=0;
//     int num;
//     int digit;
//     double power_sum = 0;

//     printf("Enter the number: ");
//     scanf("%d", &n);

//     num = n;
//     while(num != 0){
//         count++;
//         num = num/10;
//     }

//     num = n;
//     while(num !=0){
//         digit = num % 10;
//         power_sum = power_sum + pow(digit,count);
//         num = num/10;
//     }
//     if((int)power_sum == n){
//         printf("%d is an Armstrong number", n);

//     }
//     else{
//         printf("It is not armstrong");
//     }
// }
    

    
