#include "ShrubberyCreationForm.hpp"  
#include "Bureaucrat.hpp"  
#include <fstream>  

void ShrubberyCreationForm::action () const 
 { 
	std::ofstream  _file((_target + "_ShrubberyCreationForm").c_str())  ;    
	 for (int i = 0; i < 5; i++)
		{
			_file <<
			"         v" << std::endl <<
			"        >X<" << std::endl <<
			"         A" << std::endl <<
			"        d$b" << std::endl <<
			"      .d\\$$b." << std::endl <<
			"    .d$i$$\\$$b." << std::endl <<
			"       d$$@b" << std::endl <<
			"      d\\$$$ib" << std::endl <<
			"    .d$$$\\$$$b" << std::endl <<
			"  .d$$@$$$$\\$$ib." << std::endl <<
			"      d$$i$$b" << std::endl <<
			"     d\\$$$$@$b" << std::endl <<
			"  .d$@$$\\$$$$$@b." << std::endl <<
			".d$$$$i$$$\\$$$$$$b." << std::endl <<
			"        ###" << std::endl <<
			"        ###" << std::endl <<
			"        ###" << std::endl <<
		std::endl;
		}
		_file.close();
 }  ;

AForm* ShrubberyCreationForm::createInstance(std::string Name, std::string Target)
{
    AForm* Inst = new ShrubberyCreationForm(Target);
    return Inst;
}