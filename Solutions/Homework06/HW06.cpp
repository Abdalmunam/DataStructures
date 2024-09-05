#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int n, m;

    // Input number of students and subjects
    cout << "Enter number of students: ";
    cin >> n;
    cout << "Enter number of subjects: ";
    cin >> m;
    cin.ignore(); // Clear the newline character from the input buffer

    // Dynamically allocate memory for student names and grades
    string *names = new string[n];
    string *subjects = new string[m]; // Array for subjecdt names
    int **grades = new int *[n];

    for (int i = 0; i < n; ++i)
    {
        grades[i] = new int[m];
    }

    // Input subject names
    cout << "Enter names of subjects:\n";
    for (int j = 0; j < m; ++j)
    {
        cout << "Subject " << (j + 1) << ": ";
        getline(cin, subjects[j]); // Use getline for subject names
    }

    // Input student names and grades
    for (int i = 0; i < n; ++i)
    {
        cout << "Enter name of student " << (i + 1) << ": ";
        getline(cin, names[i]); // Use getline for student names

        cout << "Enter grades for " << names[i] << ":\n";
        for (int j = 0; j < m; ++j)
        {
            cout << subjects[j] << ": ";
            cin >> grades[i][j];
        }
        cin.ignore(); // Clear the newline character for the next student's name
    }

    // Print the table header
    cout << setw(20) << "Student Name";
    for (int j = 0; j < m; ++j)
    {
        cout << setw(10) << subjects[j];
    }
    cout << setw(10) << "Average" << endl;

    // Print the grades and calculate averages
    for (int i = 0; i < n; ++i)
    {
        cout << setw(20) << names[i];
        int sum = 0;

        for (int j = 0; j < m; ++j)
        {
            cout << setw(10) << grades[i][j];
            sum += grades[i][j];
        }

        double average = static_cast<double>(sum) / m;
        cout << setw(10) << fixed << setprecision(2) << average << endl;
    }

    // Free allocated memory
    for (int i = 0; i < n; ++i)
    {
        delete[] grades[i];
    }
    delete[] grades;
    delete[] names;
    delete[] subjects;

    return 0;
}
