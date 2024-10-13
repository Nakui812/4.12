#include <stdio.h>

int main(void) {
    int a  ;
    int b  ;
    int n;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&n);
    int i=a ;
    while(i<a||i<b){
        n=n*i;
        printf("%d\n",n);
        i++;
    }
}