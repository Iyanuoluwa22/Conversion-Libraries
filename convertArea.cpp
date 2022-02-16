#include "convertTo.h"
#include <string>
#include <iostream> 

namespace convertTo {
	std::string km2 = "km2", in2 = "in2", ft2 = "ft2", ac = "ac", ha = "ha", m2 = "m2", mi2 = "mi2", yd2 = "yd2";

	double squareKilometer(std::string y, double a);
	double squareMeter(std::string y, double a);
	double squareInch(std::string y, double a);
	double squareFoot(std::string y, double a);
	double squareMile(std::string y, double a);
	double squareYard(std::string y, double a);
	double acre(std::string y, double a);
	double hectare(std::string y, double a);

	double convertArea(std::string x, std::string y, double a) {
		double ans;

		if (x == km2) {
			squareKilometer(y, a);
			ans = squareKilometer(y, a);
		}
		else if (x == m2) {
			squareMeter(y, a);
			ans = squareMeter(y, a);
		}
		else if (x == in2) {
			squareInch(y, a);
			ans = squareInch(y, a);
		}
		else if (x == ft2) {
			squareFoot(y, a);
			ans = squareFoot(y, a);
		}
		else if (x == mi2) {
			squareMile(y, a);
			ans = squareMile(y, a);
		}
		else if (x == yd2) {
			squareYard(y, a);
			ans = squareYard(y, a);
		}
		else if (x == ac) {
			acre(y, a);
			ans = acre(y, a);
		}
		else if (x == ha) {
			hectare(y, a);
			ans = hectare(y, a);
		}
		else
		{
			ans = a;
		}
		std::cout << ans <<std::endl;
		return ans;
	}

	double squareInch(std::string y, double a) {
		double b;
		if (y == ft2) {
			b = a / 144.0;
			return b;
		}
		else if (y == yd2) {
			b = a / 1296.0;
			return b;
		}
		else if (y == m2) {
			b = a / 1550.0;
			return b;
		}
		else if (y==mi2) {
			b = a / 4014000000.0;
			return b;
		}
		else if (y == km2) {
			b = a / 1550000000.0;
			return b;
		}
		else if (y == ac) {
			b = a / 6273000.0;
			return b;
		}
		else if (y == ha) {
			b = a / 15500000.0;
			return b;
		}
		else {
			return a;
		}
	}

	double squareFoot(std::string y, double a) {
		double b;
		if (y == in2) {
			b = a * 144.0;
			return b;
		}
		else if (y == yd2) {
			b = a / 9.0;
			return b;
		}
		else if (y == m2) {
			b = a / 10.764;
			return b;
		}
		if (y == km2) {
			b = a / 10760000.0;
			return b;
		}
		if (y == mi2) {
			b = a / 27800000.0;
			return b;
		}
		else if (y == ac) {
			b = a / 6273000.0;
			return b;
		}
		else if (y == ha) {
			b = a / 15500000.0;
			return b;
		}
		else {
			return a;
		}
	}

	double squareYard(std::string y, double a) {
		double b;
		if (y == in2) {
			b = a *1296;
			return b;
		}
		else if (y == ft2) {
			b = a * 9.0;
			return b;
		}
		else if (y == m2) {
			b = a / 1.196;
			return b;
		}
		if (y == km2) {
			b = a / 1196000.0;
			return b;
		}
		if (y == mi2) {
			b = a / 3098000.0;
			return b;
		}
		else if (y == ac) {
			b = a / 4840;
			return b;
		}
		else if (y == ha) {
			b = a / 11960;
			return b;
		}
		else {
			return a;
		}
	}

	double squareMeter(std::string y, double a) {
		double b;
		if (y == in2) {
			b = a * 1550;
			return b;
		}
		else if (y == ft2) {
			b = a * 10.764;
			return b;
		}
		else if (y == yd2) {
			b = a * 1.196;
			return b;
		}
		if (y == km2) {
			b = a / 1000000.0;
			return b;
		}
		if (y == mi2) {
			b = a / 2590000.0;
			return b;
		}
		else if (y == ac) {
			b = a / 4047;
			return b;
		}
		else if (y == ha) {
			b = a / 10000;
			return b;
		}
		else {
			return a;
		}
	}
	
	double squareKilometer(std::string y, double a) {
		double b;
		if (y==in2) {
			b = a * 1550000000;
			return b;
		}
		else if (y==ft2) {
			b = a * 107600000;
			return b;
		}
		else if (y == yd2) {
			b = a * 1196000;
			return b;
		}
		else if (y == m2) {
			b = a * 1000000;
			return b;
		}
		if (y == mi2) {
			b = a / 2.59;
			return b;
		}
		else if (y == ac) {
			b = a * 247.105;
			return b;
		}
		else if (y == ha) {
			b = a * 100;
			return b;
		}
		else {
			return a;
		}
	}

	double squareMile(std::string y, double a) {
		double b;
		if (y == in2) {
			b = a * 4014000000;
			return b;
		}
		else if (y == ft2) {
			b = a * 27880000;
			return b;
		}
		else if (y == yd2) {
			b = a * 3098000;
			return b;
		}
		else if (y == m2) {
			b = a * 2590000;
			return b;
		}
		if (y == km2) {
			b = a * 2.59;
			return b;
		}
		else if (y == ac) {
			b = a * 640;
			return b;
		}
		else if (y == ha) {
			b = a * 259;
			return b;
		}
		else {
			return a;
		}
	}

	double acre(std::string y, double a) {
		double b;
		if (y == in2) {
			b = a * 6273000;
			return b;
		}
		else if (y == ft2) {
			b = a * 43560;
			return b;
		}
		else if (y == yd2) {
			b = a * 4840;
			return b;
		}
		else if (y == m2) {
			b = a * 4047;
			return b;
		}
		if (y == km2) {
			b = a / 247;
			return b;
		}
		else if (y == mi2) {
			b = a / 640;
			return b;
		}
		else if (y == ha) {
			b = a / 2.471;
			return b;
		}
		else {
			return a;
		}
	}

	double hectare(std::string y, double a) {
		double b;
		if (y == in2) {
			b = a * 15500000;
			return b;
		}
		else if (y == ft2) {
			b = a * 107639;
			return b;
		}
		else if (y == yd2) {
			b = a * 11960;
			return b;
		}
		else if (y == m2) {
			b = a * 100000;
			return b;
		}
		if (y == km2) {
			b = a / 100;
			return b;
		}
		else if (y == mi2) {
			b = a / 259;
			return b;
		}
		else if (y == ac) {
			b = a * 2.471;
			return b;
		}
		else {
			return a;
		}
	}

}