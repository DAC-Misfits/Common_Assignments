#include <iostream>
using namespace std;

char getGrades(int avg)
{
    if (avg >= 90 && avg <= 100)
    {
        return 'A';
    }
    else if (avg >= 80 && avg <= 89)
    {
        return 'B';
    }
    else if (avg >= 70 && avg <= 79)
    {
        return 'C';
    }
    else if (avg >= 60 && avg <= 69)
    {
        return 'D';
    }
    else
    {
        return 'F';
    }
}

void q1()
{
    int students;
    cout << "Enter total number of students: ";
    cin >> students;
    int arr[students][4];
    string name[students];
    for (int i = 0; i < students; i++)
    {
        string stName;
        cout << "Name of student: " << i + 1 << " ";
        cin >> stName;
        name[i] = stName;

        for (int j = 0; j < 3; j++)
        {
            cout << "Enter marks of student " << i + 1 << " for subject: " << j + 1 << " ";
            int marks;
            cin >> marks;
            arr[i][j] = marks;
        }
        cout << endl;
    }

    for (int i = 0; i < students; i++)
    {
        int total = 0;
        for (int j = 0; j < 3; j++)
        {
            total += arr[i][j];
        }
        int avg = total / 3;
        arr[i][3] = avg; // store the average of each student
        char grade = getGrades(avg);
        cout << "Name of student: " << name[i] << " ";
        cout << "Percentage: " << avg << " ";
        cout << "Grades: " << grade << " " << endl;
    }
}

void q2()
{
    int students, n_subjects;
    cout << "Enter total number of students: ";
    cin >> students;
    cout << "Enter total number of subjects: ";
    cin >> n_subjects;
    int arr[students][n_subjects];
    string name[students];

    for (int i = 0; i < students; i++)
    {
        cout << "Name of student: " << i + 1 << " ";
        cin >> name[i];

        for (int j = 0; j < n_subjects; j++)
        {
            cout << "Enter marks of student " << i + 1 << " for subject: " << j + 1 << " ";
            int marks;
            cin >> marks;
            arr[i][j] = marks;
        }
        cout << endl;
    }

    for (int i = 0; i < n_subjects; i++)
    {
        int total = 0;
        for (int j = 0; j < students; j++)
        {
            total = total + arr[j][i];
        }
        float avg = float(total / students);
        cout << avg << " ";
    }
}

int main()
{
    // q1();
    q2();
}