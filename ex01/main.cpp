#include "Bureaucrat.hpp"  
#include "Form.hpp"

int main()
{ 
        Bureaucrat john("John", 60);
        Form taxForm("TaxForm", 75, 100);
        std::cout<<"Grade to Be Signed"<<taxForm.getSignGrade()<<std::endl ;  
        std::cout << "Form name: " << taxForm.getName() << "\n";
        std::cout << "Is signed: " << taxForm.isSigned() << "\n";
        taxForm.beSigned(john);
        std::cout << "Is signed now: " << taxForm.isSigned() << "\n";

}