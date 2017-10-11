#include <stdio.h>
#include <conio.h>
void inverse();
void multiply();
int main()
{
	int a=0;
	do
	{
		printf("Enter 1 to find inverse, and 2 to multply to matrices:\n");
		scanf("%d",&a);
		switch(a)
		{
			case 1: inverse();
				break;
			case 2: multiply();
				break;
			default: printf("Enter 1 or 2 only!\n");
				break;
		}
		
	}while(a>2);
	return 0;
}
void inverse()
{
	int a,b,c,d,e,f,g,h,i;
	int j,k,l,m,n,o,p,q,r;
	printf("Enter first line of matrix:\n ");
	scanf("%d%d%d",&a,&b,&c);
	printf("Enter second line of matrix:\n");
	scanf("%d%d%d",&d,&e,&f);
	printf("Enter third line of matrix:\n");
	scanf("%d%d%d",&g,&h,&i);
	int det= a*(e*i-h*f)-(b*(d*i-g*f))+(c*(d*h-g*e));
	printf("Determinant is: %d\n",det);
	j=(e*i-h*f);
	k=(b*i-c*h);
	l=(b*f-e*c);
	m=(d*i-g*f);
	n=(a*i-g*c);
	o=(a*f-d*c);
	p=(d*h-e*g);
	q=(a*h-b*g);
	r=(a*e-b*d);
	printf("The inverse is: \n%d/%d\t%d/%d\t%d/%d\n",j,det,k,det,l,det);
	printf("%d/%d\t%d/%d\t%d/%d\n",m,det,n,det,o,det);
	printf("%d/%d\t%d/%d\t%d/%d\n",p,det,q,det,r,det);
}
void multiply()
{
	int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r;
	printf("Enter first matrix\n");
	printf("Enter first line of matrix:\n ");
	scanf("%d%d%d",&a,&b,&c);
	printf("Enter second line of matrix:\n");
	scanf("%d%d%d",&d,&e,&f);
	printf("Enter third line of matrix:\n");
	scanf("%d%d%d",&g,&h,&i);
	printf("Now Enter Second Matrix\n");
	printf("Enter first line of matrix:\n ");
	scanf("%d%d%d",&j,&k,&l);
	printf("Enter second line of matrix:\n");
	scanf("%d%d%d",&m,&n,&o);
	printf("Enter third line of matrix:\n");
	scanf("%d%d%d",&p,&q,&r);
	int s,t,u,v,w,x,y,z,a1;
	s=a*j+m*b+p*c;
	t=a*k+b*n+c*q;
	u=a*l+b*o+c*r;
	v=d*j+e*m+f*n;
	w=d*k+e*n+f*q;
	x=d*l+e*o+f*r;
	y=g*j+h*m+i*p;
	z=g*k+h*n+i*q;
	a1=g*l+h*o+i*r;
	printf("The final product is:\n%d\t%d\t%d",s,t,u);
	printf("%d\t%d\t%d",v,w,x);
	printf("%d\t%d\t%d",y,z,a1);
	
}
