#include "Bureaucrat.hpp"
#include <iostream>

int main() 
{
    std::cout << "=== Normal Grade Test ===" << std::endl;
    Bureaucrat b1("b1", 10);
    std::cout << b1 ;

    std::cout << "\n=== Grade Too Low Test ===" << std::endl;
    Bureaucrat b2("b2", 160); // Should trigger GradeToLowException
    std::cout << b2;
    b2.decGrade(); // Should trigger GradeToLowException

    std::cout << "\n=== Grade Too High Test ===" << std::endl;
    Bureaucrat b3("b3", 0); // Should trigger GradeToHighException
    std::cout << b3;
    b3.incGrade(); // Should trigger GradeToHighException

    return 0;
}