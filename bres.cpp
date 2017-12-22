#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
main(){
	int step,x0,y0,x1,y1,i,t;
	cin>>x0>>y0>>x1>>y1;
	int dx=abs(x1-x0);
	int dy=abs(y1-y0);
	float x,y,xend;
	if(x1>x0){
		x=x0;
		y=y0;
		xend=x1;
	}
	else{
		x=x1;
		y=y1;
		xend=x0;
	}
	int p= (2*dy)-dx;
	while(x<xend){
		x++;
		if(p<0){
			p=p+(2*dy);
		}
		else{
			y++;
		t=dy-dx;
		p=p+(2*t);
		
		}
			cout<<x<<" "<<y<<"\n"; 
	}
	getch();
}
	
