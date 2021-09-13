using namespace std;

void calculateGPA()
{
    int NoOfSubs;
    double credits[NoOfSubs];
    double points[NoOfSubs];
    double sum = 0;
    double total;
    double totalCredits = 0;

    system("cls");
    cout<<"---------------------------------------"<<end1;
    cout<<" GPA Calculator"<<end1;
    cout<<"----------------------------------------"<<end1;

    cout<<" Enter No of Subjects  :";
    cin>>NoOfSubs;

    cout<<end1;
    for(int i=0; i<NoOfSubs; i++)
}

        cout<<"Enter credits of subject"<<i+1<<" : ";
        cin>>credits[i];
        cout<<"Enter points of subject"<<i+1<<" : ";
        cin>>points[i];
        cout<<"---------------------------------------------"<<end1<<end1;
        }

        for(int i=0; i<NoOfSubs; i++)
        {
            total = credits[i]*points[i];
            sum += total;

        }

        for(int i=0; i<NoOfSubs; i++)
        {
        totalCredits += credits[i];

        cout<<end1<<end1;
        cout<<"Total Points: "<<sum<<end1;
        cout<<"Total Credits: "<<totalCredits<<end1;
        cout<<"Total GPA :"<<sum/totalCredits<<end1;

        cout<<"\n press any key to go back to menu...";
        getch();
        }
        void calculateCGPA()
        {
            system("cls")
            int NoOfSubs;

            cout<<"------------------------------------"<<end1;
            cout<<" CGPA Calculator                    "<<end1;
            cout<<"------------------------------------"<<end1;

               cout<<"Enter Semester #" << i+1 << "GPA:";
               cin>>semesters[i];
        }

        for(int i=0; i<NoOfSubs; i++)
        semTotal += semesters[i];

        cout<<"Your CGPA :" <<semTotal/NoOfSubs <<end1;

        cout<<"\n press any key to go back to menu...";
        getch();

        }

        void instructions(){
            system("cls");
            cout<<end1<<end1;
            cout<<"How to calculate GPA and CGPA"<<end1;
            cout<<"--------------------------------"<<end1;
            cout<<" GPA = Sum of (Credit*point)/ toal of credits"<<end1<<end1;
            cout<<"CGPA = Sum of GPA / number of semesters"<,end1;


            cout<<end1<<end1;
            cout<<" Grade - point Table :"<<end1;
            cout<<"--------------------------------------"<<end1;
            cout<<"\tGrade \t\t 4.0 Scale"<<end1;
            cout<<"--------------------------------------"<<end1<<end1;
            cout<<"\tA+ \t\t 4.0"<<end1;
            cout<<"\tA \t\t 4.0"<<end1;
            cout<<"tA- \t\t 3.7"<<end1;
            cout<<"tB+ \t\t 3.3"<<end1;
            cout<<"tB \t\t 3.0"<<end1;
            cout<<"tB- \t\t 2.7"<<end1;
            cout<<"tC+ \t\t 2.3"<<end1;
            cout<<"tC \t\t 2.0"<<end1;
            cout<<"tC- \t\t 1.7 "<<end1;
            cout<<"tD+ \t\t 1.3"<<end1;
            cout<<"tD \t\t 1.0"<<end1;
            count<<"tD- \t\t 0.7"<<end1;
            count<<"tF \t\t 0.0"<<end;

            cout<<"\n press any key to go back to menu...";
            getch();

        }
int main()
{
    do{
        system("cls");
        cout<<"------------------------------------"<<end1;
        cout<<"         GPA Calculator"             <<end1;
        cout<<"-------------------------------------"<<end1<<end1;
        cout<<"1. Calculate GPA"<<end1;
        cout<<"2. Calculate CGPA"<<end1;
        cout<<"3. How to calculate GPA?"<<end1;
        cout<<"4. Quit"<<end1<<end1;
        cout<<"Select option";
        char op = getch();

        if( op=='1') calculateGPA();
        else if( op=='2') calculateCGPA();
        else if( op== '3')instructions();
        else if( op=='4') exit(0);
    }while(1);
    return 0;
    }
}