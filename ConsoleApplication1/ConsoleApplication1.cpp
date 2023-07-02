
#include <iostream>
using namespace std;

int main()
{
	/*double height;
	double line;
	int rule = 2;

	cout << "三角形の高さを入力してください\n";
	cin >> height;
	cout << "三角形の底辺を入力してください\n";
	cin >> line;
	cout << "三角形の面積は" << line * height / rule << "です\n";*/

	int num1, num2, num3, num4, num5;
	int total;
	double ave;
	for (int i = 1; i <=  5; i++)
	{
		cout << "科目" << i << "の点数を入力してください\n";
		if (i == 1)
		{
			cin >> num1;
		}else if(i == 2)
		{
			cin >> num2;
		}
		else if (i == 3)
		{
			cin >> num3;
		}
		else if (i == 4)
		{
			cin >> num4;
		}
		else if (i == 5)
		{
			cin >> num5;
			total = num1 + num2 + num3 + num4 + num5;
			ave = (double)total / i;
			cout << "合計点" << total << "\n";
			cout << "平均点" << ave << "\n";

		}
	}
	
}

