/*
* ���һ���࣬�����������½Ǻ����½ǵ��������㣬���������
*/
#if 0
#include<iostream>
using namespace std;
//������
class Rectangle
{
public:
	//���캯��
	Rectangle(int top1, int top2, int low1, int low2);
	//����Ļ�ȡ���趨
	int GetTop1() const { return TopA; }
	int GetTop2() const { return TopB; }
	int GetLow1() const { return LowC; }
	int GetLow2() const { return LowD; }
	void SetTop1(int top1) { TopA = top1; }
	void SetTop2(int top2) { TopB = top2; }
	void SetLow1(int low1) { LowC = low1; }
	void SetLow2(int low2) { LowD = low2; }
	//����ļ���
	int GetArea() const;
private:
	int TopA;
	int TopB;
	int LowC;
	int LowD;
};
//���캯����ʵ��
Rectangle::Rectangle(int top1, int top2, int low1, int low2) {
	TopA = top1;
	TopB = top2;
	LowC = low1;
	LowD = low2;
}
//��������ļ���
int Rectangle::GetArea() const {
	int weight = TopB - LowD;
	int height = TopA - LowC;
	return (weight * height);
}
//������
int main() {
	//��������ʵ��
	Rectangle MyRectangle(100,50, 30, 20);
	//��ȡ�������
	int Area = MyRectangle.GetArea();
	cout << "Area: " << Area << "\n";
	return 0;
}
#endif // 0