#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
main(){
	int step,x0,y0,x1,y1,i;
	cin>>x0>>y0>>x1>>y1;
	int dx=x1-x0;
	int dy=y1-y0;
  	if(abs(dx)>abs(dy)){
  		step=abs(dx);
  	}
  	else{
  		step=abs(dy);
  	}
  	float xinc,yinc;
  	xinc = (float)dx/step;
  	yinc =  (float)dy/step;
  	float x=x0;
  	float y=y0;
	  for(i=0;i<step;i++){
  		x+=xinc;
  		y+=yinc;
  		cout<<x<<" "<<round(y)<<"\n"; 
  	}
  	getch();
	
	
} 
