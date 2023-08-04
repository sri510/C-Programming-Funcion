#include <stdio.h>
int main(void) {
    int t,n,x;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d", &n, &x);
        if(x>=n/2.0)
        printf("Yes\n");
        else
        printf("No");
        
    }
	return 0;
}
