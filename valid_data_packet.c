#include <stdio.h>
#include<string.h>
#include <ctype.h>
#include <stdint.h>

#define start 0xff
#define end 0x00



uint8_t arr[]= {0x0a, 0x099, 0xff, 0xff, 0x03, 0x01, 0x02, 0x03,0x00,0x034 };
unsigned char *ptr ;


//ptr = &data;

void data_c (const uint16_t* data, size_t size)
{ 
    int index=0;
  for(size_t i=0; i<size; i++)
  {
      if(data[i]== 0xff)
      {
          index = i;
          //exit(0);
      }
    //printf("\n%x\n",data[i]);
  }
  for(size_t i=index-1; i<=size; i++)
  {
      printf("\n%x\n",data[i]);
  }
 
}
 


int main ()
{

  
   int i=0, found = 0, n;

    int length = 0;
    while (arr[i]!= 0x00)
    { 
    length++;
    i++;
    }

    data_c(&arr ,length);

    printf("%d length value\n",length);
    printf("%d i value\n",i);
  
}
uint16_t arr[] = { 0x0a,0x099,0xff,0xff, 0x03, 0x01, 0x02, 0x03,0x00,0x034 };
unsigned char *ptr ;


//ptr = &data;

void data_c (const uint16_t* data, size_t size)
{ 
    int index=0;
  for(size_t i=0; i<size; i++)
  {
      if(arr[i]== 0xff)
      {
          index = i;
          //exit(0);
      }
    //printf("\n%x\n",data[i]);
  }
  for(size_t i=index-1; i<=size; i++)
  {
      printf("\n%x\n",arr[i]);
  }
 
}
 


int main ()
{

  
   int i=0, found = 0, n;

    int length = 0;
    while (arr[i]!= 0x00)
    { 
    length++;
    i++;
    }

    data_c(&arr ,length);

    printf("%d length value\n",length);
    printf("%d i value\n",i);
  
}
  
