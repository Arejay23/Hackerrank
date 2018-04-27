#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float c;
    float ta;
    float ti;
    float tc;
    int tc1;
    
    scanf("%f",&c);
    scanf("%f",&ti);
    scanf("%f",&ta);
    tc=(c+(c*(ti/100))+(c*(ta/100)));
     tc1=(c+(c*(ti/100))+(c*(ta/100)));
    if(tc-tc1<0.5)
    {printf("The total meal cost is %d dollars.",tc1);}
    else
        printf("The total meal cost is %d dollars.",tc1+1);
    
    return 0;
}
