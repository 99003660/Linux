#include<stdio.h>
#include<stdlib.h>

//int len=3; 

struct colour_box{
    int id;
    int length;
    int breadth;
    int height;
    char colour[10];
    int weight;
};
 
//int *box;

void initialize(struct colour_box box[],int num)
{
  

    for(int i=0;i<num;i++)
    {
        printf("enter the id of box%d:",i);
        scanf("%d\n",&box[i].id);
        printf("enter the length of box%d:",i);
        scanf("%d\n",&box[i].length);
        printf("enter the breadth of box%d:",i);
        scanf("%d\n",&box[i].breadth);
        printf("enter the height of box%d:",i);
        scanf("%d\n",&box[i].height);
        printf("enter the colour of box%d:",i);
        scanf("%s\n",box[i].colour);
        printf("enter the weight of box%d:",i);
        scanf("%d\n",&box[i].weight);
        //printf("id:%s\n",box[i].colour);
    }

}

/*void search_id(struct colour_box box[])
{
    int id;
    printf("enter the id to search:");
    scanf("%d\n",id);
    for(int i=0; i<len; i++)
    {
        if(box[i].id==id)
        {
            printf("%d\n",box[i]);
        }
    }

}

void add()
{

}

void volume()
{

}*/


int main()
{
    int num;
    printf("enter the no of elements:\n");
    scanf("%d",&num);
    struct colour_box *box=malloc(sizeof(struct colour_box)+num);
    /*struct colour_box box[3]={
        {1, 4, 3, 3, "red", 23},
        {1, 3, 3, 2, "blue", 20},
        {1, 2, 3, 1, "red", 21}
    };*/
    initialize(box, num);
    //search_id(box);
    return 0;

}

/*void valid_data(struct colour_box box[],int num)
{
    
    printf("enter the num of boxes:");
    scanf("%d",&num);

  
    for(int i=0;i<num;i++)
    {
        scanf("%d\n",&box[i].id);
        scanf("%f\n",&box[i].len);
        scanf("%f\n",&box[i].bre);
        scanf("%f\n",&box[i].h);
        scanf("%s\n",&box[i].colour);
        scanf("%f\n",&box[i].weight);
    }

   printf("%d\n",box[0].id);
   //return 0;
    
}

int main()
{
    int num;
    scanf("%d\n",&num);
    struct colour_box *box;
    box=(struct*)malloc(sizeof(struct) * num);
    valid_data();
}
search()
{
    int searchid;
    printf("enter the id to search:");

}*/