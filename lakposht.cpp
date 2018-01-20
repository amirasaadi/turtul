#include <iostream>
using namespace std;

//global variables
const int WIDTH = 20;
const int HEIGHT = 20;
bool map[HEIGHT][WIDTH];
char turtul = '*';
int direction=0; //0E 1S 2W 3N
int x=0,y=0;
bool pen=false;//true down - false up

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
				
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
			case 7:
				break;
			case 8:
				break;
			case 9:
				break;
			default:
				cout<<"command is not valid!";
				break;	
		}
	}
	return 0;
}
