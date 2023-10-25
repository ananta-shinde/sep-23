#include<stdio.h>
int main(int argc, char const *argv[])
{
    int nums[5] = {45,85,74,85,55};

    for(int j=0;j<5;j++){
        
            int choice = nums[j] ;
            int count  = 0;  
            for(int i=0;i<5;i++){
                if(choice == nums[i]){
                    count++;
                }   
            }
            if(count == 0){
                printf("Number not found");
            }
            else{
                printf("%d found, %d times",nums[j],count);
            }

    }
    
    return 0;
}
