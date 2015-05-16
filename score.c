#include<stdio.h>
#include<stdlib.h>

struct score
{
int kor;
int eng;
int math;
double average;
};


void input_score(struct score* p)
{
printf("kor score :");
scanf("%d", &(p->kor));
printf("eng score :");
scanf("%d", &(p->eng));
printf("math score :");
scanf("%d", &(p->math));
}

void print_score(struct score* p)
{
printf("kor score : %d\n",p->kor);
printf("eng score : %d\n",p->eng);
printf("math score : %d\n",p->math);
printf("average : %d\n",(p->kor + p->eng + p->math)/3);
}

int main(void)
{
int i;
struct score p[5];

for(i=0;i<5;i++)
{
input_score(&p[i]);
print_score(&p[i]);
}
}
