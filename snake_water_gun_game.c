#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int snakewatergun(char you, char comp)
{
    // return 1 if you win,return -1 if you lose ,return 0 if draw;

    // draw condition
    //ss
    //gg
    //ww
    if (you == comp)
    {
        return 0;
    }

    // non draw condition;

    // sw
    // sg
    // gw

    // snake and water condition and vice versa
    if (you == 's' && comp == 'w')
    {
        return 1;
    }
    else if (you == 'w' && comp == 's')
    {
        return -1;
    }

    // snake and gun condition and vice versa
    if (you == 's' && comp == 'g')
    {
        return -1;
    }
    else if (you == 'g' && comp == 's')
    {
        return 1;
    }

    // gun and water condition and vice versa
    if (you == 'w' && comp == 'g')
    {
        return 1;
    }
    else if (you == 'g' && comp == 'w')
    {
        return -1;
    }
}
int main()
{
    char you, comp;
    srand(time(0));
     int number = rand() % 100 + 1;
     if(number<33){
         comp = 's';
     }
     else if(number>33 && number<66){
         comp = 'w';
     }
     else{
         comp = 'g';
     }
    printf("ENTER 'S' FOR SNAKE ,'W' FOR WATER AND 'G' FOR GUN\n");
    scanf("%c\n", &you);
    int result = snakewatergun(you, comp);
    printf("you choose %c and computer choose %c\nc", you, comp);
    if(result==0){
        printf("GAME DRAW:");

    }
    else if(result==1){
        printf("YOU WIN:");

    }
    else{
        printf("YOU LOSE:");

    }

    return 0;
}