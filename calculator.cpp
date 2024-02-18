#include <iostream>
#include <thread>
#include <chrono>
#include <vector>
using namespace std;

int choice = 0, semester = 0;
float gpmech = 0.0, gpelec = 0.0, gpss = 0.0, gpmaths = 0.0, gpchem = 0.0;
vector<float> acad;

void displayCourses(int semester){

    if(semester == 1){
        cout << "====================================================================================" << "\n";
        cout << "||                               COURSES FOR SEMESTER 1                           ||" << "\n";
        cout << "====================================================================================" << "\n";
        cout << "||  S. No. ||              COURSE NAME                 ||  COURSE CODE || CREDITS ||" << "\n";
        cout << "||    1    || FUNDAMENTALS OF MECHANICAL ENGINEERING   ||     BME101   ||   3.00  ||" << "\n";
        cout << "||    2    || FUNDAMENTALS OF ELECTRONICS ENGINEERING  ||     BEC101   ||   3.00  ||" << "\n";
        cout << "||    3    || SOFT SKILLS                              ||     BAS105   ||   3.00  ||" << "\n";
        cout << "||    4    || ENGINEERING MATHEMATICS - I              ||     BAS103   ||   4.00  ||" << "\n"; 
        cout << "||    5    || ENGINEERING CHEMISTRY                    ||     BAS102   ||   4.00  ||" << "\n";
        cout << "====================================================================================" << "\n";
    }
    else{
        cout << "ERROR!! CHOOSE THE CORRECT SEMESTER.";
    }
}

float calculatSGPA(int semester){
    float totalCreditsScored = 0.0;
    float totalCredits = 0.0;
    if(semester == 1){
        float sub1 = 3.0, sub2 = 3.0, sub3 = 3.0, sub4 = 4.0, sub5 = 4.0;
        totalCredits = sub1+sub2+sub3+sub4+sub5;
        for(int i=0;i<acad.size();i++){
            if(i<3) totalCreditsScored += (3.0*acad[i]);
            else totalCreditsScored += (4.0*acad[i]); 
        }
    }
    else cout << "!! ENTER THE CORRECT SEMESTER NUMBER !!";
    return totalCreditsScored/totalCredits;
}

int main(){
    this_thread::sleep_for(chrono::seconds(1));
    cout << "\n" << "\n";
    cout << "===========================================================================" << "\n";
    cout << "||                          CGPA CALCULATOR MENU                         ||" << "\n";
    cout << "===========================================================================" << "\n";
    cout << "|| 1) Choose Semester.                                                   ||" << "\n";
    cout << "|| 2) Display the courses for the given semester along with credits.     ||" << "\n";
    cout << "|| 3) Enter the grade points for the courses.                            ||" << "\n";
    cout << "|| 4) Display SGPA (Semester Grade Point Avarage).                       ||" << "\n";
    cout << "|| 5) Display YGPA (Yearly Grade Point Average).                         ||" << "\n";
    cout << "|| 6) Display CGPA (Cumulative Grade Point Avarage).                     ||" << "\n";
    cout << "|| 7) Exit from the session.                                             ||" << "\n";
    cout << "===========================================================================" << "\n";
    cout << "Enter your choice : ";
    cin >> choice;
    switch (choice)
    {
    case 1: //asks for the semester
        cout << "Enter the semester : ";
        cin >> semester;
        main();
        break;

    case 2: //displays the courses for that particular semester;
        displayCourses(semester);
        main();
        break;

    case 3: //asks for the grade points scored in the particular semester
        cout << "\n" << "\n" << "Enter the grade points in mechanical : ";
        cin >> gpmech;
        acad.push_back(gpmech);
        cout << "\n" << "Enter the grade points in electronics : ";
        cin >> gpelec;
        acad.push_back(gpelec);
        cout << "\n" << "Enter the grade points in soft skills : ";
        cin >> gpss;
        acad.push_back(gpss);
        cout << "\n" << "Enter the grade points in mathematics : ";
        cin >> gpmaths;
        acad.push_back(gpmaths);
        cout << "\n" << "Enter the grade points in chemistry : ";
        cin >> gpchem;
        acad.push_back(gpchem);
        main();
        break;

    case 4: //display SGPA
        cout << "SGPA for " << semester << " is : " << calculatSGPA(semester); 
        main();
        break;

    case 5:
        cout << "Code executed Successfully!" << "\n" << "\n";
        main();
        break;

    case 6:
        cout << "Code executed Successfully!" << "\n" << "\n";
        main();
        break;

    case 7:
        cout << "Thank You For Using The Program!" << "\n" << "\n";
        break;

    default:
        cout << "!! ENTER CORRECT CHOICE !!" << "\n" << "\n";
        main();
        break;
    }
    return 0;
}