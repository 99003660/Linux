#include<stdio.h>

struct colour_box{
    int id;
    float len;
    float bre;
    float h;
    char colour[10];
    float weight;
};

int main()
{
    int *arr;
    int i, num;
    struct colour_box box;
    printf("enter the num of boxes:");
    scanf("%d",&num);

    box=(int*)malloc(sizeof(int)*num);

    for(i=0;i<num;i++)
    {
        scanf("%d\n",&box[i].id);
        scanf("%f\n",&box[i].len);
        scanf("%f\n",&box[i].bre);
        scanf("%f\n",&box[i].h);
        scanf("%s\n",&box[i].colour);
        scanf("%f\n",&box[i].weight);
    }

    printf("enter the id to search:");
    


}