#include<stdio.h>
// Un programme qui permet de déterminer le nombre de combinaisons possibles de p éléments parmi n
int propa(int p,int n){
if (n==p)
{
    return (1);
}
else if (p==1)
{
    return (n);
}
else{
    return propa(p-1,n-1)+propa(p,n-1);
}
}
int main()
{
    int p;
    int n;
    printf("give me the value of p and n :");
    scanf("%d %d",&p,&n);
    printf("le nombre de combibaison possibles est:%d",propa(p,n));
    return 0;
}
