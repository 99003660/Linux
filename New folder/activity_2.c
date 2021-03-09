#include <stdio.h>
#include<string.h>
#include <ctype.h>
#include <stdint.h>
#include<stdlib.h>

typedef struct  
{
    int uniq_id;
    int length;
    int breadth;
    int height;
    char colour[50];
    int weight;
}colour_box;  

// typedef struct {
//   int *elements;
//   int size;
//   int cap;
// };

int main()
{
    int num, choice;
    printf("Enter number of boxes\n");
    scanf("%d",&num);
    colour_box *box = malloc(sizeof(colour_box)+num);
    //printf("Enter choice\n 1- Display state of all boxes \n 2- find the box with given id
    //\n 3 - count all boxes with specified colour \n ");
    //scanf("%d",&choice);
    read(box, num);
    /*switch(choice)
    {
        case 1:
                display(box, num);
             break;

    }*/
   


    // int* box; 
    // int n, i; 
  
    // // Dynamically allocate memory using malloc() 
    // box = (struct*)malloc(5 * sizeof(struct)); 
  
    // // Check if the memory has been successfully allocated by malloc or not 
    // if (box == NULL) { 
    //     printf("Memory not allocated.\n"); 
    //     exit(0); 
    // } 
    // else
    // { 
    //     // Memory has been successfully allocated 
    //     printf("Memory successfully allocated using malloc.\n"); 
    //     struct colour_box *box[5];
    //     for(i = 0; i<5; i++)
    //     {
    //         read(colour_box *box);
    //     }
    // }

return 0;
}

void read(colour_box box[], int num)
{
    int i;
    for(i = 0; i <num; i++)
    {
        printf("Enter the id of box%d\n",i);
        scanf("%d",&box[i].uniq_id);
        printf("Enter the length of box%d\n",i);
        scanf("%d",&box[i].length);
        printf("Enter the breadth of box%d\n",i);
        scanf("%d",&box[i].breadth);
        printf("Enter the height of box%d\n",i);
        scanf("%d",&box[i].height);
        printf("Enter the colour of box%d\n",i);
        scanf("%s",box[i].colour);
        printf("Enter the weight of box%d\n",i);
        scanf("%d",&box[i].weight);
    }
}

void add()
{

}

void display(colour_box box[], int num)
{
    int i;
    for(i = 0; i <num; i++)
    {
        printf("*********Details for Box %d*********\n", (i+1));
        printf("unique id - %d\n", box[i].uniq_id);
        printf("length - %d\n", box[i].length);
        printf("breadth - %d\n", box[i].breadth);
        printf("height - %d\n", box[i].height);
        printf("colour - %s\n", box[i].colour);
        printf("weight - %d\n\n", box[i].weight);
    }

}
