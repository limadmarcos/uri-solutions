/*
URI Online Judge | 2003
Sunday Morning
By Thalyson Nepomuceno, UECE BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/2003

Timelimit: 1
Sunday is market day. Early in the morning many people move to the Parangaba square where happens a fair, known to be the largest in the city. At the fair the Parangaba you can find everything.

Every Sunday, Bino make purchases at the fair. He always mark with his friend Cino, they met at the bus terminal of Parangaba at 8 am to go together to buy at the fair. But often Bino wake up too late and is late for the meeting with his friend.

Knowing that Bino takes 30-60 minutes to reach the terminal. Tell the maximum delay Bino.

Input
The input consists of multiple test cases. Each case contains a single line containing a time H (5:00 ≤ H ≤ 9:00) that Bino woken up. The input ends with the final file (EOF).

Output
For each test case, print "Atraso maximo: X" (without quotes), X indicates the maximum delay (in minutes) of Bino in the encounter with Cino.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 316 Bytes
@submission 1/7/20, 8:31:13 AM
*/
#include <stdio.h>

int main()
{
    short hour, min;

    while (scanf("%hd:%hd", &hour, &min) != EOF) {
    
        hour = (hour*60)+min+60;
        hour -= (8*60);
    
        if (hour < 0)
            hour = 0;
        
        printf("Atraso maximo: %hd\n", hour);
    }
    
    return 0;
}