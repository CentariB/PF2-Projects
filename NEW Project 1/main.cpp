//-----------------------------------------------------------
//  Purpose:    Demonstrate use of Recruit class
//  Author:     Centarrius Brooks
//-----------------------------------------------------------
#include "recruit.h"
#include "RecruitDB.h"
#include <vector>
using namespace std;
//
//-----------------------------------------------------------
// Main program
//-----------------------------------------------------------
int main()

{
    RecruitDB db;

    // Read recruits from input file
    db.read_txt("top100.txt");

  // ifstream data;
  // data.open("top100.txt");


  // Recruit athlete;
   //athlete.read_txt(data);
   //athlete.print();
    

    // Write recruits to output file
    //db.print_txt("test.txt");

    // Search for recruits from a specific state
    db.searchByState("00");
    
    // Search for recruits by position
    db.searchByPosition("!!");
    
    // Search for recruits by position and state
    db.searchByPositionAndState("PF", "AL");
    
    
    // Search for recruits by Grade
    int grade = 93;
    db.searchByGrade(grade);

    return 0;
}

