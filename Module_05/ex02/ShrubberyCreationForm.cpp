/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 22:52:57 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/18 02:35:48 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("shrubbery creation",145,137)
,target(target + "_shrubbery")
{
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &SCF)
{
    *this = SCF;
}
ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &SCF) 
{
    this->target = SCF.target;
    return *this;
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{

}
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (Form::getS() && executor.getGrade() <= Form::getGradeExe())
    {
        std::ofstream file;
        file.open(this->target);
        file<<"#############################################################"<<std::endl;
	    file<<"#                                                           #"<<std::endl;  
	    file<<"#                                                           #"<<std::endl;   
        file<<"#                            ,' `,                          #"<<std::endl;   
        file<<"#                           /.o `,                          #"<<std::endl;       
        file<<"#                           `, |-`,                         #"<<std::endl;       
        file<<"#                          -',    '                         #"<<std::endl;                                            
        file<<"#                         `,'_)   '\\                        #"<<std::endl;                                         
        file<<"#                         ,'    `-`,                        #"<<std::endl;                        
        file<<"#                        _`o,-   (_)/                       #"<<std::endl;    
        file<<"#                       '_ '    o  `-,                      #"<<std::endl;                        
        file<<"#                       /   ,-L   `-'                       #"<<std::endl;
        file<<"#                      _`-`_     ,  `'.                     #"<<std::endl;
        file<<"#                     ;.  (,'  `| `.-. \\                    #"<<std::endl;
        file<<"#                     ,``_'    (_)  o `'                    #"<<std::endl;
        file<<"#                    ,` '_  ,\\   o   _ \\                    #"<<std::endl;    
        file<<"#                   /..-(_)' |','..-/`(_)-`                 #"<<std::endl;
        file<<"#                            |  |                           #"<<std::endl;
        file <<"#                          --'  `--                         #"<<std::endl;
        file <<"#                                                           #"<<std::endl;                                  
	    file <<"#############################################################"<<std::endl;
        file  << std::endl << std::endl<<std::endl;
        file <<"##################################################################"<<std::endl;
        file <<"#                                                                #"<<std::endl;
        file <<"#                                  .                             #"<<std::endl; 
        file <<"#                                          .         ;           #"<<std::endl;  
        file <<"#             .              .              ;%     ;;            #"<<std::endl;  
        file <<"#               ,           ,                :;%  %;             #"<<std::endl;  
        file<<"#                :         ;                   :;%;'     .,      #"<<std::endl;   
        file<<"#       ,.        %;     %;            ;        %;'    ,;        #"<<std::endl;   
        file<<"#         ;       ;%;  %%;        ,     %;    ;%;    ,%'         #"<<std::endl;
        file<<"#          %;       %;%;      ,  ;       %;  ;%;   ,%;'          #"<<std::endl; 
        file<<"#           ;%;      %;        ;%;        % ;%;  ,%;'            #"<<std::endl;      
        file<<"#            `%;.     ;%;     %;'         `;%%;.%;'              #"<<std::endl;
        file<<"#             `:;%.    ;%%. %@;        %; ;@%;%'                 #"<<std::endl;
        file<<"#                `:%;.  :;bd%;          %;@%;'                   #"<<std::endl;
        file<<"#                  `@%:.  :;%.         ;@@%;'                    #"<<std::endl;   
        file<<"#                    `@%.  `;@%.      ;@@%;                      #"<<std::endl;    
        file<<"#                      `@%%. `@%%    ;@@%;                       #"<<std::endl;    
        file<<"#                        ;@%. :@%%  %@@%;                        #"<<std::endl;
        file<<"#                          %@bd%%%bd%%:;                         #"<<std::endl;
        file<<"#                            #@%%%%%:;;                          #"<<std::endl;
        file<<"#                            %@@%%%::;                           #"<<std::endl;
        file<<"#                            %@@@%(o);  . '                      #"<<std::endl;          
        file<<"#                            %@@@o%;:(.,'                        #"<<std::endl;                   
        file<<"#                        `.. %@@@o%::;                           #"<<std::endl;
        file<<"#                           `)@@@o%::;                           #"<<std::endl;   
        file<<"#                            %@@(o)::;                           #"<<std::endl;
        file<<"#                           .%@@@@%::;                           #"<<std::endl;
        file<<"#                           ;%@@@@%::;.                          #"<<std::endl;    
        file<<"#                          ;%@@@@%%:;;;.                         #"<<std::endl;    
        file<<"#                      ...;%@@@@@%%:;;;;..                       #"<<std::endl;
        file<<"#                                                                #"<<std::endl;
        file<<"##################################################################"<<std::endl;
    }
    else
        throw Form::NotExection();      
}
