#include <iostream>
using namespace std;

int main()
{
	const int x=2;
	const int y=3;
int arary[x][y]={1,4,7,8,5,2};
for (int i=0;i< x;i++)
{
	int sum=0;
	{
		for (int j=0;j<y;j++)
		{
			sum+=arary[i][j];
		}
	}
	cout<<"sum of row  "<<i+1<<" "<<sum;
	cout<<endl;
}
	


}