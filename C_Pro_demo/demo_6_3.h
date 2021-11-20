class Point
{
public:
	Point();	//无参数构造函数
	Point(int x, int y);	//有参数的构造函数
	void move(int newX, int newY);	//构建函数
	int getX() const { return x; }	//获取x坐标
	int getY() const { return y; }	//获取y坐标
	~Point();	//析构函数
	static void showCount();	//静态数据函数
private:	
	int x, y;
};
