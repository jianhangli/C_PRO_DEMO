/*
*����ʵ�־����࣬�����г��Ϳ��������
* 
*/
#if 0



#include<iostream>
using namespace std;
//���������
class Rectangle
{
public:
	//��������
	Rectangle(float len, float wei) {
		float length = len;
		float width = wei;
	}
	//��������
	//��������
	float GetLength() {
		return length;
	}
	float GetWidth() {
		return width;
	}
	float GetArea() {
		return (length * width);
	}
private:
	float length;
	float width;
};
//������
int main() {
	float length, width;
	cout << "��������εĳ��ȣ�";
	cin >> length;
	cout << "��������εĿ�ȣ�";
	cin >> width;
	Rectangle r(length, width);
	cout << "��Ϊ" << length << "��Ϊ" << width << "�ľ��ε����Ϊ��"
		<< r.GetArea() << endl;
	return 0;
}
#endif // 0