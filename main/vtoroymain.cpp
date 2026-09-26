// tipo import ...
#include <iostream>
#include<time.h>
#include<string>
#include<fstream>

// prostranstvo imen dlya ispolzovaniya cout i cin
using namespace std;

struct Ticket {

	int id;
	string client;
	string device;
	int priority;
	bool solved =0;



};

int main() {

	Ticket tickets[3];

	for (int i = 0; i < 3; i++) {
		cout << "\nTicket " << i + 1 << endl;

		cout << "ID: ";
		cin >> tickets[i].id;

		cout << "Client: ";
		cin >> tickets[i].client;

		cout << "Device: ";
		cin >> tickets[i].device;

		cout << "Priority (1 low 2 medium 3 high): ";
		cin >> tickets[i].priority;
	}
	cout << "--------finished---------- " << endl;
	cout << "-------------------------- " << endl;

	for (int i = 0; i < 3; i++) {
		cout << "\nID: " << tickets[i].id << endl;
		cout << "----------------------------- " << endl;
		cout << "Client: " << tickets[i].client << endl;
		cout << "----------------------------- " << endl;
		cout << "Device: " << tickets[i].device << endl;
		cout << "----------------------------- " << endl;
		cout << "Priority: " << tickets[i].priority << endl;
		cout << "----------------------------- " << endl;

	}

	if (tickets->id >= 4) {
		cout << "Error: ID must be less than 4." << endl;
	}
	else if (tickets->priority < 1 || tickets->priority > 3) {
		cout << "Error: Priority must be between 1 and 3." << endl;
	}

	else {
		cout << "Ticket created successfully." << endl;
	}

	ofstream file("tickets.txt", ios_base::out);

	if (file.is_open()) {
		for (int i = 0; i < 3; i++) {
			file << "\nID: " << tickets[i].id << endl;
			file << "Client: " << tickets[i].client << endl;
			file << "Device: " << tickets[i].device << endl;
			file << "Priority: " << tickets[i].priority << endl;
		}

		file.close();
		cout << "Report saved to tickets.txt" << endl;
	}
	else {
		cout << "Error: cannot open file." << endl;
	}


}




/*
//perechislenie (enum) dlya variantov
// Enum for options
enum class Options {
	ADD = 1,
	SUBTRACT,
	MULTIPLY,
	DIVIDE,
	DEL
};
// Struct for MyStruct
struct MyStruct {
	int weight;
	string name;
	Options option;
};
// Main function
int main() {

	MyStruct myStruct;
	myStruct.weight = 10;
	myStruct.name = "My Struct";
	myStruct.option = Options::ADD;
	cout << "Weight: " << myStruct.weight << endl;
	cout << "Name: " << myStruct.name << endl;
	cout << "Options (numeric): " << static_cast<int>(myStruct.option) << endl;

	if (myStruct.option == Options::ADD) {
		cout << "Options is ADD" << endl;
	}
	else if (myStruct.option == Options::SUBTRACT) {
		cout << "Options is SUBTRACT" << endl;
	}
	else if (myStruct.option == Options::MULTIPLY) {
		cout << "Options is MULTIPLY" << endl;
	}
	else if (myStruct.option == Options::DIVIDE) {
		cout << "Options is DIVIDE" << endl;
	}
	else if (myStruct.option == Options::DEL) {
		cout << "Options is DEL" << endl;
	}
	else {
		cout << "Options is unknown" << endl;
	}

	return 0;
}

*/










/*
// Struct danux 
// Struct danux for point
struct point {
	int x;
	int y;
};

// Struct danix dlya dereva
struct tree 
{

	string name;
	int age;
	bool isAlive;
	float height;
	point location;

	void getInfo() {
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Is Alive: " << (isAlive ? "Yes" : "No") << endl;
		cout << "Height: " << height << endl;
	}



};



// Main function
int main() {

	tree myTree;
	myTree.name = "Oak";
	myTree.age = 10;
	myTree.isAlive = true;
	myTree.height = 5.5;
	myTree.getInfo();
	myTree.location.x = 10;
	myTree.location.y = 20;

	tree anotherTree;
	anotherTree.name = "Pine";
	anotherTree.age = 15;
	anotherTree.isAlive = true;
	anotherTree.height = 6.2;
	anotherTree.getInfo();


}
*/

/*
//rabota s filami
int main() {

	//kak sozdast nayti i zapustit file
	ofstream file("text.txt", ios_base::out);
	if (file.is_open()) {

		file << "helo word";
		file.close();
	}
	
	//kak chitat file
	ifstream file("text.txt");
	if (file.is_open()) {

 //dlya odnogo pervogo slovo
		//string temp;
		//file >> temp;

		//dlya 100 simvolov
		char temp[100];
		file.getline(temp,100);
		cout << temp << endl;
		file.close();
	}




return 0;
}
*/



