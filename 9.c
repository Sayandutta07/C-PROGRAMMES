// #include<stdio.h>
// int main(){
//        struct pokemon{
//         int hp;
//         int speed;
//         int attack;
//         char tier;
//        };
//        struct pokemon pikachu;
//        pikachu.hp = 70;
//        pikachu.speed = 90;
//        pikachu.attack = 89;
//        pikachu.tier = "A";
//        printf("%d",pikachu.hp);
//        return 0;
// }
// #include<stdio.h>
// #include<string.h>
// int main(){
       // struct book{
       //        char name[100];
       //        float price;
       //        int pages;
       // };
       // struct book book1;
       // strcpy(book1.name,"Sayan");
       // book1.price = 456.50;
       // book1.pages = 89;

       // printf("%s\n%.2f\n%d",book1.name,book1.price,book1.pages);
       // return 0;
//        struct book{
//               char name[100];
//               float price;
//               int noOfpages;

//        };
//        struct book book1;
//        strcpy(book1.name,"ZerotoHero");
//        book1.price = 567.32;
//        book1.noOfpages = 900;

//        printf("Name of the book: %s\n",book1.name);
//        printf("Price of the book:%.2f\n",book1.price);
//        printf("Number of pages:%d\n",book1.noOfpages);
//        return 0;
// }
#include<stdio.h>
#include<strings.h>
int main(){
       struct person{
              char name[90];
              int salary;
              int age;


       };
       struct person person1;
       strcpy(person1.name,"Sayan Dutta");
       person1.salary = 34500;
       person1.age = 45;

       struct person person2;
       strcpy(person2.name,"Anwesha Saha");
       person2.salary = 34000;
       person2.age = 20;

       printf("Name of first person:%s\n",person1.name);
       printf("Name of second person:%s\n",person2.name);
       return 0;
}