#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int ac, char **av) //ac = argument count / av= array of arguments 
{ if(ac != 3){
    return 0;
}
    int x = atoi(av[1]); //convert string to intenger 
    int y = atoi(av[2]); 

    for(int i = 0; i < y; i++)
    { 
        for(int j = 0; j < x; j++)
        { 
            if(i == 0 && j == 0) 
                printf("o"); 
            else if(i == y - 1 && j == x - 1) 
                printf("o");
            else if(i == y - 1 && j == 0) 
                printf("o");
            else if(i == 0 && j == x - 1) 
                printf("o");
            else if(i == 0 || i == y - 1) 
        {
            printf("-");
        }
            else if(j == 0 || j == x - 1)
        {
            printf("|");
        } 
            else 
        {
            printf(" ");
        }
     }
        printf("\n");
 }
    return 0;
}




