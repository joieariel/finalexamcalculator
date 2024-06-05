/* Joie Whitmon
Program #3 [Mini-project]: What do I need? 


*/

#include <iostream>
#include <iomanip>
using namespace std;
int main(){
     //declare all of the necessary variables
     float hw1, hw2, hw3, hw4, lab1, lab2, lab3, lab4, quiz1, quiz2, quiz3;
     float test1, test2, project, hwAvg, labAvg, quizAvg, testAvg;
     float hwPerWght, labPerWght, quizPerWght, testPerWght, projectPerWght, totalPerWght;
     float currentPerGr, goal1, goal2, goal3, required1, required2, required3;
    // declare all of the constants (category weights)
     const float TEST_WGHT = .40;
     const float QUIZ_WGHT = .10;
     const float PROJECT_WGHT = .10;
     const float HW_WGHT = .10;
     const float LAB_WGHT = .10;
     const float FINALEXAM_WGHT = .20;
     // used fixed setprecision to ensure the answers are 2 digits after decimal
     cout << fixed << setprecision(2) << showpoint << endl;

     // ask user to enter their grades

     // ask user to enter 4 hw grades
     // Homework 1 
    cout << "Enter the first homework grade: " << endl;
    cin >> hw1;
    // Homework 2
    cout << "Enter the second homework grade: " << endl;
    cin >> hw2;
    // Homework 3
    cout << "Enter the third homework grade: " << endl;
    cin >> hw3;
    // Homework 4
    cout << "Enter the fourth homework grade: " << endl;
    cin >> hw4;

    // Compute the homework average 
    hwAvg = (hw1 + hw2 + hw3 + hw4) / 4;

    // ask user to enter 4 lab grades
    // Lab 1
    cout << "Enter the first lab grade: " << endl;
    cin >> lab1;
    // Lab 2
    cout << "Enter the second lab grade: " << endl;
    cin >> lab2;
    // Lab 3
    cout << "Enter the third lab grade: " << endl;
    cin >> lab3;
    // Lab 4
    cout << "Enter the fourth lab grade: " << endl;
    cin >> lab4;

    // Compute the lab average
    labAvg = (lab1 + lab2 + lab3 + lab4) / 4;

    // ask user to enter 3 quiz grades
    // Quiz 1
    cout << "Enter the first quiz grade: " << endl;
    cin >> quiz1;
    // Quiz 2
    cout << "Enter the second quiz grade: " << endl;
    cin >> quiz2;
    // Quiz 3
    cout << "Enter the third quiz grade: " << endl;
    cin >> quiz3;

    // Compute the quiz average
    quizAvg = (quiz1 + quiz2 + quiz3) / 3;

    //ask the user to enter 2 test grades
    // Test 1
    cout << "Enter the first test grade: " << endl;
    cin >> test1;
    // Test 2
    cout << "Enter the second grade: " << endl;
    cin >> test2;
      
    //Compute the test average
    testAvg = (test1 + test2) / 2;
  
    // ask the user to enter 1 project grade
    cout << "Enter the project grade: " << endl;
    cin >> project;

    // calculate the weight of the homework category
    hwPerWght = hwAvg * HW_WGHT;
    // calculate the weight of the lab category
    labPerWght = labAvg * LAB_WGHT;
    // calculate the weight of the quiz category
    quizPerWght = quizAvg * QUIZ_WGHT;
    // calculate the weight of the test category
    testPerWght = testAvg * TEST_WGHT;
    // calculate the weight of the project category
    projectPerWght = project * PROJECT_WGHT;

    // add the percentage weight variables to get the total percentage weight
    totalPerWght = hwPerWght + labPerWght + quizPerWght + testPerWght + projectPerWght;

    // calculate the current grade percentage
    currentPerGr = totalPerWght / (.8);

    // Display the homework, lab, quiz, test, and project grades
    cout << setw(25) << left << "Assignments:" << setw(15) << right << "Grades: " << endl;
    cout << setw(25) << left << "Homework Grades: " << setw(15) << hw1 << setw(15) << hw2 << setw(15) << hw3 << setw(15) << hw4 << endl;
    cout << setw(25) << left << "Lab Grades: " << setw(15) << lab1 << setw(15) << lab2 << setw(15) << lab3 << setw(15) << lab4 << endl;
    cout << setw(25) << left << "Quiz Grades: " << setw(15) << quiz1 << setw(15) << quiz2 << setw(15) << quiz3 << endl;
    cout << setw(25) << left << "Test Grades: " << setw(15) << test1 << setw(15) << test2 << setw(15) << endl;
    cout << setw(25) << left << "Project Grades: " << setw(15) << project << endl;
    // Display the hw, lab, quiz, tes,t, and project averages
    cout << left << setw(25) << "Homework Average: " << right << setw(25) << "Lab Average: " << setw(25) << "Quiz Average: " << setw(25) << "Test Average: " << setw(25) << "Project Average: " << endl;
    cout << right << setw(25) << hwAvg << right << setw(25) << labAvg << setw(25) << quizAvg << setw(25) << testAvg << setw(25) << project << endl;
    // Display current percent grade average
    cout << "Current Grade Percentage: " << currentPerGr << endl;
    
    // Ask user to enter 3 goals for their final grade to calculate what they need to make on their finals to achieve their goals
    cout << "\nBased on your current grade, please enter 3 goals for your final grade." << endl;
    cout << "I will calculate what you need to make on your final to achieve your goals!" << endl;

    cout << "\nGoal grade #1: " << endl;
    cin >> goal1;

    cout << "\nGoal grade #2: " << endl;
    cin >> goal2;

    cout << "\nGoal grade #3: " << endl;
    cin >> goal3;

    // calculate required grade on final for goal #1
    required1 = (goal1 - currentPerGr *(1 - FINALEXAM_WGHT)) / FINALEXAM_WGHT;
    required2 = (goal2 - currentPerGr *(1 - FINALEXAM_WGHT)) / FINALEXAM_WGHT;
    required3 = (goal3 - currentPerGr *(1 - FINALEXAM_WGHT)) / FINALEXAM_WGHT;

    // Display the required grades in a table
    /*
    cout << setw(25) << left << "Required Grade to receive a " << goal1 << ": " << setw(15) << required1 << endl;
    cout << setw(25) << left << "Required Grade to receive a " << goal2 << ": " << setw(15) << required2 << endl;
    cout << setw(25) << left << "Required Grade to receive a " << goal3 << ": " << setw(15) << required3 << endl;
    */

    // Display the required grades in a table

    cout << setw(25) << left << "Goal Final Grade:" << setw(25) << "Required Grade on Final:" << endl;
    cout << setw(25) << left << goal1 << setw(25) << required1 << endl;
    cout << setw(25) << left << goal2 << setw(25) << required2 << endl;
    cout << setw(25) << left << goal3 << setw(25) << required3 << endl; 

    cout << "\nGood luck on your exam!" << endl;







    return 0;
}
