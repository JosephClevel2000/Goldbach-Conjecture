#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
#include <vector>
#include <cstdio>


using namespace std;

class Goldbach{
	public:
		//This function is good to go.
		int listSize(){
			ifstream List("Prime.txt");
			while(getline (List, read)){
				counter++;
			}
			List.close();
		return 0;
		}
		
		//Putting prime numbers from a .txt file into a vector.
		int primeList(){
			vector<int> primeArray;
			ifstream List("Prime.txt");
			while(length < counter){
				getline(List, read);
				storePrime = stoi(read);
				primeArray.push_back(storePrime);
				length++;
			}
			
			//Finding the maximum value from the list of primes.
			counterCompare = counter - 2;
			maxPrime = primeArray.back() + primeArray.at(counterCompare);
			numberOfEvens = maxPrime / 2;
			bigPrime = primeArray.back();
			
			
			//Initializng a file to input the validation of the conjecture into.
			ofstream Conjecture("Conjecture.txt");
			ofstream Distribution("Distribution.txt");
			//Checking the conjecture
			while(primeCounter < numberOfEvens){
				while(a + b != even){
					while(x < counter){
					prime1 = primeArray.at(x);
					prime2 = primeArray.at(y);
					if(prime1 + prime2 == even){
						a = prime1;
						b = prime2;
						k++;
					}
						for(y = 0; y < counter; y++){
		
							prime2 = primeArray.at(y);

							
							if(prime1 + prime2 == even){
								a = prime1;
								b = prime2;
								k++;
							}

						}
					y = 0;
					if(x < counter){
						x++;
					}
					
					}
					if(a + b == maxSum && maxSum%2 == 0 ){
						cout << "You have checked the conjecture up to " << even - 2 << ". Please add more prime numbers in the .txt file if you wish to check the Goldbach conjecture further." << endl;
						return 0;
					}

					}
					cout << a << " + " << b << " = " << even;
					cout.width(10);
					cout << even << " has " << k << " ways of being written as a prime." << endl;
					Conjecture << a << " + " << b << " = " << even << endl;
					Distribution << even << " has " << k << " ways of being written as a prime." << endl;
					even = even + 2;
				//Resetting parameters for next iteration
				a = 0;
				b = 0;
				x = 0;
				y = 0;
				k = 0;
				prime1 = 0;
				prime2 = 0;
				primeCounter++;
				}
			return 0;
			}

	private:
		//Setting up array for testing primes
		int counter = 0;
		int counterCompare = 0;
		int numberOfEvens = 0;
		int length = 0;
		int storePrime = 0;
		string read;
		//Testing conditions for primes
		int even = 4;
		int prime1 = 0;
		int prime2 = 0;
		int primeCounter = 0;
		int maxSum = 0;
		int maxPrime = 0;
		int bigPrime = 0;
		//More variables
		int a = 0;
		int b = 0;
		int x = 0;
		int y = 0;
		int k = 0;
};

int main() {
		cout << "Welcome to the small-Goldbach test!" << endl;
		Goldbach test;
		test.listSize();
		test.primeList();
		cout << "Please press enter to exit: " << endl;
		getchar();
	return 0;
}
