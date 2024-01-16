#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

#define Max_health 100
#define Max_mana 100
#define Max_mentalsanity 100

int health, mana, mentalsanity, stamina, physicaldef, physicaldmg,
magicaldmg, magicaldef, moneybag, day;

void merchants();
void tavern();
void robbing();
void woods();
void cavern();
void nextDay();

int main(void)
{
int health = Max_health;
int mana = Max_mana;
int mentalsanity = Max_mentalsanity;
int stamina = 100;
int physicaldmg = 1;
int physicaldef = 0;
int magicaldmg = 0;
int magicaldef = 0;
int moneybag = 25;
int day = 0;

 
while(1){
    printf("Where would you like to venture today?\n");
    printf("1: Go see the merchants\n");
    printf("2: To the Tavern!\n");
    printf("3: Rob people\n");
    printf("4: Go see into the woods\n");
    printf("5: Seek a Cavern for treasure\n");
    printf("6: Exit game\n");

    int choice;
    scanf("%d", &choice);

    if (choice ==6)
    {
        printf("Exiting the game...\n");
        break;
    }

    switch (choice)
    {
    case 1:
    merchants();
    break;

    case 2:
    tavern();
    break;
    
    case 3:
    robbing();
    break;

    case 4:
    woods();
    break;

    case 5:
    cavern();
    break;

    default:
    printf("\nEnter a valid choice!");
    break;
    }
    usleep(10000); // wait a short time (100 ms)
    nextDay();


    printf("Your current Health is %d\n", health);
    printf("Your current Mana is %d\n", mana);
    printf("Your current Mental state is %d\n", mentalsanity);
    printf("Your Physical defence is %d\n", physicaldef);
    printf("Your current Physical Damage is %d\n", physicaldef);
    printf("Your Magical protection is %d\n", magicaldef);
    printf("Your current Magical Damage is %d\n", magicaldef);
    printf("Your total Money is %d\n", moneybag);
}
    return 0;
}
void merchants()
{
    printf("You go see the merchants\n");
}
void tavern()
{
    int chance = rand() %100;
    if (chance < 5)
    {
        printf("While listening to a bard in a local tavern\nYou got rob by a mysterious pickpocket");
        moneybag -= 15;
        mentalsanity -= 5;
    }
    else if (chance < 25)
    {
        printf("You go to the tavern\nYou regain some Health and Mental sanity");
        health += 25;
        mentalsanity +=25;
        if (health > Max_health)
        {
            health = Max_health;
        }
        if (mentalsanity > Max_mentalsanity)
        {
            mentalsanity = Max_mentalsanity;
        }
    }
    else if (chance < 90)
    {
        printf("While at the tavern, feasting and solacing\nYou found some money that a fellow drunk noble must have forgot");
    }
}
void robbing()
{
    printf("You try to rob people\n");
}
void woods()
{
    printf("You go to the woods\n");
}
void cavern()
{
    printf("You seek for a cavern entrance\n");
}
void nextDay()
{
    day++;
    printf("A new day begins\n");
}