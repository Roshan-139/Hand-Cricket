//Mini Project
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void batting_player();
void bowling_player();
void end();
void game();
void play_again();
int main()
{
    system("COLOR E4");
    game();
}
void game()
{
    printf("\n\n\n");
    printf("                         -----------------------------------\n");
    printf("                         Welcome to the Game of Hand cricket\n\n");
    printf("                                    Powered by FAANG\n");
    printf("                         -----------------------------------\n");
    printf("\n");
    printf("\n");
    char name[100];
    printf("                    Enter Player Name - ");
    scanf("%s",name);
    printf("\n");
    printf("                         ---------\n");
    printf("                         Toss Time\n");
    printf("                         ---------\n");
    printf("\n");
    int choice_toss;
    printf("                    Enter your choice (1-Heads Or 2-Tails) - ");
    scanf("%d",&choice_toss);
    int lower=1,upper=2,toss;
    srand(time(NULL));
    toss=(rand()%(upper-lower+1)+lower);
    if(toss==choice_toss)
    {
        printf("\n                    You won the toss\n\n");
        int choice_bat_ball;
        printf("                    Choose batting or bowling (1-Batting Or 2-Bowling) - ");
        scanf("%d",&choice_bat_ball);
        if(choice_bat_ball==1)
            batting_player();
        else
            bowling_player();
    }
    else
    {
        int bot_choice,lower=1,upper=2;
        printf("\n                    Bot won the toss\n\n");
        srand(time(NULL));
        bot_choice=(rand()%(upper-lower+1)+lower);
        if(bot_choice==1)
        {
            printf("                    Bot is batting");
            bowling_player();
        }
        else
        {
            printf("                    Bot is bowling");
            batting_player();
        }
    }
}
void batting_player()
{
    printf("\n\n");
    printf("                          ------------\n");
    printf("                          First Inning\n");
    printf("                          ------------\n");
    int score_1,total_1=0;
    a:
    printf("\n                    Enter The Run You Want To Score - ");
    scanf("%d",&score_1);
    int score_2,lower=0,upper=6;
    srand(time(NULL));
    score_2=(rand()%(upper-lower+1)+lower);
    printf("\n                    Bot Threw - %d",score_2);
    if(score_1!=score_2)
    {
        total_1+=score_1;
        printf("\n                    Total Runs Scored - %d",total_1);
        printf("\n");
        goto a;
    }
    else
    {
        printf("\n");
        printf("\n                    Out");
        printf("\n\n                  Target - %d",(total_1)+1);
        printf("\n\n");
        printf("                         -------------\n");
        printf("                         Second Inning\n");
        printf("                         -------------\n");
        int score_3,total_2=0;
        b:
        printf("\n                    Enter The Run You Want To Ball - ");
        scanf("%d",&score_3);
        int score_4,lower=0,upper=6;
        srand(time(NULL));
        score_4=(rand()%(upper-lower+1)+lower);
        printf("\n                    Run Scored By Bot - %d",score_4);
        if(score_3!=score_4)
        {
            total_2+=score_4;
            if(total_1>=total_2)
            {
                printf("\n                    Total Runs Scored - %d",total_2);
                printf("\n");
                goto b;
            }
            else
            {
                printf("\n");
                printf("\n                    Bot Won The Match");
                printf("\n");
                play_again();
            }
        }
        else(score_3==score_4);
        {
            printf("\n");
            printf("\n                    Bot is Out");
            if(total_1>total_2)
            {
                printf("\n                    You Won The Match");
                printf("\n");
                play_again();
            }
            else if(total_1==total_2)
            {
                printf("\n                    Match is Tie");
                printf("\n");
                play_again();
            }
            else
            {
                printf("\n                    Bot Won The Match");
                printf("\n");
                play_again();
            }
        }
    }
}
void bowling_player()
{
    printf("\n\n");
    printf("                         ------------\n");
    printf("                         First Inning\n");
    printf("                         ------------\n");
    int score_1,total_1=0;
    a:
    printf("\n                    Enter The Run You Want To Ball - ");
    scanf("%d",&score_1);
    int score_2,lower=0,upper=6;
    srand(time(NULL));
    score_2=(rand()%(upper-lower+1)+lower);
    printf("\n                    Run Scored By Bot - %d",score_2);
    if(score_1!=score_2)
    {
        total_1+=score_2;
        printf("\n                    Total Runs Scored - %d",total_1);
        printf("\n");
        goto a;
    }
    else
    {
        printf("\n");
        printf("\n                    Out");
        printf("\n\n                    Target - %d",(total_1)+1);
        printf("\n\n");
        printf("                         -------------\n");
        printf("                         Second Inning\n");
        printf("                         -------------\n");
        int score_3,total_2=0;
        b:
        printf("\n                    Enter The Run You Want To Score - ");
        scanf("%d",&score_3);
        int score_4,lower=0,upper=6;
        srand(time(NULL));
        score_4=(rand()%(upper-lower+1)+lower);
        printf("\n                    Bot Threw - %d",score_4);
        if(score_3!=score_4)
        {
            total_2+=score_3;
            if(total_1>=total_2)
            {
                printf("\n                    Total Runs Scored - %d",total_2);
                printf("\n");
                goto b;
            }
            else
            {
                printf("\n");
                printf("\n                    You Won The Match");
                printf("\n");
                play_again();
            }
        }
        else(score_3==score_4);
        {
            printf("\n");
            printf("\n                    Bot is Out");
            if(total_1>total_2)
            {
                printf("\n                    Bot Won The Match");
                printf("\n");
                play_again();
            }
            else if(total_1==total_2)
            {
                printf("\n                    Match is Tie");
                printf("\n");
                play_again();
            }
            else
            {
                printf("\n                    You Won The Match");
                printf("\n");
                play_again();
            }
        }
    }
}
void play_again()
{
     int choice_1;
     printf("\n                    Do You Want To Play The Game Once More ? (1-Yes Or 2-No) - ");
     scanf("%d",&choice_1);
    switch(choice_1)
    {
        case 1:
           game();
           break;
       case 2:
           end();
           break;
    }
}
void end()
{
    printf("\n\n");
    printf("\n                         -------------------------");
    printf("\n                         Hope You Enjoyed The Game");
    printf("\n                                 Thank You");
    printf("\n                         -------------------------");
    printf("\n\n");
    exit(1);
}
