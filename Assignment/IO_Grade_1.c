#include <stdio.h>
#include <stdlib.h>

#define CLS system("cls")
#define PAUSE system("pause")




main() {
	int input, testVar = 0;
	FILE *file;

	//Checks if file is there, if not then creates it. 
	file = fopen_s(&file, "C:\\Program Files\\Studentio\\gradebook.bin", "r+b");

	if (file == NULL) 
		file = fopen_s(&file, "C:\\Program Files\\Studentio\\gradebook.bin", "wb");



		//file open. C:\\Program Files\Studentio

		//Menu loop
		do {
			printf("Grade Tracker");
			printf("Please choose an option:\n");
			printf("1. Enter Grades.\n");
			printf("2. Find Student Average.\n");
			printf("3. Find Exam Average.\n");
			printf("4. Find Class Average.\n");
			printf("5. Clear Grades.\n");
			printf("6. Save to Text File. \n");
			printf("7. Save and Quit.");
			scanf_s(" %d", &input);

			//Switch for Menu Input. Each case calls function appropriate to operation that is being requested. 
			switch (input) {
			case 1:
				//Enter Grades.
				fprintf_s(&file, "This is a test\n");
				break;

			case 2:
				//Average scores Student.
				break;

			case 3:
				//Exam average.
				break;

			case 4:
				//Class Average.
				break;

			case 5:
				//Clear Grades.
				break;

			case 6:
				//Save to TXT.
				break;

			case 7:
				//Quit.
				break;

			default:
				printf("Invalid Entry!\n");
				PAUSE;
				CLS;
				break;

			}

		} while (input != 7);


	
	fclose(file);
}



