#include<iostream>
#include<string>

using namespace std;


int main()
{
	int age;
	while (true)

	{
		cin >> age;
		if (age == 5)
		{
			cout << "samsam" << endl;
		}
		else if (age > 5)
		{
			cout << "big" << age << endl;
		}
		else
		{
			cout << "small" << age << endl;
		}
	}

}