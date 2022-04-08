#include <stdio.h>

#include <string.h>

struct dop
{
    int dd, mm, yy;
};

typedef struct dop date;

typedef struct bookdetail
{

    char id[10];

    char name[20];

    char category[50];

    char author[20];

    char publisher[50];

    date dop;

    float discount;

    float price;
} book_rec;

void main()

{

    book_rec b[10];

    int i;

    float total1 = 0, total2 = 0;

    for (i = 0; i < 10; i++)

    {

        printf("\nENTER DETAILS FOR %d BOOK", i + 1);

        printf("\n");

        printf("\nEnter the Book ID: ");

        scanf("%s", b[i].id);

        fflush(stdin);

        printf("\nEnter the Book Name: ");

        scanf("%s", b[i].name);

        fflush(stdin);

        printf("\nEnter the Category of Book: ");

        gets(b[i].category);

        fflush(stdin);

        printf("\nEnter the Author of Book: ");

        gets(b[i].author);

        fflush(stdin);

        printf("\nEnter the Publisher of Book: ");

        gets(b[i].publisher);

        fflush(stdin);

        printf("\nEnter Date of Publication: ");

        scanf("%d%d%d", &b[i].dop.dd, &b[i].dop.mm, &b[i].dop.yy);

        fflush(stdin);

        printf("\nEnter the Price of Book: ");

        scanf("%f", &b[i].price);

        fflush(stdin);

        if (strcmp(b[i].category, "phy") == 0)
        {
            b[i].discount = 0.10;
        }

        else if (strcmp(b[i].category, "chm") == 0)
        {
            b[i].discount = 0.20;
        }

        else
        {
            b[i].discount = 0.00;
        }
    }

    printf("\nS.NO\tID\tNAME\tCATG\tAUTHOR\tPUB\t DOP\t\tPRICE\tDISCOUNTED PRICE\n");

    for (i = 0; i < 10; i++)

    {
        total1 = total1 + b[i].price;
        total2 = total2 + b[i].price - b[i].price * b[i].discount;
    }

    for (i = 0; i < 10; i++)

    {

        printf("\n%d\t%s\t%s\t%s\t%s\t%s\t%d/%d/%d\t%.2f\t%.2f", i + 1, b[i].id, b[i].name, b[i].category, b[i].author, b[i].publisher, b[i].dop.dd, b[i].dop.mm, b[i].dop.yy, b[i].price, b[i].price - b[i].price * b[i].discount);
    }
    printf("\n\t\t\t\t\t\t\tTotal %.2f \t %.2f", total1, total2);
}
