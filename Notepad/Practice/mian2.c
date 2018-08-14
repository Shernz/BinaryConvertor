#include <stdio.h>
#include <string.h>
void binary(int num)
{
    int i=0,q=num,r=0;
    char *bin[10];
    while (q!=1)
    {
        q/=2;
        r=q%2;
        strcpy(*bin,(char*)(r));
        i+=1;
    }
    bin[strlen(*bin)-1]=(char*)(q);
    printf("%s",strrev(*bin));
}
/*void hexa(int num)
{

}
void octal(int num)
{

}*/
int main()
{
    int n=8;
    binary(n);
    return 0;
}
