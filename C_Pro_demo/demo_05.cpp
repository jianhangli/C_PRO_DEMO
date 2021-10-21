#if 0

/*
* 投掷筛子，给定一个初始值种子，每轮投掷2次骰子，第一轮为7或者11胜，和为2,3,12，则失败。如无，继续，直到轮数等于点数，或者，出现之和为7则失败。
* 存在的问题，严重性	代码	说明	项目	文件	行	禁止显示状态
错误	LNK2019	无法解析的外部符号 "int __cdecl rollDice(void)" (?rollDice@@YAHXZ)，函数 main 中引用了该符，目前未解决
2021.10.21
*/

#include<iostream>
#include<cstdlib>
using namespace std;
enum GameStatus
{
	WIN,LOSE,PLAYING
} status;
int main() {
	int sum, myPoint;
	enum GameStatus status;
	unsigned seed;
	int rollDice();		//生成一个安全的随机数
	cout << "输入一个初始种子";
	cin >> seed;
	srand(seed);	//初始化启始值
	sum = rollDice();
	switch (sum)
	{
	case 7:		//如果和数为7或者11胜利
	case 11:
		status = WIN;
		break;
	case 2:		//如果和数为2，3,12,则失败
	case 3:
	case 12:
		status = LOSE;
		break;
	default:	//其他情况，无结果，状态为playing,记下点数
		status = PLAYING;
		myPoint = sum;
		cout << "point is " << myPoint << endl;
		break;
	}
	while (status == PLAYING)
	{
		sum = rollDice();
		if (sum ==myPoint)
		{
			status = WIN;
		}
		else if (sum == 7)
		{
			status = LOSE;
		}
	}
	if (status == WIN)
	{
		cout << "player wins" << endl;
	}
	else
	{
		cout << "player loss" << endl;
	}
	return 0;
}
#endif // 0
