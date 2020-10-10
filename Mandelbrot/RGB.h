#ifndef RGB_H_
#define RGB_H_

namespace caveofprogramming {
	struct RGB
	{
		double r;
		double g;
		double b;
	public:
		RGB(double r, double g, double b);
		RGB();
	};

	RGB operator-(const RGB& first, const RGB& second);
}


#endif