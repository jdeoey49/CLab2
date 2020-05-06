class Account
{
public:
	Account();
	Account(float);
	void setBalance(float);
	float getBalance() const;
	void addMoney(float);
	void withdrawMoney(float);
private:
	float balance_;
};

