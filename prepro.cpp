#include <iostream>
#define AGE 25
#define MAX(a,b) ((a)> (b)? (a) :(b))
#define square(a) ((a) * (a))
#define forN(n) for (int i=0; i<n; i++) 
#define hello10Times() for (int i=0; i<10; i++) \
    printf ("Hello world\n");

int main(){
    
    int m=MAX (1,5);
    int s=square(2);

    printf ("%d\n", AGE);
    printf ("max is %d\n",m);
    printf ("square is %d\n",s);

    forN (10){
        forN(1){
            printf ("Hello world -%d\n", i);
        }
    }

    hello10Times();

    return 0;
}