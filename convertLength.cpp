#include "convertTo.h"
#include <string>
#include <iostream>

namespace convertTo{

	std::string um = "um", mm = "mm", cm = "cm", nm = "nm", m = "m", in = "in", ft = "ft", km = "km", mi = "mi", NM = "NM";

	double micrometers(std::string y, double a);
	double millimeters(std::string y, double a);
	double nanometers(std::string y, double a);
	double centimeters(std::string y, double a);
	double meters(std::string y, double a);
	double inches(std::string y, double a);
	double kilometers(std::string y, double a);
	double miles(std::string y, double a);
	double nautical(std::string y, double a);
	double feet(std::string y, double a);


	double convertLength(std::string x, std::string y, double a) {
		double Ans; 
		if (x == um) {
			micrometers(y,a);
			Ans = micrometers(y,a);
		}
		else if (x==mm) {
			millimeters(y,a);
			Ans = millimeters(y,a);
		}
		else if (x == nm) {
			nanometers(y, a);
			Ans = nanometers(y, a);
		}
		else if (x == in) {
			inches(y, a);
			Ans = inches(y, a);
		}
		else if (x == km) {
			kilometers(y, a);
			Ans = kilometers(y, a);
		}
		else if (x == ft) {
			feet(y, a);
			Ans = feet(y, a);
		}
		else if (x == m) {
			meters(y, a);
			Ans = meters(y, a);
		}
		else if (x == mi) {
			miles(y, a);
			Ans = miles(y, a);
		}
		else if (x == NM) {
			nautical(y, a);
			Ans = nautical(y, a);
		}
		std::cout << Ans;
		return Ans;
	}

	double micrometers(std::string y,double a) {
		double b;
		if (y==mm) {
			b = a / 1000;
		}
		else if (y == cm) {
			b = a / 10000;
		}
		else if (y == nm) {
			b = a * 1000;
		}
		else if (y == m) {
			b = a / 1000000;
		}
		else if (y == in) {
			b = a / 25400;
		}
		else if (y == ft) {
			b = a / 304800;
		}
		else if (y == km) {
			b = a / 1000000000;
		}
		else if (y == mi) {
			b = a / 1609000000;
		}
		else if (y == NM) {
			b = a / 1852000000;
		}
		else {
			b = a;
		}
		return b;
	}

	double millimeters(std::string y, double a) {
		double b;
		if (y == um) {
			b = a * 1000;
		}
		else if (y == cm) {
			b = a / 10;
		}
		else if (y == nm) {
			b = a * 100000;
		}
		else if (y == m) {
			b = a / 1000;
		}
		else if (y == in) {
			b = a / 25.4;
		}
		else if (y == ft) {
			b = a / 304.8;
		}
		else if (y == km) {
			b = a / 1000000000;
		}
		else if (y == mi) {
			b = a / 1609000000;
		}
		else if (y == NM) {
			b = a / 1852000;
		}
		else {
			b = a;
		}
		return b;
	}

	double nanometers(std::string y, double a) {
		double b;
		if (y == um) {
			b = a / 1000;
		}
		else if (y == cm) {
			b = a / 10000000;
		}
		else if (y == mm) {
			b = a / 1000000;
		}
		else if (y == m) {
			b = a / 1000000000;
		}
		else if (y == in) {
			b = a / 25400000;
		}
		else if (y == ft) {
			b = a / 304800000;
		}
		else if (y == km) {
			b = a / 1000000000000;
		}
		else if (y == mi) {
			b = a / 1609000000000;
		}
		else if (y == NM) {
			b = a / 1852000000000;
		}
		else {
			b = a;
		}
		return b;
	}

	double centimeters(std::string y, double a) {
		double b;
		if (y == um) {
			b = a * 10000;
		}
		else if (y == nm) {
			b = a * 10000000;
		}
		else if (y == mm) {
			b = a * 10;
		}
		else if (y == m) {
			b = a / 100;
		}
		else if (y == in) {
			b = a / 2.54;
		}
		else if (y == ft) {
			b = a / 30.48;
		}
		else if (y == km) {
			b = a / 100000;
		}
		else if (y == mi) {
			b = a / 160934;
		}
		else if (y == NM) {
			b = a / 185200;
		}
		else {
			b = a;
		}
		return b;
	}

