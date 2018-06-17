#include <stdio.h>
int main(){
  int W;
  int H;
  int x;
  int y;
  int r;

  scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);

  if(x - r > 0 || x + r > W){
    printf("No");
  }
  else if(x-r >=0 && x+r<=W) {
    printf("Yes");
  }
  
  return 0;

}
	   
