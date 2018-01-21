#include <iostream>
using namespace std;

//global variables
const int WIDTH     = 20;
const int HEIGHT    = 20;
bool      map[HEIGHT][WIDTH];
char      turtul    = '*';
int       direction = 0; //0E 1S 2W 3N
int       x         = 0;
int       y         = 0;
bool      pen       = false;//true down - false up

void move(int n)
{
	int jahat = direction%4;
	if(jahat==0)
	{
		if(x+n<20)
		{
			if(pen)
			{
				for(int i=0;i<n;i++)
				{
					map[y][x+i]=true;
				}
			}
			x += n;
		}
		else
		{
			cout<<"out of map";
		}
	}
	else if(jahat==1)
	{
		if(y+n<20)
		{
			for(int i=0;i<n;i++)
			{
				map[y+i][x]=true;
			}	
			y += n;
		}
		else
		{
			cout<<"out of map";
		}
	}
	else if(jahat==2)
	{
		if(x-n<0)
		{
			cout<<"out of map";
		}
		else
		{
			for(int i=0;i<n;i++)
			{
				map[y][x-i]=true;
			}
			x -= n;
		}
	}
	else if(jahat==3)
	{
		if(y-n<0)
		{
			cout<<"out of map";
		}
		else
		{
			for(int i=0;i<n;i++)
			{
				map[y-i][x]=true;
			}
			y -= n;
		}
	}
	else
	{
		cout<<"no diraction found";
	}
}

void FillMap()
{
	for(int i=0;i<WIDTH;i++)
	{
		for(int j=0;j<HEIGHT;j++)
		{
			map[i][j]=false;
		}
	}
}
void PrintMap()
{
	for(int i=0;i<WIDTH;i++)
	{
		for(int j=0;j<HEIGHT;j++)
		{
			if(x==j&&y==i)
			{
				cout<<"T"<<"  ";
				continue;
			}
			if(!map[i][j])
				cout<<" "<<"  ";
			else
				cout<<"*"<<"  ";
		}
		cout<<endl;
	}
}
int main ()
{
	FillMap();
	int input;
	cin>>input;
	while(input!=9)
	{
		switch(input)
		{
			case 1:
				pen=false;
				break;
			case 2:
				pen=true;
				break;
			case 3:
				direction++;
				break;
			case 4:
				direction--;
				break;
			case 5:
				int n;
				cin>>n;
				move(n);
				break;
			case 6:
				PrintMap();
				break;
			default:
				cout<<"command is not valid!";
				break;	
		}
		cin>>input;
	}
	return 0;
}
