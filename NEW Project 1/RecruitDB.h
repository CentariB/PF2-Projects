#ifndef RECRUITDB_H
#define RECRUITDB_H

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <vector>
#include "recruit.h"  

class RecruitDB
{

public:
    RecruitDB();  
    RecruitDB(const std::vector<Recruit> & RecruitDB);  
    ~RecruitDB(); 

    // Read and Print Methods
    void read_txt(string file);
    void print_txt(string file);

    // Search methods
    void searchByState(string state) ;
    void searchByPosition(string position) ;
    void searchByGrade(int grade);
    void searchByPositionAndState(string position, string state);
    
    private:
    vector<Recruit> recruitDB;  

};

#endif