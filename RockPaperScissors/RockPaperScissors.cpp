

#include <iostream>
using namespace std;
#include <ctime>
#include <string>
#include <iomanip>

int rock = 1;
int paper = 2;
int scissors = 3;
void intro() {
	cout << "Lets Play Rock Paper Scissors!" << endl;
}
int computer() {
	srand(time(0));
	int random = 1 + rand() % 3;
	return random;
}
int userPlay() {
	cout << "Etner R for rock, P for paper, S for scissors: ";
	char player;
	cin >> player;
	
	player = toupper(player);

	switch (player) {
	case 'R':
		return 1;
	case 'P':
		return 2;
	case 'S':
		return 3;
	default:
		break;
	}

	

}
void check(int player, int cpu, int& countcpu, int& countplayer, bool& again) {
	
	if (cpu == 1) {

		if (player == 1) {
			cout << "Computer: Rock | Human: Rock | tie" << endl;
			cout << "Computer wins: " << countcpu << endl << "Human wins: " << countplayer << endl;

		}
		else if (player == 2) {

			cout << "Computer: Rock | Human: Paper | You WIN! " << endl;
			cout << "Computer wins: " << countcpu << endl << "Human wins: " << ++countplayer << endl;

		}
		else if (player == 3) {

			cout << "Computer: Rock | Human: Scissors | You lose" << endl;
			cout << "Computer wins: " << ++countcpu << endl << "Human wins: " << countplayer << endl;
		}

	}
	if (cpu == 2) {

		if (player == 1) {
			
			cout << "Computer: Paper | Human: Rock | You lose" << endl;
			cout << "Computer wins: " << ++countcpu << endl << "Human wins: " << countplayer << endl;

		}
		else if (player == 2) {


			cout << "Computer: Paper | Human: Paper | tie" << endl;
			cout << "Computer wins: " << countcpu << endl << "Human wins: " << countplayer << endl;
		}
		else if (player == 3) {

			cout << "Computer: Paper | Human: Scissors | You WIN! " << endl;
			cout << "Computer wins: " << countcpu << endl << "Human wins: " << ++countplayer << endl;




		}
	}
	if (cpu == 3) {

		if (player == 1) {
			cout << "Computer: Scissors | Human: Rock | You WIN! " << endl;
			cout << "Computer wins: " << countcpu << endl << "Human wins: " << ++countplayer << endl;



		}
		else if (player == 2) {
			

			cout << "Computer: Scissors | Human: Paper | You lose" << endl;
			cout << "Computer wins: " << ++countcpu << endl << "Human wins: " << countplayer << endl;
			cout << "Play Again?[Y or N]: ";
		
			
		}
		else if (player == 3) {

			
			cout << "Computer: Scissors | Human: Scissors | tie" << endl;
			cout << "Computer wins: " << countcpu << endl << "Human wins: " << countplayer << endl;



		}
	}

	//--------------------------
	cout << "Play Again?[Y or N]: ";
	char play_again;
	cin >> play_again;
	play_again = toupper(play_again);
	if (play_again == 'Y') {
		again = true;
	}
	else if (play_again == 'N') {

		again = false;
	}
	else {
		again = false;
	}


}
int main()
{
	int countcpu = 0;
	int countplayer = 0; 
	bool again;
	
	
	intro();
	do {
		int user = userPlay();
		int cpu = computer();
		cout << "Random number: " << cpu << endl;
		check(user, cpu, countcpu, countplayer, again);
	} while (again == true); 





}

