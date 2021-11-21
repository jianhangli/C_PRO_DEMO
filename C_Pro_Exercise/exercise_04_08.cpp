/*
* 定义一个Dog类，包含age,weight等属性，
*/
#if 0


#include<iostream>
using namespace std;
//定义Dog类
class Dog
{
public:
	//Dog的构造函数
	Dog(int age = 0, int weight = 0);
	//类的复制构函数
	Dog(Dog& d);
	//参数设定
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
//构造函数的实现
Dog::Dog(int age, int weight) {
	itsage = age;
	itsweight = weight;
}
//复制构造函数的实现
Dog::Dog(Dog& d) {
	itsage = d.itsage;
	itsweight = d.itsweight;
}
//主函数
int main() {
	//实例化类
	Dog W(5, 6);
	cout << W.GetAge()<< endl;
	cout << W.GetWeight() << endl;
	cout << "二次设定函数" << endl;
	W.SetAge(8);
	W.SetWeight(10);
	cout << W.GetAge() << endl;
	cout << W.GetWeight() << endl;
	return 0;
}
#endif // 0
