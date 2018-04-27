#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,b,i; 
    scanf("%d",&n);
    for(i=1;i<=10;i++)
        {
        b=n*i;
        printf("%d x %d = %d\n",n,i,b);
    }
    return 0;
}
