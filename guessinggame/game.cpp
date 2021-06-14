#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	char name[100] = "";
	int guess = 0;
	int answer = rand()%10+1;
	cout << "welcome to the game! " << endl;
	cout << "you are going to be guessing a random number from 1-10" << endl;
	cout << "what is your name going to be?: " << endl;
	std::cin >> name;	
	
	bool game = true;

	while(game) {
		cout << "okay " << name << ", what is your guess?: " << endl;
		cin >> guess;
		/*first check if the player guesses right*/
		
		if (guess == answer){
			cout << "you win!" << endl;
			break;
		}

		if (guess > answer){
			cout << "too high" << endl;
		} else if (guess < answer){
			cout << "too low" << endl;
		}
		printf("try again!\n");
	}

	return 0;
}
