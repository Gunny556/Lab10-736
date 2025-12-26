#include<iostream>
#include<string>
using namespace std;

int main(){
    int count[5] = {}; // A, B, C, D, F
    int studentNum = 1;
    string grade;

    cout << "Please input grade of each student (A-F) or input 0 to exit.\n";

    do{
        cout << "Student [" << studentNum << "]: ";
        cin >> grade;

        if(grade == "0") break;

        if(grade == "A"){
            count[0]++;
            studentNum++;
        } else if(grade == "B"){
            count[1]++;
            studentNum++;
        } else if(grade == "C"){
            count[2]++;
            studentNum++;
        } else if(grade == "D"){
            count[3]++;
            studentNum++;
        } else if(grade == "F"){
            count[4]++;
            studentNum++;
        } else {
            cout << "Wrong input. Please input again." << endl;
        }
    }while(true);

    int total = studentNum - 1;

    cout << "In total " << total << " students." << endl;
    cout << "A = " << count[0] << ", ";
    cout << "B = " << count[1] << ", ";
    cout << "C = " << count[2] << ", ";
    cout << "D = " << count[3] << ", ";
    cout << "F = " << count[4] << endl;

    return 0;
}