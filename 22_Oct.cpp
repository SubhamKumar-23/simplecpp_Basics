 #include <iostream>
//PGRM1
/*int main(){
    int r,c,i,j,max,min,e=0;
    std::cin >> r >> c;
    int a[r][c];
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            std::cin >> a[i][j];
    max = -1000;
    min = 1000;
    for(i=0;i<r;i++){
        min = a[i][0];
        for(j=0;j<c;j++)
            if(min>a[i][j]){
                min = a[i][j];
                e = j;
            }
        for(j=0;j<r;j++)
            if(max < a[j][e])
                max = a[j][e];
        if(max == min){  
            std::cout << max;
            break;
        }
    }
}*/

//PGRM5 
/*int main(){
    int n,i,j;
    std::cin >> n;
    char c[n][100];
    for(i=0;i<n;i++)
        std::cin >> c[i];
    for(int k=0;k<n;k++)
        for(i=0;i<n-1;i++)
            for(j=0;j<n;j++)
                if(c[i][j]=='\0' || c[i+1][j]=='\0'){
                    
                    break;
                }else if(c[i][j]>c[i+1][j]){
                    std::swap(c[i+1],c[i]);
                    break;
                }else if(c[i][j] < c[i+1][j]){
                    break;
                }
    for(i=0;i<n;i++)
            std::cout << c[i] << "\n";
    
}*/

//PGRM6 
/*#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <ctime>

using namespace std;

const string RED = "\033[31m";
const string GREEN = "\033[32m";
const string YELLOW = "\033[33m";
const string RESET = "\033[0m";

bool validateInput(string& s); // helper function to validate input
void displayBoard(char board[6][5], string secret); // helper function to display game board
void gameStart(); // function running the game
string getRandomWord(); // function to fetch random word from dict.txt

int evaluateColor(char board[6][5], int row, int column, string secret) {
    for(int i=0;i<sizeof(secret)/sizeof(secret[0]);i++)
        if(board[row][column] == secret[i] && i==column)
            return 1;
        else if(board[row][column]==secret[i])
            return 2;
    return 3;
}

bool checkWin(char board[6][5], string secret) {
    for(int i=0;i<6;i++)
        for(int j=0;j<5;j++)
            if(secret[j] == board[i][j])
                return true;
    return false;
}

int main() {

	gameStart();

}

bool validateInput(string& s) {
	if (s.size() != 5) {
		return false;
	}

	for (int i = 0; i < 5; i++) {
		if (s[i] >= 'a' && s[i] <= 'z') {
			s[i] = s[i] - 32;
		}
	}

	for (int i = 0; i < 5; i++) {
		if (!(s[i] >= 'A' && s[i] <= 'Z')) {
			return false;
		}
	}

	return true;
}

void displayBoard(char board[6][5], string secret) {

	cout << "           WORDLE\n";
	cout << "   ---------------------" << endl;

	for (int r = 0; r < 6; ++r)
	{
		cout << "   | ";

		for (int c = 0; c < 5; ++c)
		{	
			int color = evaluateColor(board, r, c, secret);
			if (color == 1) {
				cout << GREEN;
			}
			else if (color == 2) {
				cout << YELLOW;
			}
			cout << board[r][c] << RESET << " | ";
		}

		cout << endl << "   ---------------------" << endl;

	}

}

void gameStart() {

	char board[6][5];
	string secret;
	
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 5; j++) {
			board[i][j] = ' ';
		}
	}

	char mode = ' ';
	cout << "You can play this game in test mode (T) or play mode (P)\n";
	while(!(mode == 'T' || mode == 'P')) {
		cout << "Enter valid gamemode: ";	
		cin >> mode;
	}

	if (mode == 'T') {
		cout << "Enter secret word: ";  
		cin >> secret;

		while (!validateInput(secret)) {
			cout << "Enter valid secret word!\n";
			cin >> secret;
		}
	}

	if (mode == 'P') {
		secret = getRandomWord();
		validateInput(secret);
	}

	displayBoard(board, "");

	for (int i = 0; i < 6; i++) {

		cout << "Enter your guess:\n";
		string input;
		cin >> input;

		while (!validateInput(input)) {
			cout << "Enter valid input!\n";
			cin >> input;
		}

		for (int j = 0; j < 5; j++) {
			board[i][j] = input[j];
		}

		displayBoard(board, secret);

		if (checkWin(board, secret)) {
			cout << GREEN << "Win!\n" << RESET;
			return;
		}

	}

	cout << RED << "Loss...\n" << RESET;
	cout << "Secret word was \"" << secret << "\"\n";	
	return;
}

string getRandomWord() {

	std::ifstream file("dict.txt");
    std::vector<std::string> lines;
    std::string line;

    while (std::getline(file, line)) {
        lines.push_back(line);
    }
	
	srand(static_cast<unsigned int>(time(0)));
    
	// Generate a simple random index
    int randomIndex = rand() % lines.size();

    std::string result = lines[randomIndex];

    return result;

}*/

//PGRM2

void rowColn(int a[][13],int y,int x,int n){
    int i;
    for(i=0;i<n;i++)
        if(a[i][x]!=2)
            a[i][x]=1;
    for(i=0;i<n;i++)
        if(a[y][i]!=2)
            a[y][i]=1;
}

void diag(int a[][13],int y, int x,int n){
    int i;
    for(i=0;i<12;i++){
        if(y+i < 13 && x+i <13 && a[y+i][x+i]!=2)
            a[y+i][x+i] = 1;
        if(y-i >= 0 && x-i >= 0 && a[y-i][x-i]!=2)
            a[y-i][x-i] = 1;
        if(y-i >= 0 && x+i < 13 && a[y-i][x+i]!=2)
            a[y-i][x+i] =1;
        if(y+i < 13 && x-i >= 0 && a[y+i][x-i]!=2)
            a[y+i][x-i] = 1;
    }
}

int main(){
    int n,i,j,q=0,k,l;
    std::cin >> n;
    int a[13][13];
    int queen[n];
    for(l=0;l<n;l++){
        for(i=0;i<13;i++)
            for(j=0;j<13;j++)
                a[i][j]=0;
        a[l][0]=2;
        rowColn(a,l,0,n);
        diag(a,l,0,n);
        for(k=0;k<n;k++)
            queen[k]=0;
        q=0;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++)
                if(a[j][i]==0 && i!=0){
                    a[j][i]=2;
                    q++;
                    rowColn(a,j,i,n);
                    diag(a,j,i,n);
                    break;
            }

            //chess board print
            for(k=0;k<n;k++){
                for(j=0;j<n;j++)
                    std::cout << a[k][j];
                std::cout << std::endl;
            }
            std::cout << std::endl;
        }
        if(q==n){
            for(k=0;k<n;k++)
                std::cout << queen[k];
            std::cout << std::endl;
        }
    }
}