#include<iostream>
#include<string>
using namespace std;

int main() 
{
    const int MAX_STUDENTS = 100;
    string names[MAX_STUDENTS];
    int grades[MAX_STUDENTS];
    int numStudents;

    cout<<"Enter the number of students : ";
    cin>>numStudents;

    for(int i=0;i<numStudents;++i) 
    {
        cout<<"Enter name of student "<<i+1<<" : ";
        cin>>names[i];
        cout<<"Enter grade of student "<<i+1<<" : ";
        cin>>grades[i];
    }

    double totalGrade = 0;
    int highestGrade = grades[0];
    int lowestGrade = grades[0];

    for(int i=0;i<numStudents;++i) 
    {
        totalGrade+=grades[i];

        if(grades[i]>highestGrade) 
        {
            highestGrade=grades[i];
        }

        if(grades[i]<lowestGrade) 
        {
            lowestGrade=grades[i];
        }
    }

    double averageGrade=totalGrade/numStudents;
    cout<<"Average grade : "<<averageGrade<<endl;
    cout<<"Highest grade : "<<highestGrade<<endl;
    cout<<"Lowest grade : "<<lowestGrade<<endl;

    return 0;
}
