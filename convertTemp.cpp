#include "convertTo.h"
#include <iostream>
#include <string>

namespace convertTo {

	double fahrenheit(std::string y, double a);
	double celsius(std::string y, double a);
	double kelvin(std::string y, double a);


	double convertTemp(std::string x, std::string y, double a) {
		double ans;
		if (x=="f"||x=="F") {
			fahrenheit(y,a);
			ans = fahrenheit(y, a);
		}
		else if (x=="c"||x=="C") {
			celsius(y,a);
			ans = celsius(y,a);
		}
		else if (x=="k"||x=="K") {
			kelvin(y,a);
			ans = kelvin(y, a); 
		}
		else {
			ans = a;
		}
		std::cout << ans;
		return ans; 
	}

	double fahrenheit(std::string y, double a) {
		double b;
		if (y=="K"|| y=="k") {
			b = (a - 32) * (5.0 / 9) + 273.15;
			return b;
		}
		else if (y=="c"||y=="C") {
			b = (a - 32) * (5.0 / 9);
			return b;
		}
		else {
			return a;
		}
	}

	double celsius (std::string y, double a) {
		double b;
		if (y == "K" || y == "k") {
			b = a + 273.15;
			return b;
		}
		else if (y == "f" || y == "F") {
			b = a * (9.0 / 5) + 32;
			return b;
		}
		else {
			return a;
		}
	}

	double kelvin (std::string y, double a) {
		double b;
		if (y == "c" || y == "C") {
			b = a - 273.15;
			return b;
		}
		else if (y == "f" || y == "F") {
			b = (a - 273.15) * (9.0 / 5) + 32;
			return b;
		}
		else {
			return a;
		}
	}


}
