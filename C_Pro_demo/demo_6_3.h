class Point
{
public:
	Point();	//�޲������캯��
	Point(int x, int y);	//�в����Ĺ��캯��
	void move(int newX, int newY);	//��������
	int getX() const { return x; }	//��ȡx����
	int getY() const { return y; }	//��ȡy����
	~Point();	//��������
	static void showCount();	//��̬���ݺ���
private:	
	int x, y;
};
