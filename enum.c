/* Program demonstrating the use of an enumerated type */
#include <stdio.h>
typedef enum
{entertainment, rent, utilities, food, clothing,
automobile, insurance, miscellaneous}
expense_t;

typedef enum {
    S, M, T, W, H, F, A
} charset_t;

void print_expense (expense_t expense_kind);
void print_week(charset_t weekday);

int main (void)
{
    /*
    expense_t expense_kind;
    scanf ("%d" , &expense_kind);
    printf( "Expense code represents ");
    print_expense (expense_kind);
    printf(" .\n");
    */
   charset_t wd;
   scanf("%d", &wd);
   print_week(wd);

    return (0);
}

void print_week(charset_t week)
{
    switch (week) {
        case S:
            printf("A\n");
            break;
        case M :
            printf("B\n");
            break;
        case T:
            printf("C\n");
            break;
        default:
            printf("wrong!\n");
    }
}
/*
* Display string corresponding to a value of type expense_t
*/
void print_expense (expense_t expense_kind)
{ 
    expense_t expense;

    expense = expense_kind;
    switch (expense_kind) { 
        case entertainment:
            printf ("entertainment");
            printf("%d\n", expense + 1);
            break;
        case rent:
            printf( "rent" );
            break;
        case utilities:
            printf ("utilities");
            break;
        case food:
            printf ("food");
            break;
        case clothing:
            printf ( "clothing" );
            break;
        case automobile:
            printf ( "automobile" );
            break;
        case insurance:
            printf ( "insurance" );
            break;
        case miscellaneous:
            printf ( "miscellaneous");
            break;
        default:
            printf ("\n*** INVALID CODE ***\n");
    }
}