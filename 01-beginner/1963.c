/*
URI Online Judge | 1963
The Motion Picture
By Leandro Zatesko, UFFS BR Brazil
https://www.urionlinejudge.com.br/judge/en/problems/view/1963

Timelimit: 1

Welcome to the 3rd UFFS Junior Programming Contest. We sincerely hope the next hours are very productive to you, you get many balloons and, above all, you have fun! Remember that you can ask for a clarification whenever you are not sure that you understand a problem description. Remember also that at 17.30 the automatic judges will be turned off and the competition will enter blind mode, so that all submissions made during this period will begin to be judged only at 18.10. Please stay with us till the end of the competition, working on solutions for the problems till the last minute, because, as long as the contest is running, there is still hope!

And it was hope that motivated Grandma Zazá, a 72-year-old lady, to fulfill her dream of starting an undergraduate course. She is fascinated by everything related to the University: the classes, the library, the research and extension projects, the refectory, but especially the student card that she can use to get 50% off cinema tickets. Last week Grandma Zazá and her colleagues went to the cinema to watch a movie, but they were appalled at the ticket price increase. Disgusted, they decided to make a protest, scheduled for tomorrow at General Bertaso Square, against the oppressive capitalist system. Grandma Zazá wants to collaborate with the movement by making a poster with the following watchword:

HOW ABSURD! THE PRICE OF CINEMA TICKETS HAS RISEN … % !!

But she is not good at Math, so she is asking you to helpfully calculate the percentage she needs to complete the poster.

Input
The only input line consists of two values A and B (0.00 < A ≤ B ≤ 1000.00), given with exactly two digits after the decimal point, which represent respectively the old and the new prices of the cinema tickets.

Output
The only output line shall consist of a single value, representing as a percentage the ticket price increase. The value shall be followed by the symbol % and shall contain two digits after the decimal point.

@author Marcos Lima
@profile https://www.urionlinejudge.com.br/judge/pt/profile/242402
@status Accepted
@language C (gcc 4.8.5, -O2 -lm) [+0s]
@time 0.000s
@size 156 Bytes
@submission 12/28/19, 8:14:47 PM
*/
#include <stdio.h>

int main()
{
    double a,b;
    scanf("%lf %lf", &a, &b);
    
    printf("%.2lf%%\n", ((b-a)*100.0)/a);
    
    return 0;
}