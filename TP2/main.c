#include <stdio.h>

int main() {
//ex 1:
    /*   int n;
       do{
        printf("donner n entre 1<n<100");
        scanf("%d",&n,"\n");
       }while(1>n || n>100);
        printf("xx");
    */
//ex 2:
/*
int a , i;
printf("nombre de fois :");
scanf("%d",&a);
for (i=1 ; i<=a; i++){
    printf("%d ENSI\n", i );
}
*/
//ex3:
/*
int a , i;
printf("nombre de fois :");
scanf("%d",&a);
for (i=-1 ; i>a; i--){
    printf("%d ENSI\n",i );
}
*/
//ex4:
/*
int i;
i=1;
do {
    printf ("%d hi\n", i);
    i++;
}while(i<=10);
*/

/*
 float x,a,b;
printf("entrer 2 nombres");
scanf("%f%f",&a, &b);
if (a>b){
        printf("le min b : a<b =>   %.2f>%.2f",a,b);
    }else{
       printf("le min a  : b<a =>  %.2f>%.2f",b,a);
    }
*/

/*
float a , b , x;
printf("entrer a et b ");
scanf("%f%f",&a ,&b);
printf("%f %f\n", a ,b);
if (a!=0){
    x=- b / a ;
    printf("-b/a=%f", x);
}else{
    if (b==0)
        printf("R");
    else
        printf("vide");
}


*/

    int i, c, e;
    for (i = 1; i <= 3; i++) {
        for (c = 1; c <= 41 - i; c++) {
            printf(" ");
        }
        for (e = 1; e <= 2 * i -1; e++) {
            printf("*");
        }
        printf("\n");
    }

//

    for (i = 1; i <= 5; i++) {
        for (c = 1; c <= 41 - i; c++) {
            printf(" ");
        }
        for (e = 1; e <= 2 * i -1; e++) {
            printf("*");
        }
        printf("\n");
    }

    for (i = 1; i <= 7; i++) {
        for (c = 1; c <= 41 - i; c++) {
            printf(" ");
        }
        for (e = 1; e <= 2 * i -1; e++) {
            printf("*");
        }
        printf("\n");
    }



    for (i = 1; i <= 10; i++) {
        for (c = 1; c <= 38; c++) {
            printf(" ");
        }
        for (e = 1; e <= 4; e++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
