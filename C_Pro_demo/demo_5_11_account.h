#if 0



class SavingsAccount	//�����˻���
{
public:
	SavingsAccount(int date,int id,double rate);
	int getId() const { return id;}
	double getBalancec() const { return balabce; }
	double getRate() const { return rate; }
	static double getTotal() { return  total; }
	void deposit(int date, double amount);	//�����ֽ�
	void withdraw(int date, double amount);	//ȡ���ֽ�
	//������Ϣ��ÿ��1��1�յ���һ�κ���
	void settle(int date);
	//��ʾ�˻���Ϣ
	void show() const;
private:
	int id;	//�˺�
	double balabce;	//���
	double rate;	//������
	int lastDate;	//�ϴα����������
	double accumulation;	//�������ۼ�֮��
	static double total;	//�����˻����ܽ��
	//��¼�ˣ�dateΪ���ڣ�amount Ϊ���
	void record(int date, double amount);
	//��ȡ��ָ������Ϊֹ�Ĵ������ۻ�ֵ
	double accumulate(int date) const {
		return accumulation + balabce * (date - lastDate);
	}
};
#endif // 0