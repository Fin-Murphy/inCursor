#include <iostream>
#include <string>
#include <fstream> 
#include <vector>
#include <sstream> 
#include <iomanip>
#include <exception>
#include <stdexcept>

#include "term.h"


std::vector<std::string> terminal::fQuery() {

	std::vector<std::string> returnvec = {};

	try {

	std::ifstream file ("./storage.txt");
	if(!file.is_open()){throw std::invalid_argument("Not a valid arg");}
	//std::vector<std::string> returnvec = {};
	std::string line;

		while(std::getline(file,line)) {
			std::stringstream ss(line);
			std::string taskName;
			int taskCval;
			int taskComp;

		}
	}

	catch(...){
		std::cout << "operation failed, creating taskfile" << std::endl;

		std::ofstream file("./storage.txt");

		file << "> SPECIFIER:_Base_Tasklist_File" << std::endl;
		file << "> 1.2.3.4.5" << std::endl;
	
		std::cout << "Wrote in basic file" << std::endl;

    }

return returnvec;

}


void terminal::termDisp(terminal inpterm) {
	bool dRun = true;
	
	while(dRun == true){

		std::string userInp = "";
		std::cout 
		//<< "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
		//<< "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
		//<< "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
		<< 	" Continue? (enter to continue, q to quit): > ";
		std::cin >> userInp;

		if(userInp == "q"){

			dRun = false;

		}
		if(userInp == "l"){
			inpterm.fQuery();
		}

	}

}

