
#include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number of times : ");
//     scanf("%d", &n);
//     void greet(int n){
//         for(int i = 1; i<=n;i++){
//             printf("Hello world \n");
            
//         }
//     }
//     greet(n);
//     printf("This is how function works !");
//     return 0;
// }
//RETURN TYPE
// #include<stdio.h>

// int add(int v, int u){
//     return v + u;
// }

// int main(){
//     int a;
//     printf("Enter the first number: ");
//     scanf("%d", &a);
//     int b;
//     printf("Enter the second number: ");
//     scanf("%d", &b);
//     int sum = add(a, b);
//     printf("The sum of the numbers: %d\n", sum);

//     return 0;
// }
// combination
// #include<stdio.h>
// int factorial(int x){
//     int fact = 1;
//     for (int i = 2; i<= x; i++){
//         fact = fact * i;
//     }
//     return fact;
// }
// int combination(int n, int r){
//     int ncr = factorial(n)/(factorial(r)*factorial(n-r));
//     return ncr;
// }
// int main(){
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     int r;
//     printf("Enter r: ");
//     scanf("%d",&r); 
//     int ncr = combination(n,r);
//     printf("The combination of %dC%d is: %d",n,r,ncr);
//     return 0;
// }
// #include<stdio.h>
// int factorial(int x){
//     int fact = 1;
//     for (int i=2; i<=x;i++){
//         fact = fact * i;
//     }
//     return fact;
// }
// int permutation(int n, int r){
//     int npr = factorial(n)/factorial(n-r);
//     return npr;
// }
// int main(){
//     int n;
//     printf("Enter n:");
//     scanf("%d",&n);
//     int r;
//     printf("Enter r:");
//     scanf("%d",&r);
//     int npr = permutation(n,r);
//     printf("The permutation of %dp%d is: %d",n,r,npr);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int a;
//     int b;
//     int temp;
//     printf("Enter a: ");
//     scanf("%d",&a);
//     printf("Enter b: ");
//     scanf("%d",&b);
//     temp = a;
//     a=b;
//     b=temp;
//     printf("The value of a is: %d \n",a);
//     printf("The value of b is: %d",b);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int a;
//     int b;
//     printf("Enter a: ");
//     scanf("%d",&a);
//     printf("Enter b: ");
//     scanf("%d",&b);

//     a = a+b;
//     b= a-b;
//     a = a-b;
//     printf("The value of a: %d\n",a);
//     printf("The value of b: %d",b);
// }
// #include<stdio.h>

// void swap();
// int main(){
//     int a = 8;
//     int b =9;
    
//     swap(&a,&b);
//     printf("Vlaue a = %d\n",a);
//     printf("Value b = %d  ",b);
//     return 0;
// }
// void swap(int *x,int *y){
//     int temp = *x;
//     *x = *y;
//     *y = temp;
//     return ;}
// #include<stdio.h>
// int main(){
//     int a ;
//     printf("Enter 1st number: ");
//     scanf("%d",&a);
//     int b;
//     printf("Enter 2nd number: ");
//     scanf("%d",&b);
//     int gcd();
//     int hcf = gcd(a,b);
//     printf("The HCF/GCD of %d and %d : %d", a, b, hcf);
//     return 0;
// }
// int min(int a,int b){
//     if (a<b) return a;
//     else return b;

// }
// int gcd(int a,int b){
//     int hcf ;
//     for (int i = 1 ; i<= min(a,b); i++){
//         if(a%i == 0 && b%i ==0){
//             hcf = i;
//         }
//     }
//     return hcf;
    
// }
// 


// int factorial();
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     int fact = factorial(n);
//     printf("The factorial of %d: %d",n,fact);
//     return 0;
// }
// int factorial(int n){
//     if (n ==1 || n==0) return 1;
//     return n*factorial(n-1);
    
// }

// void greet();
// int main(){
//     int n;
//     printf("Enter the number of times you want to greet: ");
//     scanf("%d",&n);
//     greet(n);
// }
// void greet(int n){
//     if(n==0) return ;
//     printf("Good morning\n");
//     return greet(n-1);
// }
// int decrease();
// int main(){
//     int n;
//     printf("The number to start: ");
//     scanf("%d",&n);
//     decrease(n);
// }
// int decrease(int n){
//     if(n<=0) return;
//     return decrease(n-1);
//     printf("%d\n",n);
    

// int increase();
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     increase(1,n);
// }
// int increase(int x,int n){
//     if(x>n) return;
//     printf("%d \n",x);
//     return increase(x+1, n);
// }
//  
// #include<math.h>
// int recursion();
// int main(){
//     int base;
//     int exp;
//     printf("Enter base: ");
//     scanf("%d", &base);
//     printf("Enter exponent: ");
//     scanf("%d", &exp);
//     int answer = recursion(base, exp);
//     printf("%d raised to the power %d is %d", base, exp,answer);
// }
// int recursion(int base, int exp){
//     if(exp == 0) return 1;
//     return base* recursion(base, exp-1);
// }
// int fibo(int n);
// int main(){
//     int n;
//     printf("Enter the number of terms: ");
//     scanf("%d",&n);
//     printf("The series number: %d",fibo(n) );
    
    

// }
// int fibo(int n){
//     if (n==1 || n==2) return 1;
//     return fibo(n-1) + fibo(n-2);
    
// }
// int powerlog(int b, int p);
// int main(){
//     int b;
//     printf("Enter base: ");
//     scanf("%d",&b);
//     int p;
//     printf("Enter power: ");
//     scanf("%d",&p);
//     int ans = powerlog(b,p);
//     printf("%d raised to the power %d is: %d",b,p,ans);
//     return 0;
// }
// int powerlog(int b, int p){
//     if(p == 0) return 1;
//     int a = powerlog(b, p / 2);
//     if(p % 2 == 0) return a * a;
//     else return a * a * b;
// }
// MAZE PLAY
// 
// int maze(int n, int m);
// int main(){
//     int n;
//     printf("Enter the number of rows: ");
//     scanf("%d",&n);
//     int m;
//     printf("Enter the number of columns: ");
//     scanf("%d",&m);
//     int ways = maze(n,m);
//     printf("The number of possible ways: %d",ways);
//     return 0;
// }
// int maze(int n, int m){
//     int upwards = 0;
//     int leftwards = 0;
//     if(n == 1 && m == 1) return 1;
//     if(n==1){ //can't go upwards
//         leftwards +=  maze(n,m-1);
//     }
//     if(m==1){//can't do leftwards
//         upwards += maze(n-1,m);
//     }
//     if(n>1 && m>1 ){
//         leftwards +=  maze(n,m-1);
//         upwards += maze(n-1,m);
//     }
//     int totalways = leftwards + upwards;
//     return totalways;
// }
// void zigzag(int n);
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     zigzag(n);
//     return 0;
// }
// void zigzag(int n){
//     if(n==0) return;
//     printf("%d ",n);
//     zigzag(n-1);
//     printf("%d ",n);
//     zigzag(n-1);
//     printf("%d ",n);
//     return;
// }
// TOWER OF HANOI

void tower(int n, char s, char h, char d);
int main(){
    int n;
    printf("Enter the number of disks: ");
    scanf("%d",&n);
    tower(n,'A','B','C');
    return 0;
}
void tower(int n, char s, char h, char d){
    if(n==0) return;
    tower(n-1,s,d,h);
    printf("%c -> %c \n",s,d);
    tower(n-1,h,s,d);
    return;
}