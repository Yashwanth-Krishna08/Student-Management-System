#include<iostream>
#include<string>
class student
{
    protected:
    std::string name;
    int roll_no;
    public:
    void getdetails()
    {
        std:: cout<<"Enter students name :"<<std::endl;
        getline(std::cin,name);
        std::cout<<"Enter students roll number :"<<std::endl;
        std:: cin>>roll_no;
        this-> name = name;
        this-> roll_no = roll_no;
    }
    void displaydetails()
    {
        std::cout<<"Name : "<<name<<std::endl;
        std::cout<<"Roll Number : "<<roll_no<<std::endl;
    } 
};
class mark : public student
{ 
    protected:
    int m,p,c;
    public:
     void getmark()
    {
        int maths,physics,chemistry;
        std::cout<<"Enter marks of maths,physics and chemistry"<<std::endl;
        std::cin>>maths>>physics>>chemistry;
        this-> m = maths;
        this-> p = physics;
        this-> c = chemistry;
    }
     void displaymark()
    {
        std::cout<<"Marks in maths : "<<m<<std::endl;
        std::cout<<"Marks in physics : "<<p<<std::endl;
        std::cout<<"Marks in chemistry : "<<c<<std::endl;
    } 

};
class result : public mark
{
    public:
    int total =0 ;
    float avg = 0;
    void calculatetotal()
    {
        total = m + p + c;
    }
    void calculateaverage()
    {
         avg = total/3; 
    }
    void displayresult()
    {
        calculatetotal();
        calculateaverage();
        std::cout<<"Total marks : "<<total<<std::endl;
        std::cout<<"Average mark : "<<avg<<std::endl;
    }
};
int main()
{
    result r;   
    r.getdetails();
    r.getmark();
    r.displaydetails();
    r.displaymark();
    r.displayresult();
    return 0;
}