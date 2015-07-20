// Program to judge difficulty of a dive based on 7 judges scores
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float judges[7];
	int i;
	bool isValid, isValid2 = false;
	float degreeOfDiff = 0;
	float highScore = 0;
	float lowScore = 10;
	float sumScore = 0;
	float finalScore = 0;
	float realFinalScore = 0;
	float calcFinal = 0;
	// Do While loop to validate difficulty variable
	do {
		cout << "\nEnter the degree of difficulty for the dive between [ 1.2 - 3.8 ] : ";
		cin >> degreeOfDiff;
		if (degreeOfDiff < 1.2 || degreeOfDiff > 3.8)
		{
			cout << "\nInvalid difficulty, try again.";
			isValid = false;
		}
		else
		{
			isValid = true;
		}

	 } while (isValid == false);
	 // Load array with judges scores
	 for (i = 0; i < 7; i++)
	 {
		 cout << "\nEnter score between [ 1-10 ] please. ";
		 cin >> judges[i];
		 while (judges[i] < 1 || judges[i] > 10)  // Input validation
		 {
			 cout << "\nIncorrect input!!\nEnter score between [ 1-10 ] please. ";
			 cin >> judges[i];
		 }
		 cout << "\nScore entered is " << judges[i];
	 }
	 // Locate the lowest & highest value of the array
	 for (i = 0; i < 7; i++)
	 {
		 if (judges[i] >= highScore)
		 {
			 highScore = judges[i];
		 }
		 if (judges[i] <= lowScore)
		 {
			 lowScore = judges[i];
		 }
	 }
	 cout << "\nlow score entered is " << lowScore << "\nhigh score entered is " << highScore << "\n";
	 // system("PAUSE");
	 // Calculate the diver's score in various steps starting here
	 for (i = 0; i < 7; i++)
	 {
		 sumScore += judges[i];
	 }
	 cout << "\n score total is" << sumScore; // Total value of 7 judges scores
	 finalScore = sumScore - (highScore + lowScore);  // Get rid of high and low values & assign total of 5 scores
	 calcFinal = finalScore * degreeOfDiff; // Take the 5 judges scores and multiply by degree of difficulty
	 realFinalScore = (calcFinal * .6);  // Multiply by .6 to get the final diver's score
	 cout << "\n\nThe diver's final score is " << realFinalScore << "\n";
	 cin.get();
	 return 0;

}
