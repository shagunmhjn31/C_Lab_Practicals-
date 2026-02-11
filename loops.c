// #include <stdio.h>
// int main(){
//     printf("hello world");
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     for (int i=10; i>=1; i-=1){
//         printf("%d \n", i);
//     }
//     return 0; 
// }


// Q- PRINT NUMBERS FROM 0 TO 10
// #include <stdio.h>
// int main(){
//     for(int i=0; i<=10;i+=1){
//         printf("%d \n ", i);

//     }
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int i=1;
//     printf("%d \n", i++);
//     printf("%d", i);
//     printf("%d\n", ++i );
//     printf("%d\n", i);
//     return 0;
// }


// #include <stdio.h>
// int main() {
//     for (float i=1.0; i<=5.0; i++){
//         printf("%f \n", i);
//     }
//     for(char ch="a" ; ch<="z " ; ch++){
//         printf("%c \n " , ch );

//     }    
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     for (int i=1; ;i++){
//         printf("hello");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     for(int i =1; i<=5;i+=1){
//         printf("hello world");
//     }
//     return 0;
// }


// Q PRINT NUMBERS FROM 1 TO 10
// #include <stdio.h>
// int main(){
//     for (int i = 1; i<=10;i+=1){
//         printf("%d\n", i);
//     }
//     return 0;
// }

// Q PRINT NUMBER FROM 10 TO 1
// #include <stdio.h>
// int main(){
//     for (int i=10; i>=1; i-=1){
//         printf("%d \n", i);

//     }
//     return 0;
// }



// Q PRINT EVEM NUMBERS FROM 1- 20
// #include <stdio.h>
// int main(){
//     for (int i =1;i<=20;i+=1){
//         if (i%2==0){
//             printf("%d\n ", i);
//         }
//     }
//     return 0;
// }


// // Q PRINT ODD NUMBERS FROM 1 TO 20
// #include <stdio.h>
// int main(){
//     for (int i=1; i<=20;i+=1){
//         if (i%2!=0){
//             printf("%d \n", i);
//         }
//     }
//     return 0;
// }


// // Q PRINT SUM OF N NUMBERS

// #include <stdio.h>
// int main(){
//     int n, sum=0;
//     printf("enter number");
//     scanf("%d" , &n);
//     for (int i=1; i<=n;i++){
//         sum+=i;
//         printf("sum is %d ", sum);
//     }
    
//     return 0;
// // }
// PRINT SUM OF EVEN NUMBERS TILL N
// #include <stdio.h>
// int main(){
//     int n,sum=0;
//     printf("enter number");
//     scanf("%d", &n);
//     for (int i=1; i<=n; i+=1){
//         if (i%2==0){
//             sum+=i;
//             printf("sum is %d", sum);
//         }
//     }
//     return 0;
// }

// FACTORIAL
// #include <stdio.h>
// int main(){
//     int n,fact=1;
//     printf("enter number");
//     scanf("%d ", &n);
//     if (n<0){
//         printf("fact not possible");
//     }
//     else{
//         for (int i=1; i<=n;i++){
//             fact*=i;
//         }
//         printf("the factorial of %d is %d", n , fact);

//     }
//     return 0;
// }



// Q COUNT THE DIGITS IN A NUMBER
// #include <stdio.h>
// int main(){
//     int n,count =0;
//     printf("enter the number");
//     scanf("%d", &n);
//     for (int i>0;)
// }





// #include <stdio.h>
// int main(){
//     int n, sum=0;
//     printf("enter number");
//     scanf("%d" , &n);
// //     for (int i=1; i<=n;i++){
// //         sum+=i;
// // //         printf("sum is %d ", sum);
// // //     }
    
// // //     return 0;
// // // }

// #include <stdio.h>
// int main(){
//     int n,sum=0;
//     printf("enter the number");
//     scanf("%d", &n);
//     for (int i=0, i>=1,i+=1){
//         sum+=i; 
//     }
//     printf("%d", sum); 
//     return 0;
// }

// QQQ SUM OF DIGIT OF THE NUMBER
// #include <stdio.h>
// int main() {
//     int n, sum = 0;
//     printf("enter number");
//     scanf("%d", &n);
//     for (; n > 0; ) {
//         sum += n % 10;
//         n /= 10;
//     }
//     printf("%d", sum);
//     return 0;
// }



// #include <stdio.h>
// int main(){
//     int n, count=0;
//     printf("enetr number");
//     printf("%d", &n);
//     for (;n!=0;n=n/10){
//         count+=1;
//     }
//     printf("%d", count);
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int n,rev=0;
//     printf("enter number");
//     scanf("%d", &n);
//     for (; n!=0; n=n/10){
//         rev=rev*10+n%10;

//     }
//     printf("%d revrse is %d", n , rev);
//     return 0;
    
// } 



// Qcheck prime number
#include <stdio.h>
int main(){
    int n , prime=1;
    printf("enter number");
    scanf("%d", &n);
    if (n>=2){
        prime=1;
        for (int n>2 ;n!=0; n+=1){
            n%n==0;
            prime=n;
        }
        printf("%d", prime);
    }
    return 0;


}
