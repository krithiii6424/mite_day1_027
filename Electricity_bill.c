#include<stdio.h>
int main()
{
    int id,units;
    char name[255];
    
    printf("enter id:");
    scanf("%d",&id);
    
    printf("enter name:");
    scanf("%s",name);
    
    printf("enter units:");
    scanf("%d",&units);
    
    float base=100.0f;
    float surcharge=0.0f;
    float total_bill=0.0f;
    
    if (units>100)
    {
        base+=(100.0f * 5.0f);
    }
    else
    {
        base+=(units * 5.0f);
    }
    if (units>300)
    {
        base+=(200.0f * 7.0f);
    }
    else if(units>=100 && units<300)
    {
        base+=((units - 100.0f) * 7.0f);
    }
    if (units>300)
    {
        base+=((units - 300.0f) * 10.0f);
    }
    
    if (base>1000.0f)
    {
        surcharge=((base / 100.0f) * 5.0f);
    }
    total_bill=base+surcharge;
    
    printf("bill details:");
    printf("ID number:%d\n",id);
    printf("name:%s\n",name);
    printf("units consumed:%d\n",units);
    printf("base amount:%0.2f\n",base);
    if (surcharge>0.0f)
    {
        printf("surcharge=%0.2f\n",surcharge);
    }
    printf("total_bill:%0.2f\n",total_bill);
    
    return 0;
}
