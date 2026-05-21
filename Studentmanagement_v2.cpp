#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
class student //making student class 
{
    public:
    std::string name;
    int roll;
    float physics,chemistry,maths;
    
};
void Add(std::vector<student>& students)
    {                                                                   //function to add student using vector.
        student s;
        std::cin.ignore();
        std::cout<<"Enter student name : "<<std::endl;
        getline(std::cin, s.name);
        std::cout<<"Enter roll number : "<<std::endl;
        std::cin>>s.roll;
        std::cout<<"Enter marks in physics : "<<std::endl;
        std::cin>>s.physics;
        std::cout<<"Enter marks in chemistry : "<<std::endl;
        std::cin>>s.chemistry;
        std::cout<<"Enter marks in maths : "<<std::endl;
        std::cin>>s.maths;
        students.push_back(s);
    }
    void display(std::vector<student>& students)
    {
                                                                          //function for displaying all students in vector.
        for(int i = 0;i < students.size();i++)
        {
            std::cout<<"Name : "<<students[i].name<<std::endl
            <<"Roll number : "<<students[i].roll<<std::endl
            <<"Physics : "<<students[i].physics<<std::endl
            <<"Chemistry : "<<students[i].chemistry<<std::endl
            <<"Maths : "<<students[i].maths<<std::endl
            <<"Total marks : "<<students[i].maths+students[i].physics+students[i].chemistry<<std::endl
            <<"Average marks : "<<(students[i].maths+students[i].physics+students[i].chemistry)/3<<std::endl
            <<"_______________________________________________________________________"<<std::endl;
        }
        
    }
    void check(std::vector<student>& students)
    {
        int n;
        std::cout<<"Enter the roll number of the student : ";
        std::cin>>n;
        for(int i=0;i<students.size();i++)
        {
            if(students[i].roll==n)
            {
                std::cout<<"Name : "<<students[i].name<<std::endl
                <<"Roll number : "<<students[i].roll<<std::endl
                <<"Physics : "<<students[i].physics<<std::endl
                <<"Chemistry : "<<students[i].chemistry<<std::endl
                <<"Maths : "<<students[i].maths<<std::endl
                <<"_______________________________________________________________________"<<std::endl;
                break;
            }
        }
    }
    bool cmp(const student& a,const student& b)//custom sorting function 
    {
        return a.maths+a.chemistry+a.physics>b.maths+b.chemistry+b.physics;
    }
    void topper(std::vector<student>& students)//determines the topper by stl sort function
    {
        if(students.empty())
        {
            std::cout<<"No students found!!"<<std::endl;
        }
        else
        {
            std::sort(students.begin(),students.end(),cmp);
            std::cout<<"Topper details"<<std::endl<<"_______________________"<<std::endl;
            std::cout<<"Name : "<<students[0].name<<std::endl
            <<"Roll number : "<<students[0].roll<<std::endl
            <<"Physics : "<<students[0].physics<<std::endl
            <<"Chemistry : "<<students[0].chemistry<<std::endl
            <<"Maths : "<<students[0].maths<<std::endl
            <<"_______________________________________________________________________"<<std::endl;
        }
    }                                                          
int main()
{
    int n;
    std::vector<student> students;                                                   //creating vector using class as its type of data.
    do{
        std::cout<<"1.Add a student"<<std::endl
        <<"2.Display all students with total and average"<<std::endl
        <<"3.Search with roll number"<<std::endl
        <<"4. Find topper"<<std::endl<<"5.Exit"<<std::endl<<"Your Choice : ";
        std::cin>>n;
        std::cout<<std::endl<<"--------------------------------------------------------------"<<std::endl;
        switch (n)
        {
        case 1:
            Add(students);
            break;
        case 2:    
            display(students);
            break;
        case 3:
            check(students);
            break;
        case 4:
            topper(students);
            break;            
        }
    }while(n!=5);
    std::cout<<"Thanks for visiting :)"<<std::endl;
    return 0;
    //the end :)
}