/*
// kak sozdast funksii
void add(int a, int b) {

cout << (a + b) << endl;

}

void add(string word) {
	cout << word << endl;
}

void print(string word) {

	cout << word << endl;

}
*/

/*
//primer
void minimal(int* arr,int len) {

	int min = *arr;
	for (int i = 0; i < len; i++) {
		if (min > *(arr + i))
			min =*(arr+i);
	
	
	}

	cout << "monim" << min << endl;

}
int main() {


	//primer
	int arr[] = { 5, 7, 3, -2, 5 };

	minimal(arr, 5);



	//silki
	int num = 10;
	int& a = num;
	a = 15;
	cout << &num << " - " << num << endl;
	cout << &a << " - " << a << endl;

	//ukazateli
	int val = 12;
	int* ptrval = &val;

	*ptrval = 20;
	ptrval = nullptr;
	cout << &val << " - " << val << endl;
	cout << &ptrval << " - " << *ptrval << endl;
}
*/	
	/*

	// izmenenie simvola v stroke
	string name = "Vladislav";
	name[0] = 'e';
	cout << "Hello, " << name << "!" << endl;

	cin >> name;
	cout << "Hello, " << name << "!" << endl;
	

	// izmenenie simvola v massive
	char word[] = { 'h','i','!' };
	for (int i = 0;i < 3;i++)	 {
		cout << word[i];
	}

	//dinamichueskiy massiv iz 3000 elementov tipa int
	int *num =new int[3000];
	num[0] = 1;
	cout << "num[0] = " << num[0] << endl;
	delete[] num;
	cout << "num[0] = " << num[0] << endl; 

	// mnogomernie massiv iz 3x2 elementov tipa int
	
	int matrix[3][2] = { {1,2},{4,5},{7,8} };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			cout << "Element at [" << i << "][" << j << "]: " << matrix[i][j] << endl;
		}
	}
	
	cout  << "Element at [0][1]: " << matrix[1][1] << endl;

	// malomernie massiv iz 5 elementov tipa float
	float numbera[5];
	for (int i = 0; i < 5; i++) {
		numbera[i] = i * 1.1;
		cout << "numbera[" << i << "] = ";
		cin >> numbera[i];
	}

	

	float summa = 0;
	for (int i = 0; i < 5; i++) {
		summa += numbera[i];
	}
	cout << "Summa = " << summa << endl;

	float min = numbera[0];
	for (int i = 1; i < 5; i++) {
		if (numbera[i] < min) {
			min = numbera[i];
		}
	}
	cout << "Minimum = " << min << endl;

	float max = numbera[0];
	for (int i = 1; i < 5; i++) {
		if (numbera[i] > max) {
			max = numbera[i];
		}
	}
	cout << "Maximum = " << max << endl;



	int nome[4];
	nome[0] = 12;
	nome[1] = 13;
	nome[2] = 14;
	nome[3] = 15;
	cout<<nome[0]<<" "<<nome[1]<<" "<<nome[2]<<" "<<nome[3]<<endl;

	float numbers[3] = { 1.1, 2.2, 3.3 };
	for (int i = 0; i < 3; i++) {
		cout <<"ssss" << i << ":"<< numbers[i] << endl;
	}

	// generatsiya sluchaynogo chisla ot 1 do 20
	srand(time(NULL));
	int rand_num = 1+rand()%20;
	int user_input;
	bool stop = false;
	do {
		
		cout << "Enter a number between 1 and 20: ";
		cin >> user_input;
		if (user_input < 1 || user_input > 20) {
			cout << "Error: Please enter a number between 1 and 20." << endl;
			continue; // Prompt the user again
		}
		if (user_input == rand_num) {
			cout << "Congratulations! You guessed the correct number: " << rand_num << endl;
			stop = true; // Exit the loop
		}
		else if (user_input < rand_num) {
			cout << "Too low! Try again." << endl;
		}
		else {
			cout << "Too high! Try again." << endl;
		}
	} while (!stop);


	// Vvedenie chisla ot polzovatelya s proverkoy na oshibku (for loop)
	for (int jjj = 1; jjj <= 15; jjj++) {
		if (jjj == 10) 
			break; // exit the loop when jjj is 10

		if (jjj % 2 == 0)
			continue; // skip the rest of the loop when jjj is even
		
		cout << "Hello, World!" << jjj << endl;
	}

	// Vvedenie chisla ot polzovatelya s proverkoy na oshibku (do while loop)
	int kkk = 100;
	do {
		cout << "Hello, World!" << kkk << endl;
		kkk -= 10;
	} while (kkk > 10);

    // Vvedenie chisla ot polzovatelya s proverkoy na oshibku (while loop)
	int xxx = 0;
	while (xxx<10) {
		cout << "Hello, World!"<<xxx << endl;
		xxx++;
	}

	// Vvedenie chisla ot polzovatelya s proverkoy na oshibku (for loop)
	for (int i = 100; i >= 10; i-=10) {
		cout <<i << ": " << "Hello, World!" << endl;
	}

	// generatsiya sluchaynogo chisla ot 1 do 20
	srand(time(	NULL));
	int ressult = 1 + rand() % 20;
	cout << ressult << endl;



	// izmenenie regionalnykh nastroek dlya russkogo yazyka
	setlocale(LC_ALL, "RU"); // dlya russkogo yazyka

	// Tipy dannykh v C++:

	short f = 32767; // malenkoe chislo 2 byte
	
	long d = 2147483647; // bolshoe chislo 8 byte

	int c = 4; // chislo dlya vvedeniya (srednoe) 4 byte

	unsigned int e = 4294967295; // bolshoe chislo bez - znaka 4 byte

	float g = 3.14f; // chislo s plavayushchey tochkoy 4 byte

	double h = 3.14159265358979323846; // bolshoe chislo s plavayushchey tochkoy 8 byte
	

	char i = 'A'; // simvol 1 byte


	bool j = true; // logicheskiy tip dannykh 1 byte
	
	bool k = false; // logicheskiy tip dannykh 1 byte


	// calculator with user input and error checking
	float num1;
	float num2;
	float sum;
	std::cout << "Enter first number: ";
	std::cin >> num1;

	std::cout << "Enter second number: ";
	std::cin >> num2;

	char operation;
	std::cout << "Enter operation (+, -, *, /): ";
	std::cin >> operation;
	if (operation == '+') {
		sum = num1 + num2;
		std::cout << "The sum of " << num1 << " and " << num2 << " is " << sum << std::endl;
	}
	else if (operation == '-') {
		sum=num1 - num2;
		std::cout << "The difference of " << num1 << " and " << num2 << " is " << sum << std::endl;
	}
	else if (operation == '*') {
		sum = num1 * num2;
		std::cout << "The product of " << num1 << " and " << num2 << " is " << sum << std::endl;
	}

	else if (operation == '/') {
		if (num2 != 0) {
			sum = num1 / num2;
			std::cout << "The quotient of " << num1 << " and " << num2 << " is " << sum << std::endl;
		}
		else {
			std::cout << "Error: Division by zero!" << std::endl;
			return 1; // Exit the program with an error code
		}
	}
	else {
		std::cout << "Error: Invalid operation!" << std::endl;
		return 1; // Exit the program with an error code
	}


    //  &&  i 
	// ||  ili


	// Vvedenie chisla ot polzovatelya s proverkoy na oshibku (switch case)

    int cc;
	std::cin >> cc;

	switch (cc) {
		case  5:
			std::cout << "chislo bolshoe 5" << std::endl;
			break;
		case 10:
			std::cout << "chislo bolshoe 10" << std::endl;
			break;

			default:
			std::cout << "ne pravilno" << std::endl;
			break;
	}

	// Vvedenie chisla ot polzovatelya s proverkoy na oshibku (if else)

	int l; // chislo dlya vvedeniya (srednoe) 4 byte
	bool m = true; // logicheskiy tip dannykh 1 byte

	std::cout << "number 1/20: ";
	std::cin >> l;
	// Proverka chisla if
	if (l>11 && m == false) {
		std::cout << " pravilno" << std::endl;
		if (l == 5) {
			std::cout << "chislo bolshoe";
		}
	}

	// Proverka chisla else if
	else if (l == 11) {
		std::cout << "ne pravilno rovno 11" << std::endl;
	}
	// Proverka chisla else
	else {
		std::cout << "ne pravilno" << std::endl;
	}

	
	// Vvedenie chisla ot polzovatelya
	std::cout << "number: ";// prompt for user input
	
	std::cin >> c;
	
	std::cout << "You entered: " << c << std::endl;


	// Vvedenie chisla ot polzovatelya s proverkoy na oshibku
	std::cout << "Hello, World!\n" << std::endl; // tipo print("HELLO")


	int a = 5;
	int b = 10;
	std::cout << "The sum of " << a << " and " << b << " is " << (a + b) << std::endl;
	return 0;
	*/
