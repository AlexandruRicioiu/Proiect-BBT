#include <iostream>
using namespace std;

int y,x,scor=0, c = 0;

void
rules() {
	cout << "-----------------------------------Stone-Scissors-Paper-Lizard-Spock----------------------------------------------------"<<endl<<endl;
	cout << "11 rounds will be played and the winner will be chosen!"<<endl;
	cout << "The player is the winner if he has a score higher than 6!"<<endl;
	cout << "1-Stone, 2-Scissors, 3-Paper, 4-Lizard, 5-Spock"<<endl;

}

void random() {
	y = rand() % 5;
	if (y == 1) {
		cout << "The computer has chosen Stone !" << endl;
	}
	else if (y == 2) {
		cout << "The computer has chosen Scissors !" << endl;
	}
	else if (y == 3) {
		cout << "The computer has chosen Paper !" << endl;
	}
	else if (y == 4) {
		cout << "The computer has chosen Lizard !" << endl;
	}
	else if(y == 5){
		cout << "The computer chose Spock !" << endl;
	}


}

void choice() {
	cout << "Enter your choice: "; cin >> x;
	if (x == 1) {
		cout << "You chose Stone !" << endl;
	}
	else if (x == 2) {
		cout << "You chose Scissors !" << endl;
	}
	else if (x == 3) {
		cout << "You chose Paper !" << endl;
	}
	else if (x == 4) {
		cout << "You chose Lizard !" << endl;
	}
	else if(x == 5){
		cout << "You chose Spock !" << endl;
	}
	else {
		cout << "You did not choose the correct number !";
		
	}

}


void game() {
	if (x == 1) {
		if (y == 1) {
			cout << "Equality!"<<endl;
		}
		else if (y == 3 || y == 5) {
			cout << "You lose !" << endl;
		}
		else if (y == 4 || y == 2) {
			cout << "You win !"<<endl;
			scor++;
		}

	}
	else if (x == 2) {
		if (y == 2) {
			cout << "Equality !"<<endl;
		}
		else if (y == 1 || y == 4) {
			cout << "You lose !" << endl;
		}
		else if (y == 3 || y == 5) {
			cout << "You win !"<<endl;
			scor++;
		}

	}
	else if (x == 3) {
		if (y == 3) {
			cout << "Equality !"<<endl;
		}
		else if (y == 2 || y == 5) {
			cout << "You lose !" << endl;
		}
		else if (y == 1 || y == 4) {
			cout << "You win !"<<endl;
			scor++;
		}

	}
	else if (x == 4) {
		if (y == 4) {
			cout << "Equality !"<<endl;
		}
		else if (y == 1 || y == 3) {
			cout << "You lose !" << endl;
		}
		else if (y == 2 || y == 5) {
			cout << "You win !"<<endl;
			scor++;
		}
	}
	else if (x == 5) {
		if (y == 5) {
			cout << "Equality !"<<endl;
		}
		else if (y == 1 || y == 3) {
			cout << "You lose !" << endl;
		}
		else if (y == 2 || y == 4) {
			cout << "You win !"<<endl;
			scor++;
		}

	}
	cout << "You score is : " << scor<<endl;
}

char play;
int main()
{ 
	rules();
	cout << endl;
	while (c <= 10){
        c++;
		choice();
		cout << endl;
		random();
		cout << endl;
		game();
		cout << endl;
	}
	if (scor >= 6) {
		cout << "You win the game !"<<endl;
	}
	else {
		cout << "You lose the game !"<<endl;
	}
}

