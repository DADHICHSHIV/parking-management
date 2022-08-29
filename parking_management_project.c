#include <stdio.h>
#include<stdlib.h>
void bus();
void car();
void riksha();
void motorcycle();
int meanu();
void showdetails();
void delete ();

int nob = 0,
    noc = 0, nor = 0, nom = 0, amount = 0, count = 0;

void main()
{
    while (1)
    {
        switch (meanu())
        {
        case 1:
            bus();
            break;
        case 2:
            car();
            break;
        case 3:
            riksha();
            break;
        case 4:
            motorcycle();
            break;
        case 5:
            showdetails();
            break;
        case 6:
            delete ();
            break;
        case 7:
            exit(0);
            break;

        default:
            printf("\ninvalid choice: ");
            break;
        }
    }
}
int meanu()
{
    int ch;
    printf("\n1 enter bus");
    printf("\n2 enter car");
    printf("\n3 enter riksha");
    printf("\n4 enter motorcycle");
    printf("\n5 show status");
    printf("\n6 delete data");
    printf("\n7 exit");

    printf("\n\nenter your choice\n");
    scanf("%d", &ch);

    return (ch);
}
void delete ()
{
    nob = 0;
    noc = 0;
    nor = 0;
    noc = 0;
    count = 0;
    amount = 0;
}
void showdetails()
{
    printf("\nnumber of bus: %d", nob);
    printf("\nnumber of car: %d", noc);
    printf("\nnuber of riksha: %d", nor);
    printf("\nnumber of cycle: %d", noc);
    printf("\ntotal vahical: %d", count);
    printf("\ntotal amount: %d", amount);
}
void bus()
{printf("\nentry sucessful\n");
    nob++;
    amount = amount + 100;
    count++;
}
void car()
{printf("\nentry sucessful\n");

    noc++;
    amount = amount + 70;
    count++;
}
void riksha()
{printf("\nentry sucessful\n");
    nor++;
    amount = amount + 50;
    count++;
}
void motorcycle()
{printf("\nentry sucessful\n");
    noc++;
    amount = amount + 30;
    count++;
}
