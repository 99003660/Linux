#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdint.h>
#include<stdlib.h>

uint16_t data[] = {0xff,0xFF, 0x03, 0x01, 0x02, 0x03,0x00,0x034 };

#define start 0xff
#define end 0x00

int vali_data(const uint16_t* data);
int len = 0;

int valid_data(const uint16_t* data)
{ 
    int index=0;
  for(size_t i=0; i<=sizeof(data)-2; i++)
  {
      if((data[i]== start) && (data[i+1]== start))
      {  
         
        len = data[i+2];  
        if(data[i+3+len]== 0x00)
        {
           index=i+3;
           break;
           
          
        }
        
      }
	if( index != 0)
    {
       	return index;
    }
    else 
    {
      	return -1;
    }
   }

}



int main ()
{
    int p, i;
    p = valid_data(&data); 
    if(p == -1)
    {
      printf("valid Data packet not found");
    }
    else
    {
      printf("valid data Packet found\n");
      for(i = (p-3); i <= (len+p); i++)
      {
        printf("0x%02x\n",data[i]);
      }
    }
    return 0;
}


