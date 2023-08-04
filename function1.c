#include <stdio.h>

int main(void) 
{
    int t,x,y;
    scanf("%d",&t);
    for(int i=t; i>=1; i--)
    {
    scanf("%d %d",&x,&y);
    if(x>y*10)
    {
    printf("Yes\n");
    }
    else
    printf("No");
}
	return 0;
}
