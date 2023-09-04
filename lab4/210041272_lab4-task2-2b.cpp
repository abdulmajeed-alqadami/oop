
#include <iostream>
#include <string>
#include <vector>

class Student {
private:
    std::string firstName;
    std::string lastName;
    std::string studentID;
    int birthYear;
    std::vector<std::string> courses;
    std::vector<double> obtainedMarks;
    static int totalStudents;

public:
    Student(std::string first, std::string last, std::string id, int birthYr)
        : firstName(first), lastName(last), studentID(id), birthYear(birthYr) {
        totalStudents++;
    }


    ~Student() {
        totalStudents--;
    }


    void enrollInCourse(std::string courseName) {
        courses.push_back(courseName);
        obtainedMarks.push_back(0.0);
    }

    std::string generateEmail() {
        std::string universityDomain = "@exampleuniversity.edu";
        return firstName + "." + lastName + universityDomain;
    }


    void obtainedMarks(std::string courseName, double marks) {
        for (size_t i = 0; i < courses.size(); i++) {
            if (courses[i] == courseName) {
                obtainedMarks[i] = marks;
                break;
            }
        }

    double setGPAForEachCourse() {


    }

    double displayCGPA() {

    }

    void willGraduate() {

    }

    void applyForScholarship() {

    void participateInInternship(std::string company) {

    }

    void printAcademicRecord() {

    }
};

int Student::totalStudents = 0;

int main() {

    Student student1("John", "Doe", "S12345", 2000);
    Student student2("Jane", "Smith", "S67890", 1999);


    student1.enrollInCourse("Math");
    student1.enrollInCourse("Science");
    student2.enrollInCourse("History");
    student2.enrollInCourse("English");

    student1.obtainedMarks("Math", 95.0);
    student1.obtainedMarks("Science", 88.0);
    student2.obtainedMarks("History", 75.0);
    student2.obtainedMarks("English", 92.0);



    return 0;
}
