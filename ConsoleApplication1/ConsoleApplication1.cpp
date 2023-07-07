
#include <iostream>
using namespace std;

int main()
{

	/*int i;
	for (i = 1; i < 5; i++)
	{
		cout << i << "回目\n";
	}

	cout << i-1 << "回目\n";*/

	/*int num;
	int sum = 0;

	cout << "いくつまでの合計を求めますか？\n";

	cin >> num;

	for (int i = 1; i <=  num; i++)
	{

		sum += i;

	}


	cout << 1 << "から" << num << "の合計は" << sum;*/

	//int num = 1;
	
	//while (num) //falseとなる条件（tureだと実行されてしまうから）
	//{
	//	cout << "整数を入力してください\n";
	//	cin >> num;
	//}

	//cout << "終了\n";
	
	//int num = 1;
	//do
	//{
	//	cout << num << "番目の繰り返しです\n";
	//	num++;
	//} while (num <= 5);//該当したら繰り返す

	/*for (int i = 1; i <= 10; i++)
	{
		if (i % 2 == 0) {
			cout << i << "\n";
		}
	}*/

	/*int num = 1;
	int sum = 0;
	cout << "テストの点数を入力してください\n";
	while (num)
	{
		cin >> num;
		sum += num;
	}
	cout << "合計点は" << sum;*/

	for (int i = 1; i <=  5; i++)
	{
		for (int j = 0; j < i; j++) 
		{
			cout << "*";
		}
		cout << "\n";
	}


}

