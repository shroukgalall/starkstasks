#include <stdio.h>

struct {
int hours;
int minutes;
int seconds;

} start,end;

int main() {
printf("enter start time in hours , minutes and seconds \n");
scanf("%d\n%d\n%d",&start.hours,&start.minutes,&start.seconds);
printf("enter end time in hours , minutes and seconds \n");
scanf("%d\n%d\n%d",&end.hours,&end.minutes,&end.seconds);
int x =end.hours-start.hours;
int y=end.minutes-start.minutes;
int z=end.seconds-start.seconds;
if (x<=0)
	x=24+x;
 else if(y<=0)
y=60-y;
else if(z<=0)
z=60-z;
printf("the period is %d hours : %dminutes :%d seconds ",x,y,z);

return 0 ;
}