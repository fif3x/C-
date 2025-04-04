#pragma once
#include <iostream>
#include <string>
#include <vector>

namespace c$ {
	typedef char ch$; //character
	typedef std::string s$; //string

	typedef int $; //integer
	typedef double $$; //double
	typedef float _$; //float
	typedef long long int $$$; //long long int

	typedef const int ci$; //const integer
	typedef const double cd$; //const double
	typedef const float c_$; //const float
	typedef const long long int c$$$; //const long long int
	typedef const char cch$; //const character
	typedef const std::string cs$; //const string

	typedef bool b$; //boolean
	typedef void v$; //void

	typedef std::vector<s$> dsa; //dynamic string array
	typedef std::vector<$> dia; //dynamic integer array
	typedef std::vector<$$> dda; //dynamic double array
	typedef std::vector<_$> dfa; //dynamic float array
	typedef std::vector<$$$> dla; //dynamic long long int array

	cd$ pi = 3.141592653; //pi

    cs$ localIP = "127.0.0.1"; //local ip
	cs$ gIP = "8.8.8.8"; //google ip
	cs$ sgIP = "8.8.4.4"; //secondary google ip
	cs$ sbntmsk = "255.255.255.0"; //subnet mask

	dsa bIPs = { localIP, gIP, sgIP, sbntmsk }; //basic IPs

	


}

namespace cdlr {
	using namespace c$;

	v$ strout(s$ str){ //string output
		std::cout << str;
	}
	v$ chrout(ch$ chr) { //character output
		std::cout << chr;
	}
	v$ intout($ num) { //integer output
		std::cout << num;
	}
	v$ fltout(_$ num) { //float output
		std::cout << num;
	}
	v$ dblout($$ num) { //double output
		std::cout << num;
	}
	v$ nl($ times) { //new line
		for ($ i = 0; i < times; i++) {
			strout("\n");
		}
	}
	v$ strin(s$ str) { //string input
		std::cin >> str;
	}
	v$ intin($ num) { //integer input
		std::cin >> num;
	}

	$ success() { //success
		return 0;
	}
	$ fail() { //fail
		return 1;
	}
	$ fv($ value) { //function value
		return value; 
	}

	v$ wait() { //wait for user input
		std::cout << "Press any key to continue...";
		std::cin.get();
	}

	v$ clearScreen() { //clear screen
		system("cls");
	}
	v$ title(s$ title) { //set title
		std::string command = "title " + title; //create command
		system(command.c_str()); //execute command
	}

	v$ setColor(s$ color) {
		std::string command = "color " + color; //create command
		system(command.c_str()); //execute command
	}

	dda bm = { pi }; //basic mathematics

}
