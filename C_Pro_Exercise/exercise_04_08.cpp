/*
* ����һ��Dog�࣬����age,weight�����ԣ�
*/
#if 0


#include<iostream>
using namespace std;
//����Dog��
class Dog
{
public:
	//Dog�Ĺ��캯��
	Dog(int age = 0, int weight = 0);
	//��ĸ��ƹ�����
	Dog(Dog& d);
	//�����趨
	int GetAge() {
		return itsage;
	}
	void SetAge(int age) {
		itsage = age;
	}
	int GetWeight() {
		return itsweight;
	}
	void SetWeight(int weight) {
		itsweight=weight;
	}
private:
	int itsage;
	int itsweight;
};
//���캯����ʵ��
Dog::Dog(int age, int weight) {
	itsage = age;
	itsweight = weight;
}
//���ƹ��캯����ʵ��
Dog::Dog(Dog& d) {
	itsage = d.itsage;
	itsweight = d.itsweight;
}
//������
int main() {
	//ʵ������
	Dog W(5, 6);
	cout << W.GetAge()<< endl;
	cout << W.GetWeight() << endl;
	cout << "�����趨����" << endl;
	W.SetAge(8);
	W.SetWeight(10);
	cout << W.GetAge() << endl;
	cout << W.GetWeight() << endl;
	return 0;
}
#endif // 0
