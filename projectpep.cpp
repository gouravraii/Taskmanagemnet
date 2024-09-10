#include<iostream>

using namespace std;
class RoutineTask {
private:
    string name, gender, date, wokeup, breakfast, bath, lunch, evening, night, sleep;
    int age;

public:
    RoutineTask() : age(0) {}

    void setRoutineTaskData() {
        cout << "Enter your good name: ";
        getline(cin, name);

        cout << "Enter your gender: ";
        getline(cin, gender);
		do {
    
            cout << "Enter age: ";
            cin >> age;
            if (age <= 0) {
                cout << "Age must be a positive integer. Try again." << endl;
            }
        } while (age <= 0);

        cin.ignore();
        cout << "Enter  date: ";
        getline(cin, date);

        cout << "What time you woke up?: ";
        getline(cin, wokeup);

        cout << "What you have eaten in your breakfast?: ";
        getline(cin, breakfast);

        cout << "At what time you have taken bath: ";
        getline(cin, bath);

        cout << "What you have eaten in your lunch?: ";
        getline(cin, lunch);

        cout << "What you have done in the evening?: ";
        getline(cin, evening);

        cout << "What you have done in the night?: ";
        getline(cin, night);

        cout << "When you go for sleep?: ";
        getline(cin, sleep);
    }

    void displayRoutineTask() { cout << endl;
        cout << "x--------------------x------------------------x" << endl;
        cout << "\t\t Fullday Routine" << endl;
        cout << "x--------------------x------------------------x" << endl;
        
        cout << "Name: " << name <<endl;
		cout<<"Gender: " << gender <<endl;
		cout<< "Age: " << age<<endl;
		cout<< "Date: " << date<<endl;
        cout<< "Wake up time : " << wokeup<<endl;
		cout<< "Breakfast: " << breakfast<<endl;
		cout<< "Bath: " << bath<<endl;
        cout<< "Lunch: " << lunch<<endl; 
		cout << "Evening activities: " << evening <<endl;
		cout<< " Night activities: " << night<<endl; 
		cout<< "Sleep: " << sleep <<endl;
    }
};

class College : public RoutineTask {
private:
    string collegeName, collegeTime, courseName, library, exam, lunchBreak, canteen;

public:
    void setCollegeData() {
        
        cout << "What is your college name? ";
        getline(cin, collegeName);

        cout << "What time does your college start? ";
        getline(cin, collegeTime);

        cout << "What is your course name? ";
        getline(cin, courseName);

        cout << "When do you go to the library? ";
        getline(cin, library);

        cout << "When will your college exams start? ";
        getline(cin, exam);

        cout << "What time do you get a lunch break? ";
        getline(cin, lunchBreak);

        cout << "Is there a canteen in your college? ";
        getline(cin, canteen);
    }

    void displayCollege() {
        displayRoutineTask();
        cout << endl;
        cout << "x--------------------x------------------------x" << endl;
        cout << "\t\t College Routine" << endl;
        cout << "x--------------------x------------------------x" << endl;
        cout << "College Name: " << collegeName<<endl;
		cout<< "College Start Time: " << collegeTime<<endl;
		cout<< "Course Name: "<< courseName <<endl;
		cout<< "Library: " << library<<endl;
		cout<< "Exam Start Time: " << exam <<endl;
		cout<< "Lunch Break Time: "<< lunchBreak <<endl;
		cout<< "Canteen: " << canteen <<endl;
    }
};

class ExtraTask : public College {
private:
    string freeTimeActivity, dance, guitar, gym, game,hobbie;

public:
    void setExtraTaskData() {
        cout << "Do you like dancing? ";
        getline(cin, dance);

        cout << "Do you know how to play the guitar? ";
        getline(cin, guitar);

        cout << "Do you go to the gym? ";
        getline(cin, gym);

        cout << "What do you do in your free time? ";
        getline(cin, freeTimeActivity);

        cout << "Which game do you play? ";
        getline(cin, game);
        
        cout<<"what are your hobbies? ";
        getline(cin,hobbie);
    }

    void displayExtraTask() {
        displayCollege();
     cout << endl;
        cout << "x--------------------x------------------------x" << endl;
        cout << "\t\t Extra Task" << endl;
        cout << "x--------------------x------------------------x" << endl;
        cout << "Like dancing: " <<dance<<endl;
		cout<< "Guitar playing: " << guitar <<endl;
		cout<< "Go to the gym: " << gym<<endl;
        cout<< "Free time activity: " << freeTimeActivity<<endl; 
		cout<< "playing game: " << game <<endl;
		cout<<"Hobbies: " <<hobbie<<endl;
    }
};

int main() {
    ExtraTask e;
    e.setRoutineTaskData();
    e.setCollegeData();
    e.setExtraTaskData();
    e.displayExtraTask();

    return 0;
}

