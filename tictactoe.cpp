#include <iostream>
using namespace std;

char matrix[3][3] = { '1','2','3','4','5','6','7','8','9' };
char player = 'X';
int n;

void Draw(){
	
	system("clear");
	for(int i=0; i<3; i++){
	
		for(int j=0; j<3; j++){
			cout << matrix[i][j] << " ";
		}
	cout << endl;	
	}

}

void Input(){

	int a;
	cout << "It's " << player << " turn. " << "Press the number of the field : ";
	cin >> a;

	if (a == 1){
		if (matrix[0][0] == '1')
			matrix[0][0] = player;
		else {
			cout << "The collumn has been field!" << endl;
			Input();
		}
	}

	else if (a == 2){
		if (matrix[0][1] == '2')
			matrix[0][1] = player;
		else {
			cout << "The collumn has been field!" << endl;
			Input();
		}
	}

	else if (a == 3){
		if (matrix[0][2] == '3')
			matrix[0][2] = player;
		else {
			cout << "The collumn has been field!" << endl;
			Input();
		}
	}

	else if (a == 4){
		if (matrix[1][0] == '4')
			matrix[1][0] = player;
		else {
			cout << "The collumn has been field!" << endl;
			Input();
		}
	}

	else if (a == 5){
		if (matrix[1][1] == '5')
			matrix[1][1] = player;
		else {
			cout << "The collumn has been field!" << endl;
			Input();
		}
	}

	else if (a == 6){
		if (matrix[1][2] == '6')
			matrix[1][2] = player;
		else {
			cout << "The collumn has been field!" << endl;
			Input();
		}
	}

	else if (a == 7){
		if (matrix[2][0] == '7')
			matrix[2][0] = player;
		else {
			cout << "The collumn has been field!" << endl;
			Input();
		}
	}

	else if (a == 8){
		if (matrix[2][1] == '8')
			matrix[2][1] = player;
		else {
			cout << "The collumn has been field!" << endl;
			Input();
		}
	}

	else if (a == 9){
		if (matrix[2][2] = '9')
			matrix[2][2] = player;
		else {
			cout << "The collumn has been field!" << endl;
			Input();
		}
	}

}

void TogglePlayer(){

	if (player == 'X')
		player = 'O';
	else
		player = 'X';
	

}
