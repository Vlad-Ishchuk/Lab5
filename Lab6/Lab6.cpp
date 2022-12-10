#include <iostream>
using namespace std;

struct People
{
	string name;
	int age;
	int growth;
	int weight;
	string education;
};

int main()
{
	People vasia = { "Vasia Kaminskiy",19,180,75,"VNTU" };
	People user;
	cout << "Enter your:name, age, growth(in centimeters), weight,place where you study\n";
	cin >> user.name >> user.age >> user.growth >> user.weight >> user.education;


	cout << '\t' << vasia.name << " VS " << user.name << endl;
	if (vasia.age < user.age)
		cout << "You are older than Vasia\n";
	else
		cout  << "Vasya is older than you\n";
	if (vasia.growth < user.growth)
		cout  << "You are taller than Vasya\n";
	else
		cout  << "Vasya is taller than you\n";
	if (vasia.weight < user.weight)
		cout  << "You are heavier than Vasya\n";
	else
		cout  << "Vasya is heavier than you\n";
	if (user.education == "vntu" || user.education == "VNTU")
		cout  << "You stady at the best universaty of Ukraine with Vasia Kaminskiy\n";
	else
		cout << "What are you doing here??!!\n";
	return 0;
}