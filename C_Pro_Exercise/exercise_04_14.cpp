/*
* 定义一个树类，成员为树龄（ages),成员函数有Grow(int years),age()显示树的ages值
*/
#if 0


#include<iostream>
using namespace std;
//定义类
class Tree
{
public:
	//构建函数
	Tree(int age);
	//成员函数
	int Grow(int year);
	void age();
private:
	int ages;
};
//构造函数的实现
Tree::Tree(int age)
{
	ages = age;
}
//成长函数，输入年数
int Tree::Grow(int year) {
	ages = year + ages;
}
//输出打印树的年龄
void Tree::age() {
	cout << "树的年龄为" << ages << endl;
}
int main() {
	Tree t(12);
	t.age();
	t.Grow(4);
	return 0;
}
#endif // 0