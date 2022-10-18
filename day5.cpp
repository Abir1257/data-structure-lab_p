#include <iostream>
using namespace std;

class Student
{
   public:
    int studentID;
    string studentName;
    double CGPA;
    int completeCredits;

};
int main()
{
    Student S[5];
   int i, n = 0;
   Student temp;

 for(i=0; i<5; i++)
   {
       cout << "  " << (i + 1) << "th Student's Info"<< endl;
       cout<<"Student ID: ";
       cin>>n;
                S[i].studentID = n;
                cout<<"Student's Name: ";
                cin>>S[i].studentName;
                cout<<"Number Of Credit Completed: ";
                cin>>S[i].completeCredits;
               cout<<"CGPA: ";
               cin>>S[i].CGPA;
    }

    for(int i=0; i<6; i++)
        {
        int min_index = i;
        for(int j=i+1; j<6; j++)
            {
            if(S[min_index].CGPA > S[j].CGPA)
            {
                min_index = j;
            }
        }
        temp = S[min_index];
        S[min_index] = S[i];
        S[i] = temp;
    }

for(int i=0; i<6; i++)
{
cout<<S[i].studentID<<" ";
cout<<S[i].studentName<<" ";
cout<<S[i].completeCredits<<" ";
cout<<S[i].CGPA<<" ";
cout<<endl;

}
}
