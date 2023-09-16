#include<stdio.h>

int main()
{
    printf("PLAYER 1 IS - 0\nPLAYER 2 IS - 10\n");   
    int table[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int p1,p2;
    
    while (1)
    {
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
             printf("|%2d|    ",table[i][j]);
        }
        printf("\n");

        
    }
    printf("PLAYER 1: ");
    scanf("%d",&p1);
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
             if(table[i][j]==p1)
             {
                 table[i][j]=0;
             }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
             printf("|%2d|     ",table[i][j]);
        }
        printf("\n");

        
    }
    if((table[0][0]==table[1][1]&&table[1][1]==table[2][2]&&table[2][2]==0) || (table[0][2]==table[1][1]&&table[1][1]==table[2][0]&&table[2][0]==0) || (table[0][0]==table[0][1]&&table[0][1]==table[0][2]&&table[0][2]==0) || (table[1][0]==table[1][1]&&table[1][1]==table[1][2]&&table[1][2]==0) || (table[2][0]==table[2][1]&&table[2][1]==table[2][2]&&table[2][2]==0) || (table[0][0]==table[1][0]&&table[1][0]==table[2][0]&&table[2][0]==0) || (table[0][1]==table[1][1]&&table[1][1]==table[2][1]&&table[2][1]==0) || (table[0][2]==table[1][2]&&table[1][2]==table[2][2]&&table[2][2]==0))
    {
        printf("player 1 won");
        break;
    }

    printf("PLAYER 2: ");
    scanf("%d",&p2);
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
             if(table[i][j]==p2)
             {
                 table[i][j]=10;
             }
        }
    }
     if((table[0][0]==table[1][1]&&table[1][1]==table[2][2]&&table[2][2]==10) || (table[0][2]==table[1][1]&&table[1][1]==table[2][0]&&table[2][0]==10) || (table[0][0]==table[0][1]&&table[0][1]==table[0][2]&&table[0][2]==10) || (table[1][0]==table[1][1]&&table[1][1]==table[1][2]&&table[1][2]==10) || (table[2][0]==table[2][1]&&table[2][1]==table[2][2]&&table[2][2]==10) || (table[0][0]==table[1][0]&&table[1][0]==table[2][0]&&table[2][0]==10) || (table[0][1]==table[1][1]&&table[1][1]==table[2][1]&&table[2][1]==10) || (table[0][2]==table[1][2]&&table[1][2]==table[2][2]&&table[2][2]==10))
    {
        printf("player 2 won");
        break;
    }
    
    }
    
    


}
