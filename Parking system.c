
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int menu();
void showdetails();
void delete();
void cycle();
void riksha();
void bus();

int noc=0, nor=0, nob=0, count=0, amount=0;

int main()
{
   while(1)
   {  
       system("cls");
       
      switch(menu())
     
      {
        case 1: bus();
                break;
        case 2: cycle();
                break;
        case 3: riksha();
                break;
        case 4: showdetails();
                break;
        case 5: delete();
                break;
        case 6: exit(0);

        default:
                printf("Invalid command\n");
      }
   }
   return 0;
}

int menu()
{
    int ch;
    printf("\n\n1. Add Bus");
    printf("\n2. Add Cycle");
    printf("\n3. Add Rickshaw");
    printf("\n4. Display Details");
    printf("\n5. Delete Data");
    printf("\n6. Exit");
    printf("\n\nEnter your choice: ");
    scanf("%d",&ch);
    return ch;
}

void showdetails()
{
    printf("\n\nNumber of bus : %d", nob);
    printf("\nNumber of cycle : %d", noc);
    printf("\nNumber of rickshaw : %d", nor);
    printf("\nTotal amount : %d", amount);
    printf("\nTotal no. of vehicles : %d", noc + nob + nor);
    
    getch();
}

void delete()
{
   noc=0;
   nob=0;
   nor=0;
   amount=0;
   count=0;
}

void cycle()
{
    noc++;
    count++;
    amount += 10;
}

void riksha()
{
    nor++;
    count++;
    amount += 30;
}

void bus()
{
    nob++;
    count++;
    amount += 50;
}

