#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

void Surprised(string arr[], int n)
{
	if (n == 1)
	{
		cout << "Sentences for Surprised: " << endl;
		cout << "" << endl;
		for (int i = 0; i < 8; i++)
		{
			cout << arr[i] << endl;
		}
		cout << "" << endl;
	}
}
void Disgusting(string arr[], int n)
{
	if (n == 2)
	{
		cout << "Sentences for Disgusting: " << endl;
		cout << "" << endl;
		for (int i = 0; i < 8; i++)
		{
			cout << arr[i] << endl;
		}
		cout << "" << endl;
	}
}
void Fear(string arr[], int n)
{
	if (n == 3)
	{
		cout << "Sentences for Fear: " << endl;
		cout << "" << endl;
		for (int i = 0; i < 8; i++)
		{
			cout << arr[i] << endl;
		}
		cout << "" << endl;
	}
}

int main()
{
	int num;
	string surp[8] = { "kdjnsk", "sjdfsf", "kjsddf", "jjdsahd", "haskak", "sajddkas", "udhuahd", "hdkahdk" }; //Enter specified sentences instead of random letters
	string disg[8] = { "fsfsfff", "fsdfsfs", "fsfsfsfs", "sfsffg", "ffrfwefW", "sdgvsgewgf", "sfsfsdfs", "sfsf" }; //Enter specified sentences instead of random letters
	string fear[8] = { "okkjkijn", "wrwerg", "jkfjsjf", "egmna", "sfsff", "qqaewrw", "writjg", "sfkjhsf" }; //Enter specified sentences instead of random letters
	
	cout << "1: Surprised\n" << "2: Disgusting\n" << "3: Fear\n" << "4: Exit" << endl;
	cout << "Select Emotion/Exit: ";
	cin >> num;
	cout << "" << endl;
	while (num != 4)
	{
		Surprised(surp, num);
		Disgusting(disg, num);
		Fear(fear, num);
		cout << "Select Emotion: ";
		cin >> num;
		cout << "" << endl;
	}

	_getch();
	return 0;
}