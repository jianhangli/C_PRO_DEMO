/*
* ����һ�����࣬��ԱΪ���䣨ages),��Ա������Grow(int years),age()��ʾ����agesֵ
*/
#if 0


#include<iostream>
using namespace std;
//������
class Tree
{
public:
	//��������
	Tree(int age);
	//��Ա����
	int Grow(int year);
	void age();
private:
	int ages;
};
//���캯����ʵ��
Tree::Tree(int age)
{
	ages = age;
}
//�ɳ���������������
int Tree::Grow(int year) {
	ages = year + ages;
}
//�����ӡ��������
void Tree::age() {
	cout << "��������Ϊ" << ages << endl;
}
int main() {
	Tree t(12);
	t.age();
	t.Grow(4);
	return 0;
}
#endif // 0