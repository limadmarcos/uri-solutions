/*
URI Online Judge | 1001
Extremely Basic
Adapted by Neilor Tonin, URI  Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1001

Timelimit: 1

Read 2 variables, named A and B and make the sum of these two variables, assigning its result to the variable X. Print X as shown below. Print endline after the result otherwise you will get “Presentation Error”.

Input
The input file will contain 2 integer numbers.

Output
Print the letter X (uppercase) with a blank space before and after the equal signal followed by the value of X, according to the following example.

Obs.: don't forget the endline after all.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 150 Bytes
@submission 22/05/2018 01:03:15
*/
#include <stdio.h>
 
int main() {
 
    int a, b;
    
    scanf("%d",&a);
    scanf("%d",&b);
    printf("X = %d\n",a+b);

    return 0;
}