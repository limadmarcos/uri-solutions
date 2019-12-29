/*
URI Online Judge | 1924
Vitória and Her Indecision
By Gustavo Ribeiro, IFPB - Campina Grande BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1924

Timelimit: 1

There’s no one in the world more indecisive than Vitória. Despite the fact that she knows she’s a great programmer, like one of the that have a lot of projects in IT field published and many others being written, she’s not sure if she’s going to be a professional programmer. There are nights that she wants to study Computer Science (Ciência da Computação, in portuguese), there are days she wants to study some Engineering, some days she even talks about taking some Humanities course, what a sin! But you can help her do the right choice. Your task is simple, It’ll be given a list with the bachelor courses that Vitória is in doubt, the output should be the course she must choose.

Input
The first line of the input is an integer 1 ≤ n ≤ 2000, representing the number of courses that must be considered. Each of the next n lines, there is a course S, 1 ≤ |S| ≤ 100, the name of one of the courses Vitória is in the doubt.

Output
Print the name of the course Vitória must take in portuguese without accentuation.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 232 Bytes
@submission 12/28/19, 5:40:19 PM
*/
#include <stdio.h>

int main()
{
    char s[101];
    unsigned short n;
    
    scanf("%hu", &n);
    while (n--) {
        fgets(s, sizeof(s), stdin);
    }
    printf("Ciencia da Computacao\n");
    
    return 0;
}