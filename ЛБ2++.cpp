#include<iostream>
using namespace std;

int main()
{
	int t, z;
	cout << "t = "; cin >> t;
	z = t % 6;  // знаходимо остачу від ділення 
	if ((z == 1)||(z == 2)||(z == 3))
	{
		cout << "Green light\n";
  }
	else
	{
		if (z == 4)
		{
			cout << "Yellow light\n";
		}
		else
		{
			cout << "Red light\n";
		}
	}
	system("pause");
}
