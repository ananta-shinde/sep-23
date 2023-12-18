#include<stdio.h>
int main(int argc, char const *argv[])
{
    int marks[5][3];
    int result[5];
    for(int i=0;i<5;i++)
    {
        printf("enter marks for student %d\n",i+1);
        for(int j=0;j<3;j++)
        {
            printf("enter marks for student %d subject %d\n",i+1,j+1);
            scanf("%d",&marks[i][j]);
        }
        printf("*****************************************\n");
    }

    // sum of marks
    //first studnet : index 0
    // marks[0][0]+ marks[0][1]+ marks[0][2];
    // marks[1][0]+ marks[1][1]+ marks[1][2];
    // marks[2][0]+ marks[2][1]+ marks[2][2];

    for(int i=0;i<5;i++)
    {
        int total =  marks[i][0]+ marks[i][1]+ marks[i][2];
        result[i] = total;
    }

    // print result

    for(int i=0;i<5;i++)
    {
         printf("total for student %d : %d\n",i+1,result[i]);
    }

    // find top value in result
    int largest = result[0];
    int indexOfTopper = 0;
    for(int i=0;i<5;i++)
    {
        if(result[i] >= largest)
        {
            largest = result[i];
            indexOfTopper = i;
        }
    }
    printf("Topper is student %d has %d marks\n",indexOfTopper+1,largest);   
    return 0;
}
