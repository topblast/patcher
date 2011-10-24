
#include <string>
#include <iostream>

#include "downloader.h"


int main(int argc, char* argv[]) {

	try {
	  	Downloader downloader("www.leaiva.com");
	  	downloader.get("/client/test/asdads.txt", "");
	}
	catch(std::exception& e) {
    	std::cerr << e.what() << std::endl;
  	}
	
  	return 0;
}

