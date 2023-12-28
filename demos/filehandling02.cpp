#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
   char* data;
   FILE* myfile =  fopen("data.text","r");
   if(myfile == NULL)
   {
      printf("\nfile not found");
   }
   else{
      
       fprintf(myfile,"%s","Hello to everyone");
    //    fgets(data,20,myfile);
      
       printf("%s",data);
   }
    return 0;
}
