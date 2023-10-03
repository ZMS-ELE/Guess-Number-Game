#include"1.h"
using namespace std;
void ksa() {
	cout << "\nEnter any key to continue......\n\n";
	_getch();
	system("cls");
	ks();
}
void ks() {
	i = 0;
	j = 0;
	life = 0;
	maxrand = 6;
	cout << "Game difficulty:\n";
	cout << "If you type \"1\" : Easy (1-15) life=5.\n";
	cout << "If you type \"2\" : Medium (1-30) life=6.\n";
	cout << "If you type \"3\" : Difficult (1-50) life=7.\n";
	cout << "If you type \"4\" : Very Difficult (1-100) life=8.\n";
	cout << "If you type \"5\" : Very Very Difficult (1-1000) life=12.\n";
	cout << "Or type \"0\" to game over.\nWhen playing,if you want to exit the game,type \"0\".\n";
	cout << "If you need help,type\"999\".\n\n";
	cin >> c;
	system("cls");
	switch (c) {
	case 1:
		maxrand = 15; life = 5;
		break;
	case 2:
		maxrand = 30; life = 6;
		break;
	case 3:
		maxrand = 50; life = 7;
		break;
	case 4:
		maxrand = 100; life = 8;
		break;
	case 5:
		maxrand = 1000; life = 12;
		break;
	case 0:
		exit(0);
		break;
	case 999:
		help();
		break;
	case 1234567890:
		int m, l;
		kfzms();
		break;
	default:
		c = 0;
		cout << "Have a look at the rules!\n\n";
		ksa();
		break;
	}
	if (c == 1 || 2 || 3 || 4 || 5 || 1234567890) {
		srand((int)time(NULL));
		j = rand() % maxrand;
		if (j == 0) j++;
		dqsz();
	}
	else {
		ksa();
	}
	system("cls");
}
void help() {
	cout << "\"Guess Number Game\" is an interesting game.\nYou should guess a number.\nIf you are right,you win.\nIf you life is \"0\",you lose.\n\n";
	ksa();
}
void kfzms() {
	cout << "1.Develop new game modes.\n2.Producer information.\n\n";
	int ab;
	cin >> ab;
	switch (ab) {
	case 1:
		system("cls");
		cout << "The biggest number = ";
		cin >> maxrand;
		if (maxrand <= 1)
		{
			cout << "\nERROR!\n";
			system("cls");
			ks();
		}
		cout << "\nYour life = ";
		cin >> life;
		if (life == 0)
		{
			cout << "\nERROR!\n";
			system("cls");
			ks();
		}
		srand((int)time(NULL));
		j = rand() % maxrand; 
		if (j == 0) j++;
		dqsz();
	case 2:
		cout << "\n\nzmszms1123@163.com\n";
		ksa();
	default:
		cout << "\nERROR!\n";
		system("cls");
		ks();
	}
}
void dqsz() {
	if (life <= 0) {
		cout << "You lose!\n";
		ksa();
	}
	cout << "Type a number:\n\n";
	cin >> i;
	system("cls");
	if ((i > maxrand) || (i < 0)) {
		cout << "Error: the number is not between 1 and " << maxrand << "\n\n";
		dqsz();
	}
	if (i == 0) ks();
	if (i == j) {
		cout << "You win!\n";
		ksa();
	}
	else if (i > j) {
		cout << "\nTOO BIG\n\n";
		cout << "Lives remaining:" << life << "\n";
		--life;
		dqsz();
	}
	else if (i < j) {
		cout << "\nTOO SMALL\n\n";
		cout << "Lives remaining:" << life << "\n";
		--life;
		dqsz();
	}
}
int main() {
	cout << "-----------------------\n";
	cout << "-- Guess Number Game --\n";
	cout << "-----------------------\n\n";
	ks();
	return 0;
}