	double inches(std::string y, double a) {
		double b;
		if (y == um) {
			b = a * 25400;
		}
		else if (y == nm) {
			b = a * 25400000;
		}
		else if (y == mm) {
			b = a * 25.4;
		}
		else if (y == m) {
			b = a / 39.37;
		}
		else if (y == cm) {
			b = a * 2.54;
		}
		else if (y == ft) {
			b = a / 12;
		}
		else if (y == km) {
			b = a / 39370;
		}
		else if (y == mi) {
			b = a / 63360;
		}
		else if (y == NM) {
			b = a / 72913;
		}
		else {
			b = a;
		}
		return b;
	}

	double kilometers(std::string y, double a) {
		double b;
		if (y == um) {
			b = a * 1000000000;
		}
		else if (y == nm) {
			b = a * 1000000000000;
		}
		else if (y == mm) {
			b = a * 1000000;
		}
		else if (y == m) {
			b = a * 1000;
		}
		else if (y == cm) {
			b = a * 100000;
		}
		else if (y == ft) {
			b = a * 3281;
		}
		else if (y == in) {
			b = a * 39370;
		}
		else if (y == mi) {
			b = a / 1.60934;
		}
		else if (y == NM) {
			b = a / 1.852;
		}
		else {
			b = a;
		}
		return b;
	}

	double feet(std::string y, double a) {
		double b;
		if (y == um) {
			b = a * 304800;
		}
		else if (y == nm) {
			b = a * 304800000;
		}
		else if (y == mm) {
			b = a * 304.8;
		}
		else if (y == m) {
			b = a / 3.281;
		}
		else if (y == cm) {
			b = a * 30.48;
		}
		else if (y == km) {
			b = a / 3281;
		}
		else if (y == in) {
			b = a * 12;
		}
		else if (y == mi) {
			b = a / 5280;
		}
		else if (y == NM) {
			b = a / 6076;
		}
		else {
			b = a;
		}
		return b;
	}

	double meters(std::string y, double a) {
		double b;
		if (y == um) {
			b = a * 1000000;
		}
		else if (y == nm) {
			b = a * 1000000000;
		}
		else if (y == mm) {
			b = a * 1000;
		}
		else if (y == ft) {
			b = a * 3.281;
		}
		else if (y == cm) {
			b = a * 100;
		}
		else if (y == km) {
			b = a / 1000;
		}
		else if (y == in) {
			b = a * 39.3701;
		}
		else if (y == mi) {
			b = a / 1609;
		}
		else if (y == NM) {
			b = a / 1852;
		}
		else {
			b = a;
		}
		return b;
	}

	double miles(std::string y, double a) {
		double b;
		if (y == um) {
			b = a * 1609000000;
		}
		else if (y == nm) {
			b = a * 1609000000000;
		}
		else if (y == mm) {
			b = a * 1609000;
		}
		else if (y == ft) {
			b = a * 5280;
		}
		else if (y == cm) {
			b = a * 160934;
		}
		else if (y == km) {
			b = a / 1.609;
		}
		else if (y == in) {
			b = a * 63360;
		}
		else if (y == m) {
			b = a * 1609.34;
		}
		else if (y == NM) {
			b = a / 1.151;
		}
		else {
			b = a;
		}
		return b;
	}

	double nautical(std::string y, double a) {
		double b;
		if (y == um) {
			b = a * 1852000000;
		}
		else if (y == nm) {
			b = a * 1852000000000;
		}
		else if (y == mm) {
			b = a * 1852000;
		}
		else if (y == ft) {
			b = a * 6076;
		}
		else if (y == cm) {
			b = a * 185200;
		}
		else if (y == km) {
			b = a / 1.852;
		}
		else if (y == in) {
			b = a * 72913.4;
		}
		else if (y == m) {
			b = a * 1852;
		}
		else if (y == mi) {
			b = a * 1.151;
		}
		else {
			b = a;
		}
		return b;
	}

}
