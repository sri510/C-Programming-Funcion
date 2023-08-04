#include <stdio.h>
int check(int limak, int bob)
{
        int i,a=0,b=0;
        for(i=1;i<limak+bob;i++){
            if(i%2)a++;
            else
            b++;
            if(a==limak){return 0;break;}
            else if(b==bob){ return 1;break;}
      }
        return 0;
}
int main(void) {
	    int a,b;
	    
	    printf("Enter Limak and Bob Number: ");
	    scanf("%d%d",&a,&b);
	    
	    if(check(a,b))printf("Limak"); else printf("Bob");
	return 0;
}
