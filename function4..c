#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	while(T--){
	int N;
	scanf("%d",&N);
	int difficulty;
	int count=0;
	for(int i=0;i<N;i++)
	{
	   scanf("%d",&difficulty);
	   if(difficulty>=1000)
	   {
	       count++;
	   }
	 }
	   
	   printf("%d\n",count);
	}
return 0;
}
