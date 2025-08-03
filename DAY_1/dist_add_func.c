#include <stdio.h>
#include <stdlib.h>
struct dist
{
    int km;
    int m;
};
struct dist add(struct dist d1,struct dist d2)
{
    struct dist result;
    result.km=d1.km+d2.km;
    result.m=d1.m+d2.m;
    if (result.m>=1000)
    {
        result.km+=result.m/1000;
        result.m=result.m%1000;
    }
    return result;
}

int main()
{
    struct dist a1,a2,sum;
    printf("Enter first distance(km-m):");
    scanf("%d %d",&a1.km,&a1.m);
    printf("Enter second distance(km-m):");
    scanf("%d %d",&a2.km,&a2.m);
    sum=add(a1,a2);
    printf("Summed distance:\n%dkm and %dmeter",sum.km,sum.m);
}
