#include<iostream>
#include<string>
using namespace std;
struct timer
{
	int h;
	int m;
	int s;
};
class testing
{
private:
	int test_id;
	string question;
	timer obj;
public:
	void setId(int test_id);
	void setQuestion(string Q);
	void setTimer(timer obj);
	void display();

};
void testing::setId(int test_id)
{
	this->test_id = test_id;
}
void testing::setQuestion(string Q)
{
	question = Q;
}
void testing::setTimer(timer obj)
{
	this->obj.h = obj.h;
	this->obj.m = obj.m;
	this->obj.s = obj.s;
}
void testing::display()
{
	cout << "Id :" << test_id << "\n";
	cout << " Question :" << question << "\n";
	cout << "hours :" << obj.h << "\n";
	cout << "minutes :" << obj.m << "\n";
	cout << "seconds :" << obj.s << "\n";

}
int main()
{
	testing object[3];
	timer time;
	for (int i = 0; i < 3; i++)
	{
		cin >> time.h;
		cin >> time.m;
		cin >> time.s;
		object[i].setId(i + 1);
		object[i].setQuestion("First");
		object[i].setTimer(time);
		object[i].display();
	}

	system("pause");
	return 0;
}