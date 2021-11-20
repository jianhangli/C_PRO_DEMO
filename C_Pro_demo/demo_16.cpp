#if 0



/*
* 作用域实例，书籍5.1例子
*/
#include<iostream>
using namespace std;
int i;	//全局命名空间中的全局变量
namespace Ns{
	int j;	//在Ns命名空间中的全局变量
}
int main() {
	i = 5;	//为全局变量i赋值
	Ns::j = 6;	//为全局变量j赋值
	{		//字块1
		using namespace Ns;	//使得当前块中可以直接引用Ns命名空间标识符
		int i;	//局部变量，局部作用域
		i = 7;
		cout << "i=" << i << endl;
		cout << "j=" << j << endl;
	}
	cout << "i=" << i << endl;
	return 0;
}
#endif // 0