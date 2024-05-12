#include "student/Student.h"
#include "prof/Prof.h"
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(){
    string studentInputFile, studentOutputFile, profInputFile, profOutputFile;

    cout << "Type the student input file: ";
    cin >> studentInputFile;
    cout << "Type the student output file: ";
    cin >> studentOutputFile;
    cout << "Type the prof input file: ";
    cin >> profInputFile;
    cout << "Type the prof output file: ";
    cin >> profOutputFile;

    // Reading Students from a file and writing to another file
    ifstream studentInFile(studentInputFile);
    vector<Student> students;

    Student student("", "");

    while (studentInFile >> student) {
        students.push_back(student);
    }
    studentInFile.close();

    ofstream studentOutFile(studentOutputFile);
    for (const auto& student : students) {
        studentOutFile << student << endl;
    }
    studentOutFile.close();

    // Reading Profs from a file and writing to another file
    ifstream profInFile(profInputFile);
    vector<Prof> profs;

    Prof prof("", "");

    while (profInFile >> prof) {
        profs.push_back(prof);
    }
    profInFile.close();

    ofstream profOutFile(profOutputFile);
    for (const auto& prof : profs) {
        profOutFile << prof << endl;
    }
    profOutFile.close();

    return 0;
}