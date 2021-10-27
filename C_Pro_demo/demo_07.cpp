#if 0
/*
* �����룬A,B,C����N�����Ӵ�A�ƶ���C��ʹ�õݹ�ķ�����
*/
#include<iostream>
using namespace std;
void move(char src, char dest) {
	cout << src << "-->" << dest << endl;
}
void hanoi(int n, char src, char medium, char dest) {
	if (n == 1) {
		move(src, dest);
	}
	else
	{
		hanoi(n - 1, src, dest, medium);
		move(src, dest);
		hanoi(n - 1, medium, src, dest);
	}
}
int main() {
	int m;
	cout << "�������ӵĸ���" << endl;
	cin >> m;
	cout << "����" << m << endl;
	hanoi(m, 'A', 'B', 'C');
	return 0;
}

#endif // 0