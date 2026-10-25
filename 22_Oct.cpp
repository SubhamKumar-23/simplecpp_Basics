 #include <iostream>
//PGRM1 DONE
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

//PGRM5 DONE
/*int main(){
    int n,i,j;
    std::cin >> n;
    char c[n][100];
    for(i=0;i<n;i++)
        std::cin >> c[i];
    for(int k=0;k<n;k++)
        for(i=0;i<n-1;i++)
            for(j=0;j<n;j++)
                if(c[i][j]=='\0' || c[i+1][j]=='\0')
                    break;
                else if(c[i][j]>c[i+1][j]){
                    std::swap(c[i+1],c[i]);
                    break;
                }else if(c[i][j] < c[i+1][j])
                    break;
    for(i=0;i<n;i++)
            std::cout << c[i] << "\n";
    
}*/

//PGRM6 DONE
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
int main(){
    int n,c=0,i;
    bool check;
    std::cin >> n;
    int queen[n];
    queen[c]=0;
    while(c>=0){
        queen[c]++;
        if(queen[c] > n){
            c--;
            continue;
        }
        check = true;
        for(i=0;i<c;i++)
            if(queen[i] == queen[c] || queen[i]-queen[c] == c-i || queen[i]-queen[c] == i-c){
                check = false;
                break;
            }
        if(!check) continue;
        if(c == n-1){
            for(i=0;i<n;i++)
                std::cout << queen[i] << " ";
            std::cout << std::endl;
        }else{
            c++;
            queen[c]= 0;
        }
    }
}

//PGRM4 DONE
/*int main(){
    int i,j,m,n,sum,p,q,k,l;
    std::cin >> m >> n;
    int a[m][n];
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            std::cin >> a[i][j];
    std::cin >> p >> q;
    for(k=0,l=0;k<m-p+1;){
        sum=0;
        for(i=k;i<(p+k);i++)
            for(j=l;j<(q+l);j++)
                sum+=a[i][j];
        if(l==(n-q)){
            l=0;
            k++;
        }else l++;
        std::cout << sum << " ";
    }
}*/

//PGRM3 DONE
/*int main(){
    int i,j,m,n,k,x,y,count;
    std::cin >> m >> n >> k;
    int a[m][n];
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            a[i][j]=0;
    for(i=0;i<k;i++){
        std::cin >> x >> y;
        a[x-1][y-1]=-1; // -1 = mine(bomb)
    }   
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            if(a[i][j]!=-1){
                count = 0;
                if(a[i][j-1]== -1 && j-1 >=0) count++;
                if(a[i][j+1]== -1 && j+1 < n) count++;
                if(a[i+1][j]==-1 && i+1 < m) count++;
                if(a[i-1][j]==-1 && i-1 >=0) count++;
                if(a[i+1][j+1] == -1 && i+1 <m && j+1 <n) count++;
                if(a[i-1][j+1] == -1 && i-1 >=0 && j+1 <n) count++;
                if(a[i+1][j-1]==-1&& i+1<m && j-1 >=0) count++;
                if(a[i-1][j-1]==-1&& i-1>=0 && j-1 >=0) count++;
                a[i][j] = count;
            }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            (a[i][j] == -1)?std::cout << "M " : std::cout << a[i][j] << " ";
        std::cout << std::endl;
    }
}*/

