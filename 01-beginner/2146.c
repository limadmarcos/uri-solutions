/*
URI Online Judge | 2146
Password
By Ricardo Martins, IFSULDEMINAS BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/2146

Timelimit: 1
Mr. Amnésio had great difficulty in keeping passwords. To remind them, he always wore numbers, and writing on pieces of paper, which also lost easily, causing it needed to change the password every time this happened. Tired, he thought in a more practical way: put on paper the next number of password, then he always used the same account to remember the password based on the number written on paper. But he also forgot the formula, therefore, asked you to write a program that, given the number of the paper, enter the corresponding password. Write a program that, given a number, enter their password.

Input
The entry will have many test cases. Each test case will have a number N, representing the number written on paper (1001 ≤ N ≤ 9999). The entry ends with the end of the file.

Output
For each test case, print the corresponding password. In all cases, the formula will be the same in the examples below.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 163 Bytes
@submission 1/24/20, 10:34:29 PM
*/
#include <stdio.h>

int main()
{
    unsigned short n;
    
    while (scanf("%hu", &n) != EOF) {
        printf("%hu\n", n-1);
    }

    return 0;
}
