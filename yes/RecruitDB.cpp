#include "RecruitDB.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

RecruitDB::RecruitDB() 
{
    vector<Recruit> recruitDB;
}

RecruitDB::RecruitDB(const std::vector<Recruit> & RecruitDB)
{
    recruitDB = RecruitDB;  
}

RecruitDB::~RecruitDB()
{
    
}

void RecruitDB::read_txt(string filename) {
   
    ifstream data;
    data.open(filename);
    
    while(!data.eof())
    {
        Recruit athlete;
        athlete.read_txt(data);
        recruitDB.push_back(athlete);
        
    }

    
    
    data.close();
}
    

void RecruitDB::print_txt(string filename) {
   
    ofstream data;
    data.open(filename);
    
    for (unsigned int i = 0; i < recruitDB.size(); i++)  {
        
        recruitDB[i].print_txt(data); 
        recruitDB[i].print();  
        cout << endl;
    }

    data.close();
}

// Search for athletes by state
void RecruitDB::searchByState(string state)  {
   
   cout << "Searching for State=" << state << endl;
   cout << "----------------------" << endl;
   
   for (unsigned int i = 0; i < recruitDB.size(); i++)
    {
        if (recruitDB[i].getState() == state)
        {
            recruitDB[i].print();
            cout << endl;
        }
    }
}

// Search for athletes by position
void RecruitDB::searchByPosition(string position) {
   
    cout << "Searching for Position=" << position << endl;
    cout << "----------------------" << endl;
    
    
    for (unsigned int i = 0; i < recruitDB.size(); i++)
    {
        if (recruitDB[i].getPosition() == position)
        {
            recruitDB[i].print();
            cout<< endl;
        }
    }
}

// Search for athletes by grade
void RecruitDB::searchByGrade(int grade)  {
    
    cout << "Searching for Grade=" << grade << endl;
    cout << "----------------------" << endl;
    
    
   for (unsigned int i = 0; i < recruitDB.size(); i++)
    {
        if (recruitDB[i].getGrade() == grade)
        {
            recruitDB[i].print();
            cout << endl;
        }
    }
}

// Search for athletes by position and state
void RecruitDB::searchByPositionAndState(string position, string state)  {
    
    cout << "Searching for Position=" << position << " and State=" << state << endl;
    cout << "----------------------" << endl;
    
    
    for (unsigned int i = 0; i < recruitDB.size(); i++)
    {
        if (recruitDB[i].getPosition() == position && recruitDB[i].getState() == state)
        {
            recruitDB[i].print();
            cout << endl;
        }
    }
}