#include<stdio.h>

int main()
{
    // declares b to be a pointer:
    int a, *b;

    
    a = 10;
    //pointer b zeigt auf a:
    b = &a;

    //"Inhalt" von b (das, worauf er zeigt, dessen Inhalt), ist 10:
    printf("%d\n", *b);
    //Adresse von a:
    printf("%p\n", b);
    //Addresse von b:
    printf("%p\n", &b);

return 0;

}
