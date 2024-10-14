/*
Write a C program to demonstrate use of logical operators.
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, c;

    //Input the values
    printf("Enter the values of a, b and c :");
    scanf("%d %d %d", &a, &b, &c);
    
    printf("Logical AND : %d > %d && %d > %d : %d \n",a, b, a, c, a>b && a>c);
    printf("Logical OR : %d > %d || %d > %d: %d \n",a, b, b, c, a>b || b>c);
    printf("Logical NOT : !%d : %d \n", a, !a);
}

/*

Test cases:

1) Visible:

Input:

Enter the values of a, b and c :2 6 4

Output:

Logical AND : 2 > 6 && 2 > 4 : 0
Logical OR : 2 > 6 || 6 > 4: 1
Logical NOT : !2 : 0


2) Hidden:

Input:

Enter the values of a, b and c :8 2 5

Output:

Logical AND : 8 > 2 && 8 > 5 : 1
Logical OR : 8 > 2 || 2 > 5: 1
Logical NOT : !8 : 0


3) Hidden:

Input:

Enter the values of a, b and c :0 3 1

Output:

Logical AND : 0 > 3 && 0 > 1 : 0
Logical OR : 0 > 3 || 3 > 1: 1
Logical NOT : !0 : 1

*/