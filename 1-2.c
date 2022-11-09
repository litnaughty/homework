#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main(){
	int n,x,i,y,x1,x2,x3;
	printf("请输入年级和需要的题目数量");
	scanf("%d %d",&n,&x);
	srand((unsigned int)time(NULL));
	y=rand();
	switch(n){
	case 1:for(i=0;i<x;i++){
				x1=rand()%10+1;
				x2=rand()%10;
				if(rand()%2==1)
						printf("%d+%d=\n",x1,x2);
				else
						printf("%d-%d=\n",x1,x2);
		   }
				break;
	case 2:for(i=0;i<x;i++){
				x1=rand()%50+1;
				x2=rand()%50+1;
				x3=rand()%50+1;
				if(rand()%2==1)
					if((x1+x2-x3)<50||(x1-x2+x3)<50)
						printf("%d+%d-%d=\n",x1,x2,x3);
					else continue;
				else if(rand()%2==0)
					if((x1+x2-x3)<50||(x1-x2+x3)<50)
							printf("%d-%d+%d=\n",x1,x2,x3);
					else continue;
		   }
				break;
	case 3:for(i=0;i<x;i++){
				x1=rand()%1000+1;
				x2=rand()%1000+1;
				x3=rand()%1000+1;
				if(rand()%2==1)
						printf("%d+%d*%d=\n",x1,x2,x3);
				else 
						printf("%d-%d*%d=\n",x1,x2,x3);
		   }
				break;
	case 4:for(i=0;i<x;i++){
				x1=rand();
				x2=rand();
				x3=rand();
				if(rand()%2==1)
					if(rand()%2==1)
						printf("(%d+%d)*%d=\n",x1,x2,x3);
					else 
						printf("(%d-%d)*%d=\n",x1,x2,x3);
					else  if(rand()%2==1)
						printf("%d-(%d*%d)=\n",x1,x2,x3);
					else
						printf("%d+(%d*%d)=\n",x1,x2,x3);
		   }
				break;
	default:printf("\nerror");
	}
	return 0;
	}