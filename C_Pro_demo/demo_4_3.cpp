#if 0



#include<iostream>
using namespace std;
//�̶�����
//pi��ֵ��դ���ļ۸񣬹���ˮ��۸�
const float PI = 3.141593;
const float FENCE_PRICE = 35;
const float CONCRETE_PRICE = 20;

//����circle��
class Circle
{
public:
	//���캯��
	Circle(float r);
	//�����ܳ�
	float circumference();
	//�������
	float area();
private:
	//Բ�İ뾶
	float radius;
};
//���ʵ��
//���캯��
Circle::Circle(float r)
{
	radius = r;
}
//����Բ���ܳ�
float Circle::circumference()
{
	return PI * 2 * radius;
}

//����Բ�����
float Circle::area() {
	return PI * radius * radius;
}

//������
int main() {
	float radius;
	//��ʾ�û�����뾶
	cout << "����뾶��" << endl;
	cin >> radius;
	//��Ӿ�ر߽����
	Circle pool(radius);
	//դ������
	Circle poolRim(radius + 3);
	//����դ���۸�
	float fenceCost = poolRim.circumference() * FENCE_PRICE;
	cout << "դ���۸�Ϊ��" << fenceCost << endl;
	//��������۸�
	float concreteCost = (poolRim.area() - pool.area()) * CONCRETE_PRICE;
	cout << "�����۸�Ϊ��" << concreteCost << endl;
}
#endif // 0