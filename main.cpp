#include <iostream>
#include <string>
using namespace std;
const int MAX_STUDENTS = 100;

/// <summary>
/// To get total sum of grades
/// </summary>
/// <param name="grades"></param>
/// <param name="size"></param>
/// <returns></returns>
double total(int grades[], int size) {
	double sum = 0;
	for (int i = 0; i < size; i++) {
		sum += grades[i];
	}
	return sum;
}

/// <summary>
/// To get Highest Grade among grades
/// </summary>
/// <param name="grades"></param>
/// <param name="size"></param>
/// <returns></returns>
int highest(int grades[], int size) {
	int maximum = 0;
	for (int i = 0; i < size; i++) {
		if (maximum < grades[i]) {
			maximum = grades[i];
		}
	}
	return maximum;
}

/// <summary>
/// To get Lowest Grade among grades
/// </summary>
/// <param name="grades"></param>
/// <param name="size"></param>
/// <returns></returns>
int lowest(int grades[], int size) {
	int minimum = 100;
	for (int i = 0; i < size; i++) {
		if (minimum > grades[i]) {
			minimum = grades[i];
		}
	}
	return minimum;
}


int main() {
	string students[MAX_STUDENTS];
	int student_grades[MAX_STUDENTS];
	int num_of_students;
	// Number of Students in database
	cout << "Enter the number of students : ";
	cin >> num_of_students;

	// Taking input for the database
	for (int i = 0; i < num_of_students; i++) {
		cout << "Enter the name of Student "<<i+1<<" : ";
		// To clear the newline character left in the buffer
		cin.ignore();
		getline(cin, students[i]);
		cout << "Enter grades of " << students[i] << " : ";
		cin >> student_grades[i];
	}
	// Doing Calculations for Average, Highest & Lowest Grades
	double average_grades = total(student_grades, num_of_students) / num_of_students;
	int highest_grade = highest(student_grades, num_of_students);
	int lowest_grade = lowest(student_grades, num_of_students);

	// Printing Calculations
	cout << "\n";
	cout << "Average of Grades = " << average_grades << endl;
	cout << "Highest Grade = " << highest_grade << endl;
	cout << "Lowest Grade = " << lowest_grade << endl;

	return 0;
}