#if 0



class SavingsAccount	//储蓄账户类
{
public:
	SavingsAccount(int date,int id,double rate);
	int getId() const { return id;}
	double getBalancec() const { return balabce; }
	double getRate() const { return rate; }
	static double getTotal() { return  total; }
	void deposit(int date, double amount);	//存入现金
	void withdraw(int date, double amount);	//取出现金
	//结算利息，每年1月1日调用一次函数
	void settle(int date);
	//显示账户信息
	void show() const;
private:
	int id;	//账号
	double balabce;	//余额
	double rate;	//年利率
	int lastDate;	//上次变更余额的日期
	double accumulation;	//余额按日期累加之和
	static double total;	//所以账户的总金额
	//记录账，date为日期，amount 为金额
	void record(int date, double amount);
	//获取到指定日期为止的存款金额按日累积值
	double accumulate(int date) const {
		return accumulation + balabce * (date - lastDate);
	}
};
#endif // 0